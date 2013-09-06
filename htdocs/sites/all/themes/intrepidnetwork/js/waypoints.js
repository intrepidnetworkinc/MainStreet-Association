// JavaScript Document
(function ($) {
	$(document).ready(function(){
		$('#heading2').waypoint(function() {
			//alert('You have scrolled to the waypoint.');
			$("#block-views-frontpage-blocks-block li:nth-child(1)").removeClass("inactive").addClass("active arrow_box");
			$("#block-views-frontpage-blocks-block li:nth-child(2)").removeClass("active arrow_box").addClass("inactive");
		}, { offset: 85 });
		$('#heading3').waypoint(function() {
			$("#block-views-frontpage-blocks-block li:nth-child(1)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(2)").removeClass("inactive").addClass("active arrow_box");
			$("#block-views-frontpage-blocks-block li:nth-child(3)").removeClass("active arrow_box").addClass("inactive");
		}, { offset: 85 });
		$('#heading4').waypoint(function() {
			$("#block-views-frontpage-blocks-block li:nth-child(1)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(2)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(3)").removeClass("inactive").addClass("active arrow_box");
			$("#block-views-frontpage-blocks-block li:nth-child(4)").removeClass("active arrow_box").addClass("inactive");
		}, { offset: 85 });
		$('#heading5').waypoint(function() {
			$("#block-views-frontpage-blocks-block li:nth-child(1)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(2)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(3)").removeClass("active arrow_box").addClass("inactive");
			$("#block-views-frontpage-blocks-block li:nth-child(4)").removeClass("inactive").addClass("active arrow_box");
		}, { offset: 85 });
	});
})(jQuery);