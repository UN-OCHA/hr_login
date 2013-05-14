<?php
/**
 * @file
 * hr_login.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_login_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_login';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'persona-buttons' => array(
          'module' => 'persona',
          'delta' => 'buttons',
          'region' => 'user_second',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide_login'] = $context;

  return $export;
}
