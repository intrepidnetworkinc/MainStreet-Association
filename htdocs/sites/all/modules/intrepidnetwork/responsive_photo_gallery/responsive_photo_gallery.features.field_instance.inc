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

  // Exported field_instance: 'node-photo_album_slide-field_photo_album_category'
  $field_instances['node-photo_album_slide-field_photo_album_category'] = array(
    'bundle' => 'photo_album_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photo_album_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-photo_album_slide-field_photo_album_date'
  $field_instances['node-photo_album_slide-field_photo_album_date'] = array(
    'bundle' => 'photo_album_slide',
    'deleted' => 0,
    'description' => 'Be as accurate as you can be. If you do not know the time, day or month put in something close. It doesn\'t have to be exact. For an event that last more than one day add an End Date.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photo_album_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-10:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-photo_album_slide-field_photo_album_slide'
  $field_instances['node-photo_album_slide-field_photo_album_slide'] = array(
    'bundle' => 'photo_album_slide',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'none',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'page',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'adaptive_image',
        ),
        'type' => 'colorbox',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photo_album_slide',
    'label' => 'Photo',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'd7/photos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-photo_album_slide-field_photographer'
  $field_instances['node-photo_album_slide-field_photographer'] = array(
    'bundle' => 'photo_album_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter one photo credit per field. Add an additional field to give credit to another photographer.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photographer',
    'label' => 'Photographer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Be as accurate as you can be. If you do not know the time, day or month put in something close. It doesn\'t have to be exact. For an event that last more than one day add an End Date.');
  t('Category');
  t('Date');
  t('Enter one photo credit per field. Add an additional field to give credit to another photographer.');
  t('Photo');
  t('Photographer');

  return $field_instances;
}
