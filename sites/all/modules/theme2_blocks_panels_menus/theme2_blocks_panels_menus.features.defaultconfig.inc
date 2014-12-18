<?php
/**
 * @file
 * theme2_blocks_panels_menus.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function theme2_blocks_panels_menus_defaultconfig_features() {
  return array(
    'theme2_blocks_panels_menus' => array(
      'default_ctools_custom_content' => 'default_ctools_custom_content',
      'default_panels_mini' => 'default_panels_mini',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_ctools_custom_content().
 */
function theme2_blocks_panels_menus_defaultconfig_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'class_over';
  $content->admin_title = 'Class Over';
  $content->admin_description = 'Information on what happens at course conclusion';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'What happens when the class is over?',
    'body' => '<h2 class="tab-header">What happens when the class is over?</h2><p>This course will take approximately 14 weeks. After the course, we will not teach another class for 3 weeks -- your teacher\'s job in that time is to help you get paid work, and be available for questions to make your career transition smoother. This is appealing to employers - they will hire you, and you have your network as a resource for advanced questions.</p><a href="http://www.w3schools.com/" id="class-over" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['class_over'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'copyright_info';
  $content->admin_title = 'Copyright info';
  $content->admin_description = 'Copyright information';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>©Copyright 2014. All Rights Reserved.</p>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['copyright_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'employer_info';
  $content->admin_title = 'employer_info';
  $content->admin_description = 'Employer information';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'EMPLOYERS',
    'body' => '<p class="left-padding right-padding">Only teach highly in-demand technologies.<br>Re-assess curriculum regularly.</p><p class="left-padding right-padding">Keep class sizes very small: 5-10 students per class.</p><p class="left-padding right-padding">Curriculum is customized mid-way per-student.</p><a href="www.cnn.com" id="hire-class">Hire our Class<img src="/sites/all/themes/debuga_theme2/images/hire-class-button.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['employer_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'get_in_touch';
  $content->admin_title = 'Get In Touch';
  $content->admin_description = 'Address, Contact Info, and Hours';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'GET IN TOUCH',
    'body' => '<p><img src="/sites/all/themes/debuga_theme2/images/location-icon.PNG" style="line-height: 1.5; float: left;">&nbsp;<span style="line-height: 1.5;">Address: 13524 Gray Bill Court, Clifton</span></p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/phone-icon.png" style="float: left;">&nbsp;Phone: 703-111-1111</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/skype-icon.png" style="float: left;">&nbsp;Skype: debugsociety</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/e-mail-icon.png" style="float: left; margin-top: 3px; margin-bottom: 3px;">&nbsp;E-mail: debugsociety@debug.com</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/clock-icon.png" style="float: left;">&nbsp;Weekend: from 9 am to 6 pm</p>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['get_in_touch'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'hire_class';
  $content->admin_title = 'Hire Class';
  $content->admin_description = 'Dialogue bubble - hire our class';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Hire our next class to work on YOUR project',
    'body' => '<p>Client projects are led by the teacher, a full-time senior developer.</p>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['hire_class'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'how_different';
  $content->admin_title = 'How Different';
  $content->admin_description = 'How Debug Society is Different';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'HOW WE\'RE DIFFERENT',
    'body' => '<hr class="hr-light" id="diff-hr"><p class="left">Debug Society is the best in the world wooot wooot forever and ever. Debug Society is the best in the world wooot wooot forever and ever. Debug Society is the best in the world wooot wooot forever and ever.</p><ul><li>We\'re the best ever seriously we are we are we are we are</li><li>We\'re the best all the time</li><li>We\'re the best yesterday we are</li><li>We\'re the best today</li><li>We\'re the best tomorrow</li><li>We\'re the best now</li></ul>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['how_different'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'join_the_movement';
  $content->admin_title = 'Join the Movement';
  $content->admin_description = 'Join the movement section with apply now link';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'JOIN THE MOVEMENT',
    'body' => '<hr><a href="https://debugs.slack.com" id="apply-today">APPLY TODAY<img src="/sites/all/themes/debuga_theme2/images/apply-today-button.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['join_the_movement'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'next_location';
  $content->admin_title = 'Next Location';
  $content->admin_description = 'Where the next class is located';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Where is the next class located?',
    'body' => '<h2 class="tab-header">Where is the next class located?</h2><p>The class will be held in Fairfax, VA - near Washington, D.C. Graduates will be well placed to score a great job with the active D.C. Drupal community.</p><a href="http://www.w3schools.com/" id="next-location" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['next_location'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'payment_info';
  $content->admin_title = 'Payment Info';
  $content->admin_description = 'Tab with payment information';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Payment Information',
    'body' => '<h2 class="tab-header">Payment Information</h2><p>Here is some payment information</p><a href="http://www.w3schools.com/" id="payment-info" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['payment_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'previous_graduate_statistics';
  $content->admin_title = 'Previous Graduate Statistics';
  $content->admin_description = 'Previous Graduate Statistics';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'PREVIOUS GRADUATE STATISTICS',
    'body' => '<hr><a href="https://debugs.slack.com" id="see-stats-link" target="_blank"><img src="/sites/all/themes/debuga_theme2/images/stats-button-bg.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['previous_graduate_statistics'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'student_info';
  $content->admin_title = 'Student Info';
  $content->admin_description = 'Information for Students';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'STUDENTS',
    'body' => '<p class="left-padding right-padding">Only teach highly in-demand technologies.<br>Re-assess curriculum regularly.</p><p class="left-padding right-padding">Keep class sizes very small: 5-10 students per class.</p><p class="left-padding right-padding">Curriculum is customized mid-way per-student.</p><a href="www.cnn.com" id="apply-now">Apply Now<img src="/sites/all/themes/debuga_theme2/images/apply-now-button.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['student_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'teaching_next';
  $content->admin_title = 'Teaching Next';
  $content->admin_description = 'Information on what Debug Society will be teaching next';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'What are we teaching next?',
    'body' => '<h2 class="tab-header">What are we teaching next?</h2><p>This semester we will be teaching Drupal 7 development. Students will learn how to be a valuable member of an enterprise-level Drupal development team. Your teacher currently works on some of the largest Drupal websites in the world, and you will develop the same way his team does. You will be a great asset to any Drupal development team!</p><a href="http://www.w3schools.com/" id="teaching-next" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['teaching_next'] = $content;

  return $export;
}

