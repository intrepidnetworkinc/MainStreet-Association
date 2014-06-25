<?php
/**
 * @file
 * responsive_carousel_jumbotron.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function responsive_carousel_jumbotron_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_creative_slide'
  $field_bases['field_creative_slide'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_creative_slide',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_destination'
  $field_bases['field_destination'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_destination',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'meta_robots'
  $field_bases['meta_robots'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'meta_robots',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'metatags_quick',
    'settings' => array(
      'max_length' => 160,
      'meta_name' => 'robots',
    ),
    'translatable' => 0,
    'type' => 'metatags_quick',
  );

  return $field_bases;
}
