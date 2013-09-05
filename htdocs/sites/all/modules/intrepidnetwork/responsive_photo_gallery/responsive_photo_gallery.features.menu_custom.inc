<?php
/**
 * @file
 * responsive_photo_gallery.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function responsive_photo_gallery_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-menu.
  $menus['menu-about-menu'] = array(
    'menu_name' => 'menu-about-menu',
    'title' => 'About',
    'description' => 'Footer menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Footer menu');


  return $menus;
}
