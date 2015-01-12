<?php
/**
 * @file
 * theme2_blocks_panels_menus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function theme2_blocks_panels_menus_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-useful-links'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-useful-links',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'debuga_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'debuga_theme',
        'weight' => -25,
      ),
      'platon' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'platon',
        'weight' => 0,
      ),
      'theme1' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'theme1',
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-logistics_section'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'logistics_section',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'debuga_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'debuga_theme',
        'weight' => 0,
      ),
      'platon' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'platon',
        'weight' => 0,
      ),
      'theme1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme1',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-main_section'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main_section',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'debuga_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'debuga_theme',
        'weight' => 0,
      ),
      'platon' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'platon',
        'weight' => 0,
      ),
      'theme1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme1',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-theme_2_footer'] = array(
    'cache' => -1,
    'delta' => 'theme_2_footer',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'debuga_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'debuga_theme',
        'weight' => 0,
      ),
      'platon' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'platon',
        'weight' => 0,
      ),
      'theme1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme1',
        'weight' => 0,
      ),
    ),
  );

  return $export;
}