/**
 * Implements hook_defaultconfig_default_panels_mini().
 */
function theme2_blocks_panels_menus_defaultconfig_default_panels_mini() {
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

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'theme_2_footer';
  $mini->category = '';
  $mini->admin_title = 'Theme 2 Footer';
  $mini->admin_description = 'Mini panel for theme 2 footer';
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
  $display->uuid = '699f90ed-ec41-4552-ac27-ebe06bf21551';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cd8d2bde-ade9-479f-912f-836fc573a213';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'get_in_touch';
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
      'css_id' => 'in-touch',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cd8d2bde-ade9-479f-912f-836fc573a213';
    $display->content['new-cd8d2bde-ade9-479f-912f-836fc573a213'] = $pane;
    $display->panels['middle'][0] = 'new-cd8d2bde-ade9-479f-912f-836fc573a213';
    $pane = new stdClass();
    $pane->pid = 'new-5c00bf52-76cf-4e11-b785-ee1f9e600493';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-useful-links';
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
    $pane->css = array(
      'css_id' => 'useful-links',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c00bf52-76cf-4e11-b785-ee1f9e600493';
    $display->content['new-5c00bf52-76cf-4e11-b785-ee1f9e600493'] = $pane;
    $display->panels['middle'][1] = 'new-5c00bf52-76cf-4e11-b785-ee1f9e600493';
    $pane = new stdClass();
    $pane->pid = 'new-cb5b7ea3-9d6f-4d61-8d4e-d0ae8b854a57';
    $pane->panel = 'middle';
    $pane->type = 'social_media_link_widget';
    $pane->subtype = 'social_media_link_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'FOLLOW US',
      'platforms' => array(
        'facebook' => array(
          'platform_value' => 'ashabed',
          'weight' => '-9',
        ),
        'twitter' => array(
          'platform_value' => 'ashabed',
          'weight' => '-8',
        ),
        'googleplus' => array(
          'platform_value' => '',
          'weight' => '-7',
        ),
        'linkedin' => array(
          'platform_value' => 'pub/ashraf-abed/33/1b/62b',
          'weight' => '-6',
        ),
        'pinterest' => array(
          'platform_value' => '',
          'weight' => '-5',
        ),
        'vimeo' => array(
          'platform_value' => '',
          'weight' => '-4',
        ),
        'youtube' => array(
          'platform_value' => '',
          'weight' => '-3',
        ),
        'rss' => array(
          'platform_value' => 'home2',
          'weight' => '-2',
        ),
        'contact' => array(
          'platform_value' => '',
          'weight' => '-1',
        ),
        'email' => array(
          'platform_value' => '',
          'weight' => '0',
        ),
      ),
      'appearance' => array(
        'orientation' => 'h',
        'show_name' => 0,
      ),
      'link_attributes' => array(
        'target' => '<none>',
        'rel' => '<none>',
      ),
      'form_build_id' => 'form-rOWwH5hpQoCr95k1TE2yYqb11vpcsb74YYtAH2qHu6g',
      'form_token' => 'SCcyhFhjkNrjX_eZknr_zep2Zd_7NZQKXCRqumP901Q',
      'form_id' => 'social_media_links_widget_form',
      'icon_style' => 'elegantthemes:32',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cb5b7ea3-9d6f-4d61-8d4e-d0ae8b854a57';
    $display->content['new-cb5b7ea3-9d6f-4d61-8d4e-d0ae8b854a57'] = $pane;
    $display->panels['middle'][2] = 'new-cb5b7ea3-9d6f-4d61-8d4e-d0ae8b854a57';
    $pane = new stdClass();
    $pane->pid = 'new-87c9d83f-3362-440e-b480-e8da3626f70e';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'simplenews-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'OUR NEWSLETTER',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'simplenews',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '87c9d83f-3362-440e-b480-e8da3626f70e';
    $display->content['new-87c9d83f-3362-440e-b480-e8da3626f70e'] = $pane;
    $display->panels['middle'][3] = 'new-87c9d83f-3362-440e-b480-e8da3626f70e';
    $pane = new stdClass();
    $pane->pid = 'new-132f87e5-baba-4ca9-8456-153ff7461e08';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'copyright_info';
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
      'css_id' => 'copyright',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '132f87e5-baba-4ca9-8456-153ff7461e08';
    $display->content['new-132f87e5-baba-4ca9-8456-153ff7461e08'] = $pane;
    $display->panels['middle'][4] = 'new-132f87e5-baba-4ca9-8456-153ff7461e08';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-cd8d2bde-ade9-479f-912f-836fc573a213';
  $mini->display = $display;
  $export['theme_2_footer'] = $mini;

  return $export;
}
