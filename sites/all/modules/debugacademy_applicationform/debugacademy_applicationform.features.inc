<?php
/**
 * @file
 * debugacademy_applicationform.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function debugacademy_applicationform_default_entityform_type() {
  $items = array();
  $items['application'] = entity_import('entityform_type', '{
    "type" : "application",
    "label" : "Application",
    "data" : {
      "draftable" : 1,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Submission Received ",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for applying to Debugacademy! We\\u0027ll get back to you as soon as possible.\\u003C\\/p\\u003E",
        "format" : "html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "5" : "5", "4" : "4" },
      "resubmit_action" : "confirm",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003E\\u003Cspan style=\\u0022font-family: Verdana, Arial, Helvetica, sans-serif; font-size: small; line-height: normal; text-align: justify; background-color: rgb(255, 255, 255);\\u0022\\u003EYou must submit all application materials by the deadline to be considered for admission. Please note that courses are limited in class size and admission is competitive. Applicants will be notified of selection decisions 4-6 weeks after the application deadline.\\u003C\\/span\\u003E\\u003C\\/p\\u003E",
        "format" : "html"
      },
      "anonymous_links" : 0,
      "session_save" : 0
    },
    "weight" : "0",
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/application",
        "alias" : "apply",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/application\\/confirm",
        "alias" : "apply\\/confirm",
        "language" : "und"
      }
    }
  }');
  return $items;
}
