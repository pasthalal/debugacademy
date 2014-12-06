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

  $export['block-class_over'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'class_over',
    'module' => 'block',
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
    ),
    'title' => 'What happens when the class is over?',
    'visibility' => 0,
  );

  $export['block-copyright_info'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'copyright_info',
    'module' => 'block',
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
        'weight' => -22,
      ),
      'platon' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'platon',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-employers'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'employers',
    'module' => 'block',
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
    ),
    'title' => 'EMPLOYERS',
    'visibility' => 0,
  );

  $export['block-get_in_touch'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'get_in_touch',
    'module' => 'block',
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
        'weight' => -25,
      ),
      'platon' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'platon',
        'weight' => 0,
      ),
    ),
    'title' => 'GET IN TOUCH',
    'visibility' => 0,
  );

  $export['block-grad_stats'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'grad_stats',
    'module' => 'block',
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
    ),
    'title' => 'PREVIOUS GRADUATES STATISTICS',
    'visibility' => 0,
  );

  $export['block-hire_our_class'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'hire_our_class',
    'module' => 'block',
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
    ),
    'title' => 'Hire our next class to work on YOUR project',
    'visibility' => 0,
  );

  $export['block-how_different'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'how_different',
    'module' => 'block',
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
    ),
    'title' => 'HOW WE\'RE DIFFERENT',
    'visibility' => 0,
  );

  $export['block-location_info'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'location_info',
    'module' => 'block',
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
    ),
    'title' => 'Where are we?',
    'visibility' => 0,
  );

  $export['block-payment_info'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'payment_info',
    'module' => 'block',
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
    ),
    'title' => 'Payment Information',
    'visibility' => 0,
  );

  $export['block-students'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'students',
    'module' => 'block',
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
    ),
    'title' => 'STUDENTS',
    'visibility' => 0,
  );

  $export['block-teaching_next'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'teaching_next',
    'module' => 'block',
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
    ),
    'title' => 'What are we teaching next?',
    'visibility' => 0,
  );

  return $export;
}
