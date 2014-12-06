<?php
/**
 * @file
 * theme1_homepage.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function theme1_homepage_defaultconfig_features() {
  return array(
    'theme1_homepage' => array(
      'default_panels_mini' => 'default_panels_mini',
      'views_default_views' => 'views_default_views',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_panels_mini().
 */
function theme1_homepage_defaultconfig_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'a_1';
  $mini->category = '';
  $mini->admin_title = 'A-1';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => NULL,
      'default' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '683aa6da-e0e4-49e1-b371-20c275817479';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-96fa38dd-a617-4bc7-b697-efdaa0be2c82';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="http://debugsociety.com/drupal_7_development"><img alt="" id="a-1-l" src="/sites/debugacademy.local/files/a-1-l.jpg" style="width: 482px; height: 200px;"></a>',
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
    $pane->uuid = '96fa38dd-a617-4bc7-b697-efdaa0be2c82';
    $display->content['new-96fa38dd-a617-4bc7-b697-efdaa0be2c82'] = $pane;
    $display->panels['left'][0] = 'new-96fa38dd-a617-4bc7-b697-efdaa0be2c82';
    $pane = new stdClass();
    $pane->pid = 'new-a30c4deb-2cd9-4440-b071-d05a36ddc5dd';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="http://debugsociety.com/new_student"><img alt="" id="a-1-m" src="/sites/debugacademy.local/files/a-1-m.jpg" style="width: 230px; height: 199px;"></a>',
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
    $pane->uuid = 'a30c4deb-2cd9-4440-b071-d05a36ddc5dd';
    $display->content['new-a30c4deb-2cd9-4440-b071-d05a36ddc5dd'] = $pane;
    $display->panels['middle'][0] = 'new-a30c4deb-2cd9-4440-b071-d05a36ddc5dd';
    $pane = new stdClass();
    $pane->pid = 'new-3b408e12-6306-408b-9269-0e4295d56efb';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="http://debugsociety.com/"><img alt="" id="a-1-r" src="/sites/debugacademy.local/files/a-1-r.jpg" style="width: 230px; height: 199px;"></a>',
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
    $pane->uuid = '3b408e12-6306-408b-9269-0e4295d56efb';
    $display->content['new-3b408e12-6306-408b-9269-0e4295d56efb'] = $pane;
    $display->panels['right'][0] = 'new-3b408e12-6306-408b-9269-0e4295d56efb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-96fa38dd-a617-4bc7-b697-efdaa0be2c82';
  $mini->display = $display;
  $export['a_1'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'a_2';
  $mini->category = '';
  $mini->admin_title = 'A-2';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c1a0501d-8589-4ff5-a501-46fa2dbe3d63';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-858f31bb-cdff-4447-94ff-c66e5a707884';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/sites/debugacademy.local/files/a-2-l.jpg"><img alt="" src="/sites/debugacademy.local/files/a-2-l.jpg" style="width: 230px; height: 200px;"></a>',
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
    $pane->uuid = '858f31bb-cdff-4447-94ff-c66e5a707884';
    $display->content['new-858f31bb-cdff-4447-94ff-c66e5a707884'] = $pane;
    $display->panels['left'][0] = 'new-858f31bb-cdff-4447-94ff-c66e5a707884';
    $pane = new stdClass();
    $pane->pid = 'new-df6290b5-6a37-4cf2-92dd-99460b912be6';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/sites/debugacademy.local/files/a-2-m.jpg"><img alt="" src="/sites/debugacademy.local/files/a-2-m.jpg" style="width: 480px; height: 199px;"></a>',
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
    $pane->uuid = 'df6290b5-6a37-4cf2-92dd-99460b912be6';
    $display->content['new-df6290b5-6a37-4cf2-92dd-99460b912be6'] = $pane;
    $display->panels['middle'][0] = 'new-df6290b5-6a37-4cf2-92dd-99460b912be6';
    $pane = new stdClass();
    $pane->pid = 'new-2f614ffa-c8b0-45b1-a9b7-4ebe8839583c';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/sites/debugacademy.local/files/a-2-r.jpg"><img alt="" src="/sites/debugacademy.local/files/a-2-r.jpg" style="width: 231px; height: 200px;"></a>',
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
    $pane->uuid = '2f614ffa-c8b0-45b1-a9b7-4ebe8839583c';
    $display->content['new-2f614ffa-c8b0-45b1-a9b7-4ebe8839583c'] = $pane;
    $display->panels['right'][0] = 'new-2f614ffa-c8b0-45b1-a9b7-4ebe8839583c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-858f31bb-cdff-4447-94ff-c66e5a707884';
  $mini->display = $display;
  $export['a_2'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'a_3';
  $mini->category = '';
  $mini->admin_title = 'A-3';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '86415ce6-da95-42f5-a883-aea6d6c5a807';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-754e7303-8ca9-4135-80df-3378b0a45c37';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/sites/debugacademy.local/files/a-3-l.jpg"><img alt="" src="/sites/debugacademy.local/files/a-3-l.jpg" style="width: 230px; height: 200px;"></a>',
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
    $pane->uuid = '754e7303-8ca9-4135-80df-3378b0a45c37';
    $display->content['new-754e7303-8ca9-4135-80df-3378b0a45c37'] = $pane;
    $display->panels['left'][0] = 'new-754e7303-8ca9-4135-80df-3378b0a45c37';
    $pane = new stdClass();
    $pane->pid = 'new-288ded75-60ce-409a-b5b6-d37ce9eb977b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/sites/debugacademy.local/files/a-3-m.jpg"><img alt="" src="/sites/debugacademy.local/files/a-3-m.jpg" style="width: 229px; height: 199px;"></a>',
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
    $pane->uuid = '288ded75-60ce-409a-b5b6-d37ce9eb977b';
    $display->content['new-288ded75-60ce-409a-b5b6-d37ce9eb977b'] = $pane;
    $display->panels['middle'][0] = 'new-288ded75-60ce-409a-b5b6-d37ce9eb977b';
    $pane = new stdClass();
    $pane->pid = 'new-d66f063b-7563-4344-8bb6-e31c8aa4269a';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/sites/debugacademy.local/files/a-3-r.jpg"><img alt="" src="/sites/debugacademy.local/files/a-3-r.jpg" style="width: 479px; height: 199px;"></a>',
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
    $pane->uuid = 'd66f063b-7563-4344-8bb6-e31c8aa4269a';
    $display->content['new-d66f063b-7563-4344-8bb6-e31c8aa4269a'] = $pane;
    $display->panels['right'][0] = 'new-d66f063b-7563-4344-8bb6-e31c8aa4269a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-754e7303-8ca9-4135-80df-3378b0a45c37';
  $mini->display = $display;
  $export['a_3'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'b';
  $mini->category = '';
  $mini->admin_title = 'b';
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
  $display->uuid = 'e4919764-2293-46f8-a2dd-aee72299a7a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5bfc757b-c145-4153-911c-ea33449b9ca8';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<img src="/sites/all/themes/debuga_theme1/img/b_bg.jpg">',
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
    $pane->uuid = '5bfc757b-c145-4153-911c-ea33449b9ca8';
    $display->content['new-5bfc757b-c145-4153-911c-ea33449b9ca8'] = $pane;
    $display->panels['middle'][0] = 'new-5bfc757b-c145-4153-911c-ea33449b9ca8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5bfc757b-c145-4153-911c-ea33449b9ca8';
  $mini->display = $display;
  $export['b'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'c';
  $mini->category = '';
  $mini->admin_title = 'c';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e6309230-2270-432b-afba-90ca00157ba5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0c89824c-2a72-444c-a41b-b4ea6c0676e0';
    $pane->panel = 'left_above';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1 style="text-align: center;">Pay Up-Front</h1><h3 style="text-align: center;">Get a 10% Discount!</h3>',
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
    $pane->uuid = '0c89824c-2a72-444c-a41b-b4ea6c0676e0';
    $display->content['new-0c89824c-2a72-444c-a41b-b4ea6c0676e0'] = $pane;
    $display->panels['left_above'][0] = 'new-0c89824c-2a72-444c-a41b-b4ea6c0676e0';
    $pane = new stdClass();
    $pane->pid = 'new-37e8cbd6-c705-42cc-8dd7-cb50b3a29e98';
    $pane->panel = 'left_below';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p style="text-align: center;"><a href="/sites/all/themes/debuga_theme1/img/c_learn_more.jpg" target="_self"><img alt="" src="/sites/all/themes/debuga_theme1/img/c_learn_more.jpg" style="width: 176px; height: 56px;"></a></p>',
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
    $pane->uuid = '37e8cbd6-c705-42cc-8dd7-cb50b3a29e98';
    $display->content['new-37e8cbd6-c705-42cc-8dd7-cb50b3a29e98'] = $pane;
    $display->panels['left_below'][0] = 'new-37e8cbd6-c705-42cc-8dd7-cb50b3a29e98';
    $pane = new stdClass();
    $pane->pid = 'new-677e1e1f-ba7d-43de-b9a6-290a97fe85e5';
    $pane->panel = 'right_above';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1 style="text-align: center;">Pay After the Semester</h1><h3 style="text-align: center;">Get Flexible Terms</h3>',
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
    $pane->uuid = '677e1e1f-ba7d-43de-b9a6-290a97fe85e5';
    $display->content['new-677e1e1f-ba7d-43de-b9a6-290a97fe85e5'] = $pane;
    $display->panels['right_above'][0] = 'new-677e1e1f-ba7d-43de-b9a6-290a97fe85e5';
    $pane = new stdClass();
    $pane->pid = 'new-c66a434e-0816-450a-b759-f348b8f2c223';
    $pane->panel = 'right_below';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p style="text-align: center;"><a href="/sites/all/themes/debuga_theme1/img/c_learn_more.jpg" target="_self"><img alt="" src="/sites/all/themes/debuga_theme1/img/c_learn_more.jpg" style="width: 176px; height: 56px;"></a></p>',
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
    $pane->uuid = 'c66a434e-0816-450a-b759-f348b8f2c223';
    $display->content['new-c66a434e-0816-450a-b759-f348b8f2c223'] = $pane;
    $display->panels['right_below'][0] = 'new-c66a434e-0816-450a-b759-f348b8f2c223';
    $pane = new stdClass();
    $pane->pid = 'new-a0ffc8f1-98d7-49d3-9c55-96665381cdd9';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1 style="text-align: center;">Unlike Universites, You Graduate with a Career, Not Loans.</h1>',
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
    $pane->uuid = 'a0ffc8f1-98d7-49d3-9c55-96665381cdd9';
    $display->content['new-a0ffc8f1-98d7-49d3-9c55-96665381cdd9'] = $pane;
    $display->panels['top'][0] = 'new-a0ffc8f1-98d7-49d3-9c55-96665381cdd9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a0ffc8f1-98d7-49d3-9c55-96665381cdd9';
  $mini->display = $display;
  $export['c'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'd';
  $mini->category = '';
  $mini->admin_title = 'd';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '21324534-87dc-40fe-a262-bf27b5e9ba54';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-80276798-d2d3-4a56-9698-c5b7fff4fdd2';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1 style="text-align: center;"><a href="put url here"><img alt="" src="/sites/all/themes/debuga_theme1/img/d-2-a.jpg" style="width: 270px; height: 270px;"></a></h1><h1 style="text-align: center;">First Subject</h1><p style="text-align: center;">Text Line 1<br>Text Line 2<br>Text Line 3<br>Text Line 4</p><p style="text-align: center;"><a href="put url here"><img alt="" src="/sites/all/themes/debuga_theme1/img/d-3-a.jpg" style="width: 300px; height: 70px;"></a></p><p style="text-align: center;">&nbsp;</p>',
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
    $pane->uuid = '80276798-d2d3-4a56-9698-c5b7fff4fdd2';
    $display->content['new-80276798-d2d3-4a56-9698-c5b7fff4fdd2'] = $pane;
    $display->panels['left'][0] = 'new-80276798-d2d3-4a56-9698-c5b7fff4fdd2';
    $pane = new stdClass();
    $pane->pid = 'new-4d28810b-99ba-4aa3-bd6d-d8ee253f0202';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1 style="text-align: center;"><a href="put url here"><img alt="" src="/sites/all/themes/debuga_theme1/img/d-2-b.jpg" style="width: 270px; height: 270px;"></a></h1><h1 style="text-align: center;">Second Subject</h1><p style="text-align: center;">Text Line 1<br>Text Line 2<br>Text Line 3<br>Text Line 4</p><p style="text-align: center;"><a href="put url here"><img alt="" src="/sites/all/themes/debuga_theme1/img/d-3-b.jpg" style="width: 300px; height: 70px;"></a></p><p style="text-align: center;">&nbsp;</p>',
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
    $pane->uuid = '4d28810b-99ba-4aa3-bd6d-d8ee253f0202';
    $display->content['new-4d28810b-99ba-4aa3-bd6d-d8ee253f0202'] = $pane;
    $display->panels['middle'][0] = 'new-4d28810b-99ba-4aa3-bd6d-d8ee253f0202';
    $pane = new stdClass();
    $pane->pid = 'new-40c124c6-e608-487d-a361-e4a03731864f';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1 style="text-align: center;"><a href="put url here"><img alt="" src="/sites/all/themes/debuga_theme1/img/d-2-c.jpg" style="width: 270px; height: 270px;"></a></h1><h1 style="text-align: center;">Third Subject</h1><p style="text-align: center;">Text Line 1<br>Text Line 2<br>Text Line 3<br>Text Line 4</p><p style="text-align: center;"><a href="put url here"><img alt="" src="/sites/all/themes/debuga_theme1/img/d-3-c.jpg" style="width: 300px; height: 70px;"></a></p><p style="text-align: center;">&nbsp;</p>',
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
    $pane->uuid = '40c124c6-e608-487d-a361-e4a03731864f';
    $display->content['new-40c124c6-e608-487d-a361-e4a03731864f'] = $pane;
    $display->panels['right'][0] = 'new-40c124c6-e608-487d-a361-e4a03731864f';
    $pane = new stdClass();
    $pane->pid = 'new-a7a8cb13-ee63-4387-91f7-456a0a9b1a9b';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1 style="text-align: center;">Work on Real-Life Projects<br>Graduato with a Portfolio</h1><p style="text-align: center;">Text Line 1 Text Line 1 Text Line 1 Text Line 1 Text Line 1 Text Line 1 Text Line 1<br>Text Line 2 Text Line 2 Text Line 2 Text Line 2 Text Line 2</p>',
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
    $pane->uuid = 'a7a8cb13-ee63-4387-91f7-456a0a9b1a9b';
    $display->content['new-a7a8cb13-ee63-4387-91f7-456a0a9b1a9b'] = $pane;
    $display->panels['top'][0] = 'new-a7a8cb13-ee63-4387-91f7-456a0a9b1a9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-80276798-d2d3-4a56-9698-c5b7fff4fdd2';
  $mini->display = $display;
  $export['d'] = $mini;

  return $export;
}

/**
 * Implements hook_defaultconfig_views_default_views().
 */
function theme1_homepage_defaultconfig_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_page_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_image' => 0,
    'counter' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_slideshow_image' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'counter' => 'counter',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_slideshow_image']['id'] = 'field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['table'] = 'field_data_field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['field'] = 'field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Question */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'front_page_slideshow' => 'front_page_slideshow',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front-page-slideshow';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['front_page_slideshow'] = array(
    t('Master'),
    t('Front Page Slideshow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
  );
  $export['front_page_slideshow'] = $view;

  return $export;
}
