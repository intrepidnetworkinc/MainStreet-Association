<?php
/**
 * @file
 * responsive_photo_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function responsive_photo_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_album';
  $view->description = 'Provides a responsive photo album slideshow with slider navigation below the main slideshow.';
  $view->tag = 'photo album';
  $view->base_table = 'node';
  $view->human_name = 'Photo Album';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'my_basic_carousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo_album_slide']['id'] = 'field_photo_album_slide';
  $handler->display->display_options['fields']['field_photo_album_slide']['table'] = 'field_data_field_photo_album_slide';
  $handler->display->display_options['fields']['field_photo_album_slide']['field'] = 'field_photo_album_slide';
  $handler->display->display_options['fields']['field_photo_album_slide']['label'] = '';
  $handler->display->display_options['fields']['field_photo_album_slide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_album_slide']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photo_album_slide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_album_slide']['settings'] = array(
    'image_style' => 'photo_album_full',
    'image_link' => '',
  );
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'photo_album_slide' => 'photo_album_slide',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_photo_album');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Photos';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'photo-album-page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'my_basic_carousel';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo_album_slide']['id'] = 'field_photo_album_slide';
  $handler->display->display_options['fields']['field_photo_album_slide']['table'] = 'field_data_field_photo_album_slide';
  $handler->display->display_options['fields']['field_photo_album_slide']['field'] = 'field_photo_album_slide';
  $handler->display->display_options['fields']['field_photo_album_slide']['label'] = '';
  $handler->display->display_options['fields']['field_photo_album_slide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_album_slide']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photo_album_slide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_album_slide']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_photo_album_slide']['settings'] = array(
    'colorbox_node_style' => 'photo_album_full',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['path'] = 'photos';
  $handler->display->display_options['menu']['title'] = 'Photos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-recovery-residences';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Photo Album Main Slider */
  $handler = $view->new_display('block', 'Photo Album Main Slider', 'block_main_slider');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'photo-album-main-slider';
  $handler->display->display_options['display_description'] = 'Displays and album of nodes.';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'recovery-houses';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'my_thumbnail_slider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Block instead of Page */
  $handler = $view->new_display('block', 'Block instead of Page', 'full_block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'photo-album-block-page';
  $handler->display->display_options['display_description'] = 'Combine this block with the Photo Album Main Slider';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'recovery-houses';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo_album_slide']['id'] = 'field_photo_album_slide';
  $handler->display->display_options['fields']['field_photo_album_slide']['table'] = 'field_data_field_photo_album_slide';
  $handler->display->display_options['fields']['field_photo_album_slide']['field'] = 'field_photo_album_slide';
  $handler->display->display_options['fields']['field_photo_album_slide']['label'] = '';
  $handler->display->display_options['fields']['field_photo_album_slide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_album_slide']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photo_album_slide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_album_slide']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_photo_album_slide']['settings'] = array(
    'colorbox_node_style' => 'photo_album_full',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['photo_album'] = $view;

  return $export;
}
