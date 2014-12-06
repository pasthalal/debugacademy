<?php
/**
 * @file
 * theme1_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function theme1_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function theme1_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function theme1_homepage_node_info() {
  $items = array(
    'front_page_slideshow' => array(
      'name' => t('Front Page Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Image Name'),
      'help' => '',
    ),
  );
  return $items;
}
