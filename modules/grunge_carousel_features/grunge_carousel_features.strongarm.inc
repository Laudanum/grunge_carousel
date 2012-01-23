<?php
/**
 * @file
 * grunge_carousel_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function grunge_carousel_features_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_slide';
  $strongarm->value = array();
  $export['menu_options_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_slide';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_slide';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_slide';
  $strongarm->value = '1';
  $export['node_preview_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_slide';
  $strongarm->value = 0;
  $export['node_submitted_slide'] = $strongarm;

  return $export;
}
