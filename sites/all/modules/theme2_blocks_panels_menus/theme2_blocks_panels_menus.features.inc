<?php
/**
 * @file
 * theme2_blocks_panels_menus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function theme2_blocks_panels_menus_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
