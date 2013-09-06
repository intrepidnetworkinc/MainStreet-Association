// JavaScript Document
(function ($) {
	$(document).ready(function(){
		$('#block-views-frontpage-blocks-block li:nth-child(1)').hover(function() {
			$(this).removeClass("inactive").addClass("active arrow_box");
			$("#block-views-frontpage-blocks-block li:nth-child(2)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(3)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(4)").removeClass("active arrow_box").addClass("inactive");
		});
		$('#block-views-frontpage-blocks-block li:nth-child(2)').hover(function() {
			$(this).removeClass("inactive").addClass("active arrow_box");
			$("#block-views-frontpage-blocks-block li:nth-child(1)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(3)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(4)").removeClass("active arrow_box").addClass("inactive");
		});
		$('#block-views-frontpage-blocks-block li:nth-child(3)').hover(function() {
			$(this).removeClass("inactive").addClass("active arrow_box");
			$("#block-views-frontpage-blocks-block li:nth-child(1)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(2)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(4)").removeClass("active arrow_box").addClass("inactive");
		});
		$('#block-views-frontpage-blocks-block li:nth-child(4)').hover(function() {
			$(this).removeClass("inactive").addClass("active arrow_box");
			$("#block-views-frontpage-blocks-block li:nth-child(1)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(2)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(3)").removeClass("active arrow_box").addClass("inactive");
		});
	});
})(jQuery);