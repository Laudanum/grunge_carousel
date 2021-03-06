<?php
/**
 * @file
 * grunge_carousel_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function grunge_carousel_features_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'header_carousel';
  $view->description = '';
  $view->tag = 'media, carousel';
  $view->base_table = 'node';
  $view->human_name = 'Header carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'header-carousel';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'Grunge';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '5';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = 'fast';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_slide_link']['field_api_classes'] = 0;
  /* Field: Content: Background */
  $handler->display->display_options['fields']['field_slide_background']['id'] = 'field_slide_background';
  $handler->display->display_options['fields']['field_slide_background']['table'] = 'field_data_field_slide_background';
  $handler->display->display_options['fields']['field_slide_background']['field'] = 'field_slide_background';
  $handler->display->display_options['fields']['field_slide_background']['label'] = '';
  $handler->display->display_options['fields']['field_slide_background']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_slide_background']['alter']['text'] = '<a href="[field_slide_link]">[field_slide_background]</a>
<div class="slide-info">
<a href="[field_slide_link]">
[title]
[body]
</a>
</div>';
  $handler->display->display_options['fields']['field_slide_background']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_background']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_background']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_background']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_background']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_background']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_background']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_background']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_slide_background']['settings'] = array(
    'file_view_mode' => 'media_small',
  );
  $handler->display->display_options['fields']['field_slide_background']['field_api_classes'] = 0;
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
    'slide' => 'slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['header_carousel'] = $view;

  return $export;
}
