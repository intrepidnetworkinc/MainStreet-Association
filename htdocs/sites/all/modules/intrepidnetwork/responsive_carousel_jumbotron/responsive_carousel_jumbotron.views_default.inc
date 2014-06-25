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
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'creative_slides_frontpage_' => 'creative_slides_frontpage_',
  );
  /* Field: Content: URL Address */
  $handler->display->display_options['fields']['field_ad_url']['id'] = 'field_ad_url';
  $handler->display->display_options['fields']['field_ad_url']['table'] = 'field_data_field_ad_url';
  $handler->display->display_options['fields']['field_ad_url']['field'] = 'field_ad_url';
  $handler->display->display_options['fields']['field_ad_url']['label'] = '';
  $handler->display->display_options['fields']['field_ad_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ad_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ad_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ad_url']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Ad Image */
  $handler->display->display_options['fields']['field_ad_image']['id'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['table'] = 'field_data_field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['field'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['label'] = '';
  $handler->display->display_options['fields']['field_ad_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ad_image']['alter']['path'] = '[field_ad_url]';
  $handler->display->display_options['fields']['field_ad_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_ad_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ad_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ad_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-responsive',
  );
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
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-responsive',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class="glyphicon glyphicon-edit"></span> Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alt'] = 'Change image or destination';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'btn btn-default btn-xs edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_ad_status']['id'] = 'field_ad_status';
  $handler->display->display_options['fields']['field_ad_status']['table'] = 'field_data_field_ad_status';
  $handler->display->display_options['fields']['field_ad_status']['field'] = 'field_ad_status';
  $handler->display->display_options['fields']['field_ad_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ad_status']['settings'] = array(
    'class' => '',
  );
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'simpleads' => 'simpleads',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Status (field_ad_status) */
  $handler->display->display_options['filters']['field_ad_status_value']['id'] = 'field_ad_status_value';
  $handler->display->display_options['filters']['field_ad_status_value']['table'] = 'field_data_field_ad_status';
  $handler->display->display_options['filters']['field_ad_status_value']['field'] = 'field_ad_status_value';
  $handler->display->display_options['filters']['field_ad_status_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ad_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_ad_status_value']['group'] = 2;
  $handler->display->display_options['filters']['field_ad_status_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Ad Group (field_ad_category) */
  $handler->display->display_options['filters']['field_ad_category_tid']['id'] = 'field_ad_category_tid';
  $handler->display->display_options['filters']['field_ad_category_tid']['table'] = 'field_data_field_ad_category';
  $handler->display->display_options['filters']['field_ad_category_tid']['field'] = 'field_ad_category_tid';
  $handler->display->display_options['filters']['field_ad_category_tid']['value'] = array(
    65 => '65',
  );
  $handler->display->display_options['filters']['field_ad_category_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_ad_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ad_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ad_category_tid']['vocabulary'] = 'ad_groups';
  $handler->display->display_options['filters']['field_ad_category_tid']['hierarchy'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Beach Cam */
  $handler = $view->new_display('block', 'Beach Cam', 'block_1');
  $handler->display->display_options['display_description'] = 'Beach Cam Jumbotron';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'simpleads' => 'simpleads',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Status (field_ad_status) */
  $handler->display->display_options['filters']['field_ad_status_value']['id'] = 'field_ad_status_value';
  $handler->display->display_options['filters']['field_ad_status_value']['table'] = 'field_data_field_ad_status';
  $handler->display->display_options['filters']['field_ad_status_value']['field'] = 'field_ad_status_value';
  $handler->display->display_options['filters']['field_ad_status_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ad_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_ad_status_value']['group'] = 2;
  $handler->display->display_options['filters']['field_ad_status_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Ad Group (field_ad_category) */
  $handler->display->display_options['filters']['field_ad_category_tid']['id'] = 'field_ad_category_tid';
  $handler->display->display_options['filters']['field_ad_category_tid']['table'] = 'field_data_field_ad_category';
  $handler->display->display_options['filters']['field_ad_category_tid']['field'] = 'field_ad_category_tid';
  $handler->display->display_options['filters']['field_ad_category_tid']['value'] = array(
    66 => '66',
  );
  $handler->display->display_options['filters']['field_ad_category_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_ad_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ad_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ad_category_tid']['vocabulary'] = 'ad_groups';
  $handler->display->display_options['filters']['field_ad_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_caching'] = '-1';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'feeds/global/jumbotron.xml';
  $export['carousel_jumbotron'] = $view;

  return $export;
}
