<?php
/**
 * @file
 * theme2_blocks_panels_menus.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function theme2_blocks_panels_menus_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'apply_section';
  $mini->category = '';
  $mini->admin_title = 'apply-section';
  $mini->admin_description = 'Apply to debug society mini-panel.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '5f55a0b6-a9c6-45b3-b4c2-9b1dda34af0a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ec77ddd9-4489-4397-8020-063234e3adda';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h2 id="join-the-movement-header">JOIN THE MOVEMENT</h2><a href="https://debugs.slack.com" id="apply-today"><div class="inline-block-wrap"><h2>APPLY TODAY</h2></div></a>',
      'format' => 'html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec77ddd9-4489-4397-8020-063234e3adda';
    $display->content['new-ec77ddd9-4489-4397-8020-063234e3adda'] = $pane;
    $display->panels['middle'][0] = 'new-ec77ddd9-4489-4397-8020-063234e3adda';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-ec77ddd9-4489-4397-8020-063234e3adda';
  $mini->display = $display;
  $export['apply_section'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'logistics_section';
  $mini->category = '';
  $mini->admin_title = 'Logistics section';
  $mini->admin_description = 'This section displays info like what we are teaching next, location information, etc.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '76e50ed0-953d-4007-b839-5690b3734622';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-214cecc4-3807-4f71-8868-c3b744c45ae7';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'What are we teaching next?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '214cecc4-3807-4f71-8868-c3b744c45ae7';
    $display->content['new-214cecc4-3807-4f71-8868-c3b744c45ae7'] = $pane;
    $display->panels['middle'][0] = 'new-214cecc4-3807-4f71-8868-c3b744c45ae7';
    $pane = new stdClass();
    $pane->pid = 'new-3780f475-89b9-4c26-9d88-9049ae2f7a7b';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Tab 2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3780f475-89b9-4c26-9d88-9049ae2f7a7b';
    $display->content['new-3780f475-89b9-4c26-9d88-9049ae2f7a7b'] = $pane;
    $display->panels['middle'][1] = 'new-3780f475-89b9-4c26-9d88-9049ae2f7a7b';
    $pane = new stdClass();
    $pane->pid = 'new-087056f9-bc6b-4da2-97ab-64a3c7938770';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Where are we?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '087056f9-bc6b-4da2-97ab-64a3c7938770';
    $display->content['new-087056f9-bc6b-4da2-97ab-64a3c7938770'] = $pane;
    $display->panels['middle'][2] = 'new-087056f9-bc6b-4da2-97ab-64a3c7938770';
    $pane = new stdClass();
    $pane->pid = 'new-bb53cd95-3338-488d-a8dc-cddf4606cd05';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Payment Information',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bb53cd95-3338-488d-a8dc-cddf4606cd05';
    $display->content['new-bb53cd95-3338-488d-a8dc-cddf4606cd05'] = $pane;
    $display->panels['middle'][3] = 'new-bb53cd95-3338-488d-a8dc-cddf4606cd05';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['logistics_section'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'main_section';
  $mini->category = '';
  $mini->admin_title = 'Main Section';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '37d0a42e-49a7-4c4e-9654-4eff8532b6bd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1472d06b-a78e-4c1b-b5c9-0564a4a54f76';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'STUDENTS',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1472d06b-a78e-4c1b-b5c9-0564a4a54f76';
    $display->content['new-1472d06b-a78e-4c1b-b5c9-0564a4a54f76'] = $pane;
    $display->panels['bottom'][0] = 'new-1472d06b-a78e-4c1b-b5c9-0564a4a54f76';
    $pane = new stdClass();
    $pane->pid = 'new-c031f305-9c3a-4cec-9b5d-528e19f24f11';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'EMPLOYERS',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c031f305-9c3a-4cec-9b5d-528e19f24f11';
    $display->content['new-c031f305-9c3a-4cec-9b5d-528e19f24f11'] = $pane;
    $display->panels['bottom'][1] = 'new-c031f305-9c3a-4cec-9b5d-528e19f24f11';
    $pane = new stdClass();
    $pane->pid = 'new-c20acfd2-61d2-43a3-9c2e-67b2f3c85a95';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>Graduate with a career,<br><strong>Not Loans.</strong></h1>',
      'format' => 'html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c20acfd2-61d2-43a3-9c2e-67b2f3c85a95';
    $display->content['new-c20acfd2-61d2-43a3-9c2e-67b2f3c85a95'] = $pane;
    $display->panels['middle'][0] = 'new-c20acfd2-61d2-43a3-9c2e-67b2f3c85a95';
    $pane = new stdClass();
    $pane->pid = 'new-f85e7e7c-dc1c-4868-b068-0a6526fd36f1';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Hire our next class to work on YOUR project',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f85e7e7c-dc1c-4868-b068-0a6526fd36f1';
    $display->content['new-f85e7e7c-dc1c-4868-b068-0a6526fd36f1'] = $pane;
    $display->panels['right'][0] = 'new-f85e7e7c-dc1c-4868-b068-0a6526fd36f1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['main_section'] = $mini;

  return $export;
}
