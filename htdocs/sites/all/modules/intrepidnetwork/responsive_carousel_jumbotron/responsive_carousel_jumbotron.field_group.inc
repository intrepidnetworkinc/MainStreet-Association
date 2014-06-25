<?php
/**
 * @file
 * responsive_carousel_jumbotron.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function responsive_carousel_jumbotron_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|creative_slide|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'creative_slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '3',
    'children' => array(
      0 => 'meta_robots',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-meta field-group-tab',
        'description' => 'Used for Search Engine Optimization (SEO) & Search Engine Marketing (SEM).',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_meta|node|creative_slide|form'] = $field_group;

  return $export;
}
