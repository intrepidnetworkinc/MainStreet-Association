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
    'cache' => 8,
    'css_class' => 'col-xs-pad col-sm-pad row-sm-bm row-lg-bm',
    'custom' => 0,
    'delta' => 'carousel_jumbotron-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
calendar
calendar/*
media
media/photos
media/photos/*
media/videos
media/videos/*
attractions
attractions/*
resources
resources/*
obmastore
obmastore/*
search/*
obma
obma/*
mainstreet-association
mainstreet-association/*
contact',
    'roles' => array(),
    'themes' => array(
      'intrepidnetwork_3' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'intrepidnetwork_3',
        'weight' => -24,
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
