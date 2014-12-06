<?php
/**
 * @file
 * theme2_blocks_panels_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function theme2_blocks_panels_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-useful-links_apply-now:https://www.gmu.edu
  $menu_links['menu-useful-links_apply-now:https://www.gmu.edu'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'https://www.gmu.edu',
    'router_path' => '',
    'link_title' => 'Apply Now',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-useful-links_apply-now:https://www.gmu.edu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-useful-links_faq:https://www.cnn.com
  $menu_links['menu-useful-links_faq:https://www.cnn.com'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'https://www.cnn.com',
    'router_path' => '',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-useful-links_faq:https://www.cnn.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-useful-links_our-students:https://www.nba.com
  $menu_links['menu-useful-links_our-students:https://www.nba.com'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'https://www.nba.com',
    'router_path' => '',
    'link_title' => 'Our Students',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'identifier' => 'menu-useful-links_our-students:https://www.nba.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-useful-links_press:https://www.google.com
  $menu_links['menu-useful-links_press:https://www.google.com'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'https://www.google.com',
    'router_path' => '',
    'link_title' => 'Press',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-useful-links_press:https://www.google.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-useful-links_team:https://www.wizards.realgm.com
  $menu_links['menu-useful-links_team:https://www.wizards.realgm.com'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'https://www.wizards.realgm.com',
    'router_path' => '',
    'link_title' => 'Team',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-useful-links_team:https://www.wizards.realgm.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Apply Now');
  t('FAQ');
  t('Our Students');
  t('Press');
  t('Team');


  return $menu_links;
}
