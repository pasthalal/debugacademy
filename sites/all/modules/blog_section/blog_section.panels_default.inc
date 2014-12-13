<?php
/**
 * @file
 * blog_section.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function blog_section_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'blog_mini_panel';
  $mini->category = '';
  $mini->admin_title = 'Blog Mini Panel';
  $mini->admin_description = '';
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
  $display->uuid = 'ab445296-10e9-4c15-b636-be4f22ae27d7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4cd31dd2-c3e3-4eee-b67c-4fc8d6f8f708';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'blog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 1,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'default',
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
    $pane->uuid = '4cd31dd2-c3e3-4eee-b67c-4fc8d6f8f708';
    $display->content['new-4cd31dd2-c3e3-4eee-b67c-4fc8d6f8f708'] = $pane;
    $display->panels['middle'][0] = 'new-4cd31dd2-c3e3-4eee-b67c-4fc8d6f8f708';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4cd31dd2-c3e3-4eee-b67c-4fc8d6f8f708';
  $mini->display = $display;
  $export['blog_mini_panel'] = $mini;

  return $export;
}
