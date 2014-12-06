<?php
/**
 * @file
 * theme2_blocks_panels_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function theme2_blocks_panels_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-useful-links.
  $menus['menu-useful-links'] = array(
    'menu_name' => 'menu-useful-links',
    'title' => 'USEFUL LINKS',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('USEFUL LINKS');


  return $menus;
}
