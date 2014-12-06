<?php
/**
 * @file
 * theme2_blocks_panels_menus.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function theme2_blocks_panels_menus_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_theme_2';
  $page->task = 'page';
  $page->admin_title = 'Home Theme 2';
  $page->admin_description = '';
  $page->path = 'home2';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_theme_2_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_theme_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3d9aaa71-5db3-477c-b984-ae9bafc0ff28';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-707ebcc6-7f7e-4620-8367-35b36821f699';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'main_section';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '707ebcc6-7f7e-4620-8367-35b36821f699';
    $display->content['new-707ebcc6-7f7e-4620-8367-35b36821f699'] = $pane;
    $display->panels['middle'][0] = 'new-707ebcc6-7f7e-4620-8367-35b36821f699';
    $pane = new stdClass();
    $pane->pid = 'new-8800b915-e477-4850-8327-dc61ee87ff78';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'logistics_section';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8800b915-e477-4850-8327-dc61ee87ff78';
    $display->content['new-8800b915-e477-4850-8327-dc61ee87ff78'] = $pane;
    $display->panels['middle'][1] = 'new-8800b915-e477-4850-8327-dc61ee87ff78';
    $pane = new stdClass();
    $pane->pid = 'new-ba869177-f25a-452b-95ed-cec5769f150b';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'apply_section';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ba869177-f25a-452b-95ed-cec5769f150b';
    $display->content['new-ba869177-f25a-452b-95ed-cec5769f150b'] = $pane;
    $display->panels['middle'][2] = 'new-ba869177-f25a-452b-95ed-cec5769f150b';
    $pane = new stdClass();
    $pane->pid = 'new-4d86bad3-9b56-449d-b344-b9efb8865cd9';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'HOW WE\'RE DIFFERENT',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4d86bad3-9b56-449d-b344-b9efb8865cd9';
    $display->content['new-4d86bad3-9b56-449d-b344-b9efb8865cd9'] = $pane;
    $display->panels['middle'][3] = 'new-4d86bad3-9b56-449d-b344-b9efb8865cd9';
    $pane = new stdClass();
    $pane->pid = 'new-6c70dcde-0afe-43a6-a81e-5a9c185fa2f1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'PREVIOUS GRADUATES STATISTICS',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6c70dcde-0afe-43a6-a81e-5a9c185fa2f1';
    $display->content['new-6c70dcde-0afe-43a6-a81e-5a9c185fa2f1'] = $pane;
    $display->panels['middle'][4] = 'new-6c70dcde-0afe-43a6-a81e-5a9c185fa2f1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_theme_2'] = $page;

  return $pages;

}
