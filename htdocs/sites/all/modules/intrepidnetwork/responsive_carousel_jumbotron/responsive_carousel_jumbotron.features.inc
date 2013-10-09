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
      3 => array(
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
          'height' => 639,
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
      'description' => t('Creatives or CTA\'s (Call to Actions) are displayed within the frontpage carousel (slideshow).'),
      'has_title' => '1',
      'title_label' => t('Admin Title'),
      'help' => '',
    ),
  );
  return $items;
}
