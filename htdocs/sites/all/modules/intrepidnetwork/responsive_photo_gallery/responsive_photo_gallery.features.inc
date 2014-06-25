<?php
/**
 * @file
 * responsive_photo_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function responsive_photo_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
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
function responsive_photo_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function responsive_photo_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: photo_album_full.
  $styles['photo_album_full'] = array(
    'name' => 'photo_album_full',
    'label' => 'Photo Album Full',
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
          'height' => 570,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: photo_album_thumbnail.
  $styles['photo_album_thumbnail'] = array(
    'name' => 'photo_album_thumbnail',
    'label' => 'Photo Album Thumbnail',
    'effects' => array(
      12 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function responsive_photo_gallery_node_info() {
  $items = array(
    'photo_album_slide' => array(
      'name' => t('Photo Album'),
      'base' => 'node_content',
      'description' => t('Albums are listed in a grid format on the Media Photo page. Each album contains image for an event, function, area, destination or location. The first image in the album will be used as the album cover. You can drag and drop image swithin the album’s image list to sort their display order.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
