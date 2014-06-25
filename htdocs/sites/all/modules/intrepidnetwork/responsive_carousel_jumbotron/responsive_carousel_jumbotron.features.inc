<?php
/**
 * @file
 * responsive_carousel_jumbotron.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function responsive_carousel_jumbotron_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function responsive_carousel_jumbotron_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function responsive_carousel_jumbotron_image_default_styles() {
  $styles = array();

  // Exported image style: flexslider_full.
  $styles['flexslider_full'] = array(
    'name' => 'flexslider_full',
    'label' => 'flexslider_full',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 440,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: flexslider_thumbnail.
  $styles['flexslider_thumbnail'] = array(
    'name' => 'flexslider_thumbnail',
    'label' => 'flexslider_thumbnail',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 173,
          'height' => 100,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function responsive_carousel_jumbotron_node_info() {
  $items = array(
    'creative_slide' => array(
      'name' => t('Creative Slide'),
      'base' => 'node_content',
      'description' => t('Creatives or CTA\'s (Call to Actions) are displayed within the frontpage carousel (slideshow). Purpose of these creative is to inform and attract people to key areas of interest throughout the website. Using beautiful high quality photos of key locations and events combined with heading, teaser text and a clear Call To Action prompts the viewer to click the CTA to learn more. Annual Event creatives should use corresponding artwork to be provided by the contributing artist that year. This will maintain cohesiveness throughout each event, its associated print collateral, and any t-shirt design. Example Annual Events: Street Fair, Fireworks, Oktoberfest, and Holiday Parade.'),
      'has_title' => '1',
      'title_label' => t('Admin Title'),
      'help' => t('1) Give the content an Administrative title so you can find it when viewing the <a href="../../admin/content">Content</a> page.<br>
2) Specify a destination. Typing an internal path will automatically generate suggestions -OR- specify an external URL. <strong>Example</strong> Internal path: "ob-farmers-market"<br>
3) Upload a creative image that includes a header (title), teaser text and CTA (Call To Action). Note the entire image will be clickable.<br>
4) Optionally specify the order in which this slide will be displayed within the slideshow by changing its position in its <a href="../../admin/structure/nodequeue/1/view/1">Nodeque</a>.<br>'),
    ),
  );
  return $items;
}
