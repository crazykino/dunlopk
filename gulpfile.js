const pkg = require("./package.json");
const gulp = require('gulp');
const $ = require("gulp-load-plugins")({
	pattern: ["*"],
	scope: ["dependencies"]
});
const onError = (err) => console.log(err);

var webserver = require('gulp-webserver');
var fileinclude = require('gulp-file-include');
var concat = require('gulp-concat');
var uglify = require('gulp-uglify');
var changing = require('gulp-changed');
var plumber = require('gulp-plumber');
var data = require('gulp-data');
var sass = require('gulp-sass');
var imagemin = require('gulp-imagemin');
var watch = require('gulp-watch');
var livereload = require('gulp-livereload');
var autoprefixer = require('gulp-autoprefixer');

var scssOptions = { // Sass compile option
	outputStyle: "compact", // CSS의 컴파일 결과 코드스타일 지정
	// outputStyle: "expanded", // CSS의 컴파일 결과 코드스타일 지정
	// indentType: "tab", // Indet Values : space , tab
	// indentWidth: 1, // nested, expanded의 경우 "들여쓰기" 의 갯수. Default : 2
	precision: 6, // CSS 의 소수점 자리수. Default : 5
	sourceComments: false // map 처리. Default : false
};
var src = 'src';
var dist = 'dist';
var paths = {
	js: '/js/', // js 소스 경로
	css: '/css/', // css 경로
	img: '/images/', // image 경로
	scss: '/**/*.scss', // scss 경로 - 컴파일 결과는 같은 경로의 dist로 떨어짐
	html: '/**/*.html'
};

// 웹서버 실행
gulp.task('server', function() {
	return gulp.src(dist)
		.pipe(webserver({
			livereload: true,
			port: 3333
		}));
});

gulp.task('compile-sass', function() {
	return gulp.src(src + paths.scss)
		.pipe(plumber()).pipe(sass(scssOptions).on('error', sass.logError))
		.pipe(autoprefixer())
		// .pipe(changing(dist))
		.pipe(gulp.dest(dist));
});
// html inlcude
gulp.task('file-include', function() {
	// return gulp.src(paths.html)
	return gulp.src(src + paths.html)
	.pipe(fileinclude({
		prefix: '@@',
		basepath: '@file'
	}))
	.pipe(gulp.dest(dist));
});

// JS 파일 복사
gulp.task('copy-js', function() { gulp.src(src + '/**/*.{js,json}').pipe(changing(dist)).pipe(gulp.dest(dist)); });
// font cory
gulp.task('copy-fonts', function() {
	gulp.src(src + '/**/*.{ttf,woff,woff2}').pipe(changing(dist)).pipe(gulp.dest(dist));
});

// 이미지 용량 최적화
gulp.task("imagemin", function() {
	return gulp.src(src + "/**/*.{png,jpg,jpeg,gif,svg}")
		.pipe(changing(dist))
		.pipe(imagemin({
			progressive: true,
			interlaced: true,
			optimizationLevel: 7,
			svgoPlugins: [{ removeViewBox: false }],
			verbose: true,
			use: []
		}))
		.pipe(gulp.dest(dist));
});

// --- 실행
gulp.task('filewatch', function () { // 파일 변경 감지용 추가
	watch(src + '/**/*.js', function () {
		gulp.start('copy-js');
	});
	// watch(src + '/**/*.{png,jpg,jpeg,gif,svg}', function () {
	// 	gulp.start('imagemin');
	// });
	watch(src + '/**/*.inc', function () {
		gulp.start('file-include');
	});
});
gulp.task('watch', function() {
	livereload.listen();
	gulp.watch(src + paths.scss, ['compile-sass']);
	gulp.watch(src + paths.html, ['file-include']);
	gulp.watch(dist + '/**').on('change', livereload.changed);
});
gulp.task('default', [
	'server',
	'compile-sass',
	'file-include',
	// 'imagemin',
	'copy-js',
	'copy-fonts',
	'watch',
	'filewatch'
], function() {
});
