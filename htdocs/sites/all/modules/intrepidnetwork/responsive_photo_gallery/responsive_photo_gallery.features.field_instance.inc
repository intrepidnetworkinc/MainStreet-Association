<?php
/**
 * @file
 * responsive_photo_gallery.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function responsive_photo_gallery_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-photo_album_slide-field_photo_album_slide'
  $field_instances['node-photo_album_slide-field_photo_album_slide'] = array(
    'bundle' => 'photo_album_slide',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photo_album_slide',
    'label' => 'Photo',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'photo-album-slide',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Photo');

  return $field_instances;
}
