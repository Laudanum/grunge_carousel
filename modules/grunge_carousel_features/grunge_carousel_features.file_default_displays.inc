<?php
/**
 * @file
 * grunge_carousel_features.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function grunge_carousel_features_file_default_displays() {
  $export = array();

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'image__media_small__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'header-carousel',
  );
  $export['image__media_small__file_image'] = $file_display;

  return $export;
}
