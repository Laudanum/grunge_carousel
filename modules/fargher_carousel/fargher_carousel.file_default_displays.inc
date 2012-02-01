<?php
/**
 * @file
 * fargher_carousel.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function fargher_carousel_file_default_displays() {
  $export = array();

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'image__media_large__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_large__file_field_file_default'] = $file_display;

  return $export;
}
