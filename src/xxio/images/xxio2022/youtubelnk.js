
$(document).ready(function () {
  var youtube_stack = {};
  youtube_stack.YT = '';
  youtube_stack.players = [];
  youtube_stack.stacks = [];
  youtube_stack.add = function (target, code, scale = 1) {
    this.stacks.push({
      target: target,
      code: code,
      scale: scale
    });
    this.flash();
  }
  youtube_stack.init = function (YT) {
    this.YT = YT;
    this.flash();
  }
  youtube_stack.flash = function () {
    if (this.YT) {
      for (var k in this.stacks) {
        var target_id = this.stacks[k].target;
        if (!this.players[k]) {
          this.load(k, this.stacks[k].target, this.stacks[k].code, this.stacks[k].scale);
        }
      }
    }
  }
  youtube_stack.load = function (k, target_id, code, scale) {
    var t = this;
    var w = $('#' + target_id).width() * scale;
    var h = $('#' + target_id).height();
    var player = new this.YT.Player(target_id, {
      videoId: code,
      playerVars: {
        playsinline: 1,
        width: w,
        height: h,
        loop: 1,
        listType: 'playlist',
        playlist: code,
        rel: 0,
        controls: 0,
      },
      events: {
        'onReady': t.onPlayerReady,
        'onStateChange': t.onPlayerStateChange
      }
    });
    this.players[k] = player;
  }
  youtube_stack.onPlayerReady = function (event) {
    event.target.mute();
    event.target.playVideo();
  }
  youtube_stack.onPlayerStateChange = function (event) {
    var ytStatus = event.target.getPlayerState();
    if (ytStatus == this.YT.PlayerState.ENDED) {
      event.target.mute();
      event.target.playVideo();
    }
  }
  youtube_stack.onPlayerSizechange = function () {
    for (var k in this.stacks) {
      var target_id = this.stacks[k].target;
      var scale = this.stacks[k].scale;
      var w = $('#' + target_id).width() * scale;
      var h = $('#' + target_id).height();
      var player = this.players[k];
      console.log(player);
      player.setSize(w, h);
    }
  }
  $.fn.youtube_stack = youtube_stack;


  var tag = document.createElement('script');
  tag.src = "https://www.youtube.com/iframe_api";
  var firstScriptTag = document.getElementsByTagName('script')[0];
  firstScriptTag.parentNode.insertBefore(tag, firstScriptTag);
})

function onYouTubeIframeAPIReady() {
  $.fn.youtube_stack.init(YT);
}