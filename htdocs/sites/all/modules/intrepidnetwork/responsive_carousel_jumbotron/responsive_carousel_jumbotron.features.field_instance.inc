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
      'file_directory' => 'creatives/slides',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '400 KB',
      'max_resolution' => '1170x639',
      'min_resolution' => '1024x639',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
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
    'description' => '',
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
      'title' => 'optional',
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

  // Exported field_instance: 'node-creative_slide-meta_description'
  $field_instances['node-creative_slide-meta_description'] = array(
    'bundle' => 'creative_slide',
    'default_value' => NULL,
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
    'field_name' => 'meta_description',
    'formatter' => 'metatags_quick_default',
    'label' => '(Meta)Description',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-creative_slide-meta_keywords'
  $field_instances['node-creative_slide-meta_keywords'] = array(
    'bundle' => 'creative_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'meta_keywords',
    'formatter' => 'metatags_quick_default',
    'label' => '(Meta)Keywords',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(Meta)Description');
  t('(Meta)Keywords');
  t('Creative');
  t('Destination');
  t('Images should include a Title, Teaser Text and Call to Action Button all on top of a nice photograph.');

  return $field_instances;
}
