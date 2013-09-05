<?php
/**
 * @file
 * responsive_photo_gallery.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function responsive_photo_gallery_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-photo_album-block_main_slider'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'photo_album-block_main_slider',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'home-requirements
recovery-houses',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'intrepidnetwork' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'intrepidnetwork',
        'weight' => -13,
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

  $export['views-photo_album-full_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'photo_album-full_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'home-requirements
recovery-houses',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'intrepidnetwork' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'intrepidnetwork',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
