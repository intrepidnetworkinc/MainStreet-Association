<?php
/**
 * @file
 * responsive_carousel_jumbotron.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function responsive_carousel_jumbotron_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-carousel_jumbotron-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'carousel_jumbotron-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'intrepidnetwork' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'intrepidnetwork',
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
