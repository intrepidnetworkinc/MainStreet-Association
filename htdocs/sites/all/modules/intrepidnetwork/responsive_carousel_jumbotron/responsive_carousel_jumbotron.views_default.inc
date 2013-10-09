<?php
/**
 * @file
 * responsive_carousel_jumbotron.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function responsive_carousel_jumbotron_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carousel_jumbotron';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carousel jumbotron';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'clone_of_flexslider_default_basic_carousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Destination */
  $handler->display->display_options['fields']['field_destination']['id'] = 'field_destination';
  $handler->display->display_options['fields']['field_destination']['table'] = 'field_data_field_destination';
  $handler->display->display_options['fields']['field_destination']['field'] = 'field_destination';
  $handler->display->display_options['fields']['field_destination']['label'] = '';
  $handler->display->display_options['fields']['field_destination']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_destination']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_destination']['click_sort_column'] = 'url';
  /* Field: Content: Creative */
  $handler->display->display_options['fields']['field_creative_slide']['id'] = 'field_creative_slide';
  $handler->display->display_options['fields']['field_creative_slide']['table'] = 'field_data_field_creative_slide';
  $handler->display->display_options['fields']['field_creative_slide']['field'] = 'field_creative_slide';
  $handler->display->display_options['fields']['field_creative_slide']['label'] = '';
  $handler->display->display_options['fields']['field_creative_slide']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_creative_slide']['alter']['path'] = '[field_destination]';
  $handler->display->display_options['fields']['field_creative_slide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_creative_slide']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_creative_slide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_creative_slide']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
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
    'creative_slide' => 'creative_slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['carousel_jumbotron'] = $view;

  return $export;
}
