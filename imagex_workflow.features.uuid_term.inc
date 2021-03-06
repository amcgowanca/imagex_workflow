<?php
/**
 * @file
 * imagex_workflow.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function imagex_workflow_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Default',
    'description' => '',
    'format' => 'plain',
    'weight' => 0,
    'uuid' => 'd3f5f60c-54a5-4539-85e7-f3d0fc65390b',
    'vocabulary_machine_name' => 'workbench_section',
    'metatags' => array(),
  );

  features_alter_code('uuid_term', $terms);

  return $terms;
}
