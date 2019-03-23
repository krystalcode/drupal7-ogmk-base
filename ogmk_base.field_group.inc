<?php

/**
 * @file
 * ogmk_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ogmk_base_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ag1i1|paragraphs_item|basic|form';
  $field_group->group_name = 'group_ag1i1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'basic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ag1';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '7',
    'children' => array(
      0 => 'ogmk_text',
      1 => 'ogmk_text_long',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ag1i1|paragraphs_item|basic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ag1i1|paragraphs_item|node_list|form';
  $field_group->group_name = 'group_ag1i1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'node_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ag1';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '12',
    'children' => array(
      0 => 'ogmk_text',
      1 => 'ogmk_text_long',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ag1i1 field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ag1i1|paragraphs_item|node_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ag1i2|paragraphs_item|basic|form';
  $field_group->group_name = 'group_ag1i2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'basic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ag1';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '8',
    'children' => array(
      0 => 'ogmk_icon',
      1 => 'ogmk_atom_ref',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ag1i2 field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ag1i2|paragraphs_item|basic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ag1i2|paragraphs_item|node_list|form';
  $field_group->group_name = 'group_ag1i2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'node_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ag1';
  $field_group->data = array(
    'label' => 'Content Items',
    'weight' => '13',
    'children' => array(
      0 => 'ogmk_link',
      1 => 'ogmk_nodes_ref',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ag1i2 field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ag1i2|paragraphs_item|node_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ag1i3|paragraphs_item|basic|form';
  $field_group->group_name = 'group_ag1i3';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'basic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ag1';
  $field_group->data = array(
    'label' => 'Display Settings',
    'weight' => '9',
    'children' => array(
      0 => 'ogmk_styles',
      1 => 'ogmk_view_mode',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ag1i3 field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ag1i3|paragraphs_item|basic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ag1i3|paragraphs_item|node_list|form';
  $field_group->group_name = 'group_ag1i3';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'node_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ag1';
  $field_group->data = array(
    'label' => 'Display Settings',
    'weight' => '16',
    'children' => array(
      0 => 'ogmk_styles',
      1 => 'ogmk_view_mode',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ag1i3 field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ag1i3|paragraphs_item|node_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ag1|paragraphs_item|basic|form';
  $field_group->group_name = 'group_ag1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'basic';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accordion Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_ag1i1',
      1 => 'group_ag1i2',
      2 => 'group_ag1i3',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ag1|paragraphs_item|basic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ag1|paragraphs_item|node_list|form';
  $field_group->group_name = 'group_ag1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'node_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accordion Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_ag1i2',
      1 => 'group_ag1i1',
      2 => 'group_ag1i3',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => 'group-ag1 field-group-accordion',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ag1|paragraphs_item|node_list|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion Group');
  t('Content');
  t('Content Items');
  t('Display Settings');
  t('Media');

  return $field_groups;
}
