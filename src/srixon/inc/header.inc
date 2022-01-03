<header id="header">
	<div class="main-service">
		<div class="bPopup pop-loading">
			<img src="https://www.srixon.co.kr/images/loading.gif" alt="로딩중"><br>
			로딩중입니다. 잠시만 기다려주세요.
		</div>
		<div class="inner">
			<div id="notice">
				<ul></ul>
			</div>
			<div class="utill-menu">
				<ul>
					<li><a href="#" onclick="goLogin();return false;">로그인</a></li>
					<li><a href="#" onclick="dunlop_join();return false;">회원가입</a></li>
					<li><a href="http://www.srixon.co.kr/store/storeList.do">STORE</a></li>
				</ul>
				<div class="flag-menu">
					<a href="#"><img src="https://www.srixon.co.kr/images/kor_flag.jpg" alt="KOREA"></a>
					<ul>
						<li><a href="http://www.srixon-china.com/" target="_blank">CHINA</a></li>
						<li><a href="http://golf.dunlop.co.jp/srixon/index.html" target="_blank">JAPAN</a></li>
						<li><a href="http://www.srixon.com/" target="_blank">UNITED STATES</a></li>
						<li><a href="http://www.srixon.co.uk/" target="_blank">UNITED KINGDOM</a></li>
					</ul>
				</div>

				<a href="http://www.clevelandgolf.co.kr/" class="top-xxio" style="margin-left:15px !important;"
					target="_blank"><img src="https://www.srixon.co.kr/images/top-cle.png" alt=""></a>
				<a href="http://www.xxio.co.kr" class="top-xxio" target="_blank"><img
						src="https://www.srixon.co.kr/images/top-xxio.gif" alt=""></a>
			</div>
		</div><!-- //inner -->
	</div>
	<!--// main-service -->

	<style>
		.gnb_wrap .twlist { display: none; }
		@media (max-width: 1023px) {
			.gnb_wrap .twlist { display: block; }
			.gnb_wrap .twlist {
				transition: .3s ease-out;
				position: relative;
				overflow: hidden;
				background: #1c1b1b;
			}
			.gnb_wrap .twlist li { margin: 0 14px; }
			.gnb_wrap .twlist li .tm {
				display: block;
				border-bottom: 1px solid #282727;
				height: 40px;
				padding-top: 5px;
				box-sizing: border-box;
				font-size: 12px;
				color: #8e8d8d;
			}
			.gnb_wrap .twlist li .tm:before {
				display: inline-block;
				content: "-";
				padding-right: 10px;
				font-size: 12px;
				color: #8e8d8d;
			}
			.gnb_wrap li { cursor: pointer; -webkit-tap-highlight-color: transparent; }
		}
	</style>
	<div class="nav-wrapper">
		<div class="inner">
			<button type="button" class="btn-menu">menu</button>
			<h1><a href="http://www.srixon.co.kr/main.do"><img src="https://www.srixon.co.kr/images/brave/srixon_logo.png" alt="Srixon" width=138></a></h1>
			<nav class="navigation">
				<div class="nav-brave">
					<span class="icon-sch"><a href="/bebrave.do"><img src="https://www.srixon.co.kr/images/brave/be_brave_gnb_logo.png" id="braveLogoAni"></a></span>
				</div>
				<ul class="gnb_wrap">
					<li><a href="javascript:gonone('http://www.srixon.co.kr/item/balls/list.do?im_num=12')">BALLS</a><span class="icon"></span>
						<div class="submenu-item">
							<div class="submenu-bg">
								<div class="submenu-box">
									<ul id="itemBalls"></ul>
									<!-- <div class="banner"><a href="javascript:alert('준비중입니다.');"><img src="https://www.srixon.co.kr/images/SwitchToBetter_940x140.jpg" alt="we guarantee your satisfaction or your mone back."></a></div> -->
								</div>
							</div><!-- submenu-bg -->
						</div><!-- submenu-item -->
						<ul class="twlist">
							<li><a href="http://www.srixon.co.kr/item/balls/list.do?im_num=12" class="tm">TOUR BALL</a></li>
							<li><a href="http://www.srixon.co.kr/item/balls/list.do?im_num=13" class="tm">ALL-ABILITY</a></li>
							<li><a href="http://www.srixon.co.kr/item/balls/list.do?im_num=14" class="tm">GAME IMPROVEMENT</a>
							</li>
						</ul>
					</li>
					<!-- <li><a href="javascript:gonone('http://www.srixon.co.kr/item/clubs/main.do')">CLUBS</a><span class="icon"></span> -->
					<li><a href="http://www.srixon.co.kr/item/clubs/list.do?im_num=8">CLUBS</a><span class="icon"></span>
						<div class="submenu-item">
							<div class="submenu-bg">
								<div class="submenu-box">
									<ul id="itemClubs"></ul>
									<!-- <div class="banner"><a href="javascript:alert('준비중입니다.');"><img src="https://www.srixon.co.kr/images/clubs_nav-banner.jpg" alt="no upcharge on premium steel shafts and grips."></a></div> -->
								</div>
							</div><!-- submenu-bg -->
						</div><!-- submenu-item -->
						<ul class="twlist">
							<li><a href="http://www.srixon.co.kr/item/clubs/list.do?im_num=8" class="tm">DRIVERS</a></li>
							<li><a href="http://www.srixon.co.kr/item/clubs/list.do?im_num=9" class="tm">FAIRWAYS</a></li>
							<li><a href="http://www.srixon.co.kr/item/clubs/list.do?im_num=10" class="tm">HYBRIDS</a></li>
							<li><a href="http://www.srixon.co.kr/item/clubs/list.do?im_num=83" class="tm">UTILITY</a></li>
							<li><a href="http://www.srixon.co.kr/item/clubs/list.do?im_num=11" class="tm">IRONS</a></li>
						</ul>
						<!-- submenu-item -->
					</li>
					<li><a href="javascript:gonone('http://www.srixon.co.kr/item/accessories/main.do')">ACCESSORIES</a><span class="icon"></span>
						<div class="submenu-item sub-item-box">
							<div class="submenu-bg">
								<div class="submenu-box submenu-vertical">
									<ul class="menu-vertical" id="itemAccessories">
									</ul>
									<div class="banner-vertical"><img src="https://www.srixon.co.kr/images/banner_accessories.jpg"
											alt=""></div>
								</div>
							</div><!-- submenu-bg -->
						</div><!-- submenu-item -->
						<ul class="twlist">
							<li><a href="http://www.srixon.co.kr/item/accessories/list.do?im_num=7" class="tm">BAGS</a></li>
							<li><a href="http://www.srixon.co.kr/item/accessories/list.do?im_num=15" class="tm">GLOVES&HATS</a>
							</li>
							<li><a href="http://www.srixon.co.kr/item/accessories/list.do?im_num=16" class="tm">SHOES</a></li>
							<li><a href="http://www.srixon.co.kr/item/accessories/list.do?im_num=17" class="tm">OTHER</a></li>
						</ul>
						<!-- submenu-item -->
					</li>
					<li><a href="javascript:gonone('http://www.srixon.co.kr/tour/playerList.do?sp_tour=PGA')">TOUR</a><span class="icon"></span>
						<div class="submenu-item sub-item-box">
							<div class="submenu-bg">
								<div class="submenu-box submenu-vertical">
									<ul class="menu-vertical">
										<li><a href="http://www.srixon.co.kr/tour/playerList.do?sp_tour=PGA">SRIXON PLAYER</a></li>
										<li><a href="http://www.srixon.co.kr/tour/media.do">LESSON</a></li>
									</ul>
									<div class="banner-vertical"><img src="https://www.srixon.co.kr/images/banner_tour.jpg" alt="">
									</div>
								</div>
							</div><!-- submenu-bg -->
						</div><!-- submenu-item -->
						<ul class="twlist">
							<li><a href="http://www.srixon.co.kr/tour/playerList.do?sp_tour=PGA" class="tm">SRIXON PLAYER</a></li>
							<li><a href="http://www.srixon.co.kr/tour/media.do" class="tm">LESSON</a></li>
						</ul>
						<!-- submenu-item -->
					</li>
					<li><a href="javascript:gonone('https://www.srixon.co.kr/experience/rentalInfo.do')">EXPERIENCE</a><span class="icon"></span>
						<div class="submenu-item sub-item-box">
							<div class="submenu-bg">
								<div class="submenu-box submenu-vertical">
									<ul class="menu-vertical">
										<li><a href="http://www.srixon.co.kr/experience/performanceInfo.do">PERFORMANCE CENTER</a></li>
										<li><a href="https://www.srixon.co.kr/experience/rentalInfo.do">RENTAL SERVICE</a></li>
										<li><a href="http://www.srixon.co.kr/experience/sitar.do">TRY-OUT DAYS</a></li>
										<!-- <li><a href="javascript:alert('준비중입니다.');">CUSTOM FIT</a></li> -->
										<!-- <li><a href="/experience/custom_fit.do">CUSTOM FIT</a></li> -->
									</ul>
									<div class="banner-vertical"><img src="https://www.srixon.co.kr/images/banner_experience.jpg"
											alt=""></div>
								</div>
							</div><!-- submenu-bg -->
						</div><!-- submenu-item -->
						<ul class="twlist">
							<li><a href="http://www.srixon.co.kr/experience/performanceInfo.do" class="tm">PERFORMANCE CENTER</a>
							</li>
							<li><a href="https://www.srixon.co.kr/experience/rentalInfo.do" class="tm">RENTAL SERVICE</a></li>
							<li><a href="http://www.srixon.co.kr/experience/sitar.do" class="tm">TRY-OUT DAYS</a></li>
						</ul>
						<!-- submenu-item -->
					</li>
					<li><a href="javascript:gonone('http://www.srixon.co.kr/news/newsList.do')">NEWS &amp; EVENT</a><span class="icon"></span>

						<div class="submenu-item sub-item-box">
							<div class="submenu-bg">
								<div class="submenu-box submenu-vertical">
									<ul class="menu-vertical">
										<li><a href="http://www.srixon.co.kr/news/newsList.do">NEWS</a></li>
										<li><a href="http://www.srixon.co.kr/event/eventList.do">EVENT</a></li>
									</ul>
									<div class="banner-vertical"><img src="https://www.srixon.co.kr/images/banner_news.jpg" alt="">
									</div>
								</div>
							</div><!-- submenu-bg -->
						</div><!-- submenu-item -->

						<ul class="twlist">
							<li><a href="http://www.srixon.co.kr/news/newsList.do" class="tm">NEWS</a></li>
							<li><a href="http://www.srixon.co.kr/event/eventList.do" class="tm">EVENT</a></li>
						</ul>
						<!-- submenu-item -->
					</li>
					<li><a href="javascript:gonone('http://www.srixon.co.kr/cs/as_reception.do')">C/S</a><span class="icon"></span>
						<div class="submenu-item sub-item-box">
							<div class="submenu-bg">
								<div class="submenu-box submenu-vertical">
									<ul class="menu-vertical">
										<li><a href="http://www.srixon.co.kr/cs/as_reception.do">A/S 접수</a></li>
										<li><a href="http://www.srixon.co.kr/cs/myItem.do">정품조회</a></li>
										<li><a href="http://www.srixon.co.kr/cs/faqList.do">고객문의</a></li>
									</ul>
									<div class="banner-vertical"><img src="https://www.srixon.co.kr/images/banner_cs.jpg" alt="">
									</div>
								</div>
							</div><!-- submenu-bg -->
						</div><!-- submenu-item -->

						<ul class="twlist">
							<li><a href="http://www.srixon.co.kr/cs/as_reception.do" class="tm">C/S</a></li>
							<li><a href="http://www.srixon.co.kr/cs/myItem.do" class="tm">정품조회</a></li>
							<li><a href="http://www.srixon.co.kr/cs/faqList.do" class="tm">고객문의</a></li>
						</ul>
						<!-- submenu-item -->
					</li>

					<li>
						<div class="nav-search">
							<span class="icon-sch"><button type="button">검색</button></span>
							<div class="nav-search-inner">
								<div class="nav-sch-inner">
									<span class="icon-sch"></span>
									<form name="commonSearchForm" id="commonSearchForm">
										<fieldset>
											<legend class="visually-hidden">Search Catalog</legend>
											<input type="text" name="searchKeyword" placeholder="search"
												onkeypress="javascript:if(event.keyCode==13) goCommonSearch();">
										</fieldset>
									</form>
									<button type="button" class="btn-search-close">검색닫기</button>
									<a href="#" class="search-close-link">close</a>
								</div>
							</div>
						</div>
					</li>

				</ul>
				<ul class="menu-utility-item">
					<li><a href="#" onclick="goLogin();">로그인</a></li>
					<li><a href="#" onclick="dunlop_join();return false;">회원가입</a></li>
					<li><a href="http://www.srixon.co.kr/store/storeList.do">STORE</a></li>
				</ul>
				<p class="top-xxui-wrap"><a href="/bebrave.do" class="top-xxio m-top-xxio"><img src="https://www.srixon.co.kr/images/brave/be_brave_gnb_logo_m.png" style="width:90px; margin-top:10px;" alt=""></a><span class="icon2"></span></p>
				<p class="top-xxui-wrap top-cleve-wrap"><a href="http://www.xxio.co.kr" class="top-xxio m-top-xxio" target="_blank"><img src="https://www.srixon.co.kr/images/top_xxio_logo.png" alt=""></a><span class="icon2"></span></p>
				<p class="top-xxui-wrap top-cleve-wrap"><a href="http://www.clevelandgolf.co.kr/" class="top-xxio m-top-xxio" target="_blank"><img src="https://www.srixon.co.kr/images/top_cleve_logo.png" alt=""></a><span class="icon2"></span></p>
				<div class="m-smenu-add">
					<address>서울특별시 서초구 사평대로 76 로지트 빌딩1층</address>
					<p>대표번호 : 02.3462.3960</p>
					<p>사업자번호 : 220-88-12409</p>
					<p>개인정보책임관리자 : 김재윤 팀장</p>
				</div>
			</nav>
		</div><!-- //inner -->
	</div>
	<!--// nav-wrapper -->
	<script>
		$(document).ready(function () {
			$("#braveLogoAni").hover(
				function () {
					$(this).attr("src", "https://www.srixon.co.kr/images/brave/be_brave_gnb_logo_over.png");
				},
				function () {
					$(this).attr("src", "https://www.srixon.co.kr/images/brave/be_brave_gnb_logo.png");
			});
			$(window).resize(function () {
				if ($(window).width() < 1023) {
					$('.nav-brave').hide();
				} else {
					$('.nav-brave').show();
				}
			});
			if ($(window).width() < 1023) {
				$('.nav-brave').hide();
			} else {
				$('.nav-brave').show();
			}
		});
		function gonone(link) {
			if ($(window).width() < 1023) {
			} else {
				document.location.href = link;
			}
		}
	</script>
</header>