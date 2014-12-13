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
    $pane->pid = 'new-473db8f5-f7e1-4a6a-8775-c8ccf825ee99';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'teaching_next';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
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
    $pane->uuid = '473db8f5-f7e1-4a6a-8775-c8ccf825ee99';
    $display->content['new-473db8f5-f7e1-4a6a-8775-c8ccf825ee99'] = $pane;
    $display->panels['middle'][0] = 'new-473db8f5-f7e1-4a6a-8775-c8ccf825ee99';
    $pane = new stdClass();
    $pane->pid = 'new-1b930030-b664-41df-a1ba-c3d49a9e8213';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'class_over';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1b930030-b664-41df-a1ba-c3d49a9e8213';
    $display->content['new-1b930030-b664-41df-a1ba-c3d49a9e8213'] = $pane;
    $display->panels['middle'][1] = 'new-1b930030-b664-41df-a1ba-c3d49a9e8213';
    $pane = new stdClass();
    $pane->pid = 'new-df64cf77-defc-4a5d-97ce-127d27e1cb9d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'next_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df64cf77-defc-4a5d-97ce-127d27e1cb9d';
    $display->content['new-df64cf77-defc-4a5d-97ce-127d27e1cb9d'] = $pane;
    $display->panels['middle'][2] = 'new-df64cf77-defc-4a5d-97ce-127d27e1cb9d';
    $pane = new stdClass();
    $pane->pid = 'new-d25100c7-886e-469e-9d39-3368df08c96c';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'payment_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd25100c7-886e-469e-9d39-3368df08c96c';
    $display->content['new-d25100c7-886e-469e-9d39-3368df08c96c'] = $pane;
    $display->panels['middle'][3] = 'new-d25100c7-886e-469e-9d39-3368df08c96c';
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
    $pane->pid = 'new-94dd8238-378d-4399-8ed9-bef1e7ef839e';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'student_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'main-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94dd8238-378d-4399-8ed9-bef1e7ef839e';
    $display->content['new-94dd8238-378d-4399-8ed9-bef1e7ef839e'] = $pane;
    $display->panels['bottom'][0] = 'new-94dd8238-378d-4399-8ed9-bef1e7ef839e';
    $pane = new stdClass();
    $pane->pid = 'new-2cba432e-59dd-4183-8928-2cde9f97771d';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'employer_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'main-pane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2cba432e-59dd-4183-8928-2cde9f97771d';
    $display->content['new-2cba432e-59dd-4183-8928-2cde9f97771d'] = $pane;
    $display->panels['bottom'][1] = 'new-2cba432e-59dd-4183-8928-2cde9f97771d';
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
    $pane->pid = 'new-a3c893d8-89cd-47b1-a0ab-d413a3a8d4b6';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'hire_class';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'hire-bubble',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3c893d8-89cd-47b1-a0ab-d413a3a8d4b6';
    $display->content['new-a3c893d8-89cd-47b1-a0ab-d413a3a8d4b6'] = $pane;
    $display->panels['right'][0] = 'new-a3c893d8-89cd-47b1-a0ab-d413a3a8d4b6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['main_section'] = $mini;

  return $export;
}
