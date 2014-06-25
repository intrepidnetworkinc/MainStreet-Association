<?php
/**
 * @file
 * responsive_carousel_jumbotron.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function responsive_carousel_jumbotron_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-creative_slide-field_creative_slide'
  $field_instances['node-creative_slide-field_creative_slide'] = array(
    'bundle' => 'creative_slide',
    'deleted' => 0,
    'description' => 'Images should include a Title, Teaser Text and Call to Action Button all on top of a nice photograph.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'class' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creative_slide',
    'label' => 'Creative',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'd7/creatives/slides',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '400 KB',
      'max_resolution' => '1170x440',
      'min_resolution' => '1170x440',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => TRUE,
        'manualcrop_default_crop_area' => TRUE,
        'manualcrop_enable' => FALSE,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => TRUE,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'exclude',
        'manualcrop_thumblist' => FALSE,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-creative_slide-field_destination'
  $field_instances['node-creative_slide-field_destination'] = array(
    'bundle' => 'creative_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text to place as "title" text which most browsers display as a tooltip when hovering over the link.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_destination',
    'label' => 'Destination',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 255,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 255,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'both',
        'urls_filter' => '',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-creative_slide-meta_robots'
  $field_instances['node-creative_slide-meta_robots'] = array(
    'bundle' => 'creative_slide',
    'default_value' => array(
      0 => array(
        'metatags_quick' => array(
          'noarchive' => 'noarchive',
          'nofollow' => 'nofollow',
          'noindex' => 'noindex',
          'noodp' => 'noodp',
          'nosnippet' => 'nosnippet',
          'noydir' => 'noydir',
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'meta_robots',
    'formatter' => 'metatags_quick_default',
    'label' => '(Meta)Robots',
    'required' => 0,
    'settings' => array(
      'options' => 'noarchive,nofollow,noindex,noodp,nosnippet,noydir',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_checkboxes',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(Meta)Robots');
  t('Creative');
  t('Destination');
  t('Images should include a Title, Teaser Text and Call to Action Button all on top of a nice photograph.');
  t('Text to place as "title" text which most browsers display as a tooltip when hovering over the link.');

  return $field_instances;
}
