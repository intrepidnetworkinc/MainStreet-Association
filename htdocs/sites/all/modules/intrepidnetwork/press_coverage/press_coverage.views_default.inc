<?php
/**
 * @file
 * press_coverage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function press_coverage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'press_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press & Lifestyle';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div id="youtube-video"><iframe width="100%" height="600px" src="//www.youtube.com/embed/hT3MFnOxNZo" frameborder="0" allowfullscreen></iframe></div>
<h2>Press Contact</h2>
<p>Chancelor Shay</br>
(W)right On Communications</br>
chancelor@stitchsusa.com (need to create this email on email server)</br>
858.755.5411</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Press Image */
  $handler->display->display_options['fields']['field_press_image']['id'] = 'field_press_image';
  $handler->display->display_options['fields']['field_press_image']['table'] = 'field_data_field_press_image';
  $handler->display->display_options['fields']['field_press_image']['field'] = 'field_press_image';
  $handler->display->display_options['fields']['field_press_image']['label'] = '';
  $handler->display->display_options['fields']['field_press_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_press_image']['settings'] = array(
    'image_style' => 'press-thumb',
    'image_link' => 'content',
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
    'press_coverage' => 'press_coverage',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'press-lifestyle';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Buzz';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'press-page.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['press_page'] = $view;

  return $export;
}
