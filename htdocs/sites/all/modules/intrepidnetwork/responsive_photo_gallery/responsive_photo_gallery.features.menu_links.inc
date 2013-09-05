<?php
/**
 * @file
 * responsive_photo_gallery.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function responsive_photo_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-about-menu:look-book
  $menu_links['menu-about-menu:look-book'] = array(
    'menu_name' => 'menu-about-menu',
    'link_path' => 'look-book',
    'router_path' => 'look-book',
    'link_title' => 'Look',
    'options' => array(
      'attributes' => array(
        'title' => 'See yourself livin’ the dream',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Look');


  return $menu_links;
}
