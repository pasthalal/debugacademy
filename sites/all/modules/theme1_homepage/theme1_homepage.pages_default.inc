<?php
/**
 * @file
 * theme1_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function theme1_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home1';
  $page->task = 'page';
  $page->admin_title = '';
  $page->admin_description = '';
  $page->path = 'home1';
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
  $handler->name = 'page_home1_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home1';
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '406a6dcf-c0ce-4d3b-9fae-07588650e798';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d511044f-d508-45ca-92d4-cd5b0c232561';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'a_1';
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
    $pane->uuid = 'd511044f-d508-45ca-92d4-cd5b0c232561';
    $display->content['new-d511044f-d508-45ca-92d4-cd5b0c232561'] = $pane;
    $display->panels['middle'][0] = 'new-d511044f-d508-45ca-92d4-cd5b0c232561';
    $pane = new stdClass();
    $pane->pid = 'new-d805532f-86a3-4349-a7a3-8909f923e0d8';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'a_2';
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
    $pane->uuid = 'd805532f-86a3-4349-a7a3-8909f923e0d8';
    $display->content['new-d805532f-86a3-4349-a7a3-8909f923e0d8'] = $pane;
    $display->panels['middle'][1] = 'new-d805532f-86a3-4349-a7a3-8909f923e0d8';
    $pane = new stdClass();
    $pane->pid = 'new-163d4942-539d-4b93-a0bb-2dd0d33e4214';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'a_3';
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
    $pane->uuid = '163d4942-539d-4b93-a0bb-2dd0d33e4214';
    $display->content['new-163d4942-539d-4b93-a0bb-2dd0d33e4214'] = $pane;
    $display->panels['middle'][2] = 'new-163d4942-539d-4b93-a0bb-2dd0d33e4214';
    $pane = new stdClass();
    $pane->pid = 'new-11ca91f2-326a-494c-ad38-8fa6731adfb6';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'b';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '11ca91f2-326a-494c-ad38-8fa6731adfb6';
    $display->content['new-11ca91f2-326a-494c-ad38-8fa6731adfb6'] = $pane;
    $display->panels['middle'][3] = 'new-11ca91f2-326a-494c-ad38-8fa6731adfb6';
    $pane = new stdClass();
    $pane->pid = 'new-ce4c5202-3707-47d5-9db6-4a91771698be';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'c';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ce4c5202-3707-47d5-9db6-4a91771698be';
    $display->content['new-ce4c5202-3707-47d5-9db6-4a91771698be'] = $pane;
    $display->panels['middle'][4] = 'new-ce4c5202-3707-47d5-9db6-4a91771698be';
    $pane = new stdClass();
    $pane->pid = 'new-6ee71b2f-ef7d-42bb-94e5-3e4955e02350';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'd';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6ee71b2f-ef7d-42bb-94e5-3e4955e02350';
    $display->content['new-6ee71b2f-ef7d-42bb-94e5-3e4955e02350'] = $pane;
    $display->panels['middle'][5] = 'new-6ee71b2f-ef7d-42bb-94e5-3e4955e02350';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d511044f-d508-45ca-92d4-cd5b0c232561';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home1'] = $page;

  return $pages;

}
