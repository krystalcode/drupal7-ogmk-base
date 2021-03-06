<?php

/**
 * @file
 * ogmk_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ogmk_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-ogmk_costs-ogmk_cost_type_ref'.
  $field_instances['field_collection_item-ogmk_costs-ogmk_cost_type_ref'] = array(
    'bundle' => 'ogmk_costs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'ogmk_cost_type_ref',
    'label' => 'Type',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-ogmk_costs-ogmk_price'.
  $field_instances['field_collection_item-ogmk_costs-ogmk_price'] = array(
    'bundle' => 'ogmk_costs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'ogmk_price',
    'label' => 'Amount',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-ogmk_costs-ogmk_text_long'.
  $field_instances['field_collection_item-ogmk_costs-ogmk_text_long'] = array(
    'bundle' => 'ogmk_costs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'ogmk_text_long',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'context' => '',
      'dnd_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-basic-ogmk_atom_ref'.
  $field_instances['paragraphs_item-basic-ogmk_atom_ref'] = array(
    'bundle' => 'basic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'image_1110',
        'weight' => 0,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'image_150',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_atom_ref',
    'label' => 'Header Resource',
    'required' => 0,
    'settings' => array(
      'allow_override' => 0,
      'entity_translation_sync' => FALSE,
      'referencable_types' => array(
        'image' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-basic-ogmk_icon'.
  $field_instances['paragraphs_item-basic-ogmk_icon'] = array(
    'bundle' => 'basic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'icon_field',
        'settings' => array(
          'link_to_content' => FALSE,
        ),
        'type' => 'icon_field_default',
        'weight' => 1,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'hidden',
        'module' => 'icon_field',
        'settings' => array(
          'link_to_content' => FALSE,
        ),
        'type' => 'icon_field_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'bundle' => NULL,
      'entity_translation_sync' => FALSE,
      'icon' => NULL,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'icon_field',
      'settings' => array(),
      'type' => 'icon_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-basic-ogmk_styles'.
  $field_instances['paragraphs_item-basic-ogmk_styles'] = array(
    'bundle' => 'basic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_styles',
    'label' => 'Styles',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-basic-ogmk_text'.
  $field_instances['paragraphs_item-basic-ogmk_text'] = array(
    'bundle' => 'basic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_text',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'bonsai_html' => 'bonsai_html',
          'ogmk_basic_html' => 'ogmk_basic_html',
          'ogmk_html' => 'ogmk_html',
          'ogmk_plain_html' => 'ogmk_plain_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'bonsai_html' => array(
              'weight' => 0,
            ),
            'ogmk_basic_html' => array(
              'weight' => 0,
            ),
            'ogmk_html' => array(
              'weight' => 0,
            ),
            'ogmk_plain_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'context' => '',
      'dnd_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-basic-ogmk_text_long'.
  $field_instances['paragraphs_item-basic-ogmk_text_long'] = array(
    'bundle' => 'basic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_text_long',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'bonsai_html' => 0,
          'ogmk_basic_html' => 'ogmk_basic_html',
          'ogmk_html' => 0,
          'ogmk_plain_html' => 'ogmk_plain_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'bonsai_html' => array(
              'weight' => 0,
            ),
            'ogmk_basic_html' => array(
              'weight' => 0,
            ),
            'ogmk_html' => array(
              'weight' => 0,
            ),
            'ogmk_plain_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'context' => '',
      'dnd_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-basic-ogmk_view_mode'.
  $field_instances['paragraphs_item-basic-ogmk_view_mode'] = array(
    'bundle' => 'basic',
    'default_value' => array(
      0 => array(
        'value' => 'default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_view_mode',
    'label' => 'View mode',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'number_placeholders' => FALSE,
      'user_register_form' => FALSE,
      'view_modes' => array(
        'default' => array(
          'enable' => 1,
        ),
        'diff_standard' => array(
          'enable' => 0,
        ),
        'full' => array(
          'enable' => 0,
        ),
        'ogmk_bootstrap_grid_3' => array(
          'enable' => 0,
        ),
        'ogmk_bootstrap_grid_4' => array(
          'enable' => 0,
        ),
        'ogmk_bootstrap_media' => array(
          'enable' => 0,
        ),
        'ogmk_bootstrap_media_simple' => array(
          'enable' => 1,
        ),
        'paragraphs_editor_preview' => array(
          'enable' => 0,
        ),
        'token' => array(
          'enable' => 0,
        ),
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'view_mode_selector',
      'settings' => array(),
      'type' => 'view_mode_selector_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-block-ogmk_bean_ref'.
  $field_instances['paragraphs_item-block-ogmk_bean_ref'] = array(
    'bundle' => 'block',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => TRUE,
          'view_mode' => 'bootstrap_media_object',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_bean_ref',
    'label' => 'Block Reference',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-node_list-ogmk_link'.
  $field_instances['paragraphs_item-node_list-ogmk_link'] = array(
    'bundle' => 'node_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'ogmk_pages',
        'settings' => array(
          'brand' => 'primary',
          'icon_classes' => 'fa fa-arrow-right',
          'position' => 'right',
          'size' => 'default',
        ),
        'type' => 'link_bootstrap_button',
        'weight' => 3,
      ),
      'ogmk_bootstrap_grid_3' => array(
        'label' => 'hidden',
        'module' => 'ogmk_pages',
        'settings' => array(
          'brand' => 'primary',
          'icon_classes' => 'fa fa-arrow-right',
          'position' => 'right',
          'size' => 'default',
        ),
        'type' => 'link_bootstrap_button',
        'weight' => 3,
      ),
      'ogmk_bootstrap_grid_4' => array(
        'label' => 'hidden',
        'module' => 'ogmk_pages',
        'settings' => array(
          'brand' => 'primary',
          'icon_classes' => 'fa fa-arrow-right',
          'position' => 'right',
          'size' => 'default',
        ),
        'type' => 'link_bootstrap_button',
        'weight' => 3,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'hidden',
        'module' => 'ogmk_pages',
        'settings' => array(
          'brand' => 'primary',
          'icon_classes' => 'fa fa-arrow-right',
          'position' => 'right',
          'size' => 'default',
        ),
        'type' => 'link_bootstrap_button',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'paragraphs_item-node_list-ogmk_nodes_ref'.
  $field_instances['paragraphs_item-node_list-ogmk_nodes_ref'] = array(
    'bundle' => 'node_list',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'ogmk_pages',
        'settings' => array(
          'cols_clear' => 1,
          'cols_lg' => 3,
          'cols_md' => 4,
          'cols_sm' => 6,
          'cols_xs' => 12,
          'links' => 1,
          'view_mode' => 'teaser',
          'wrapper_class' => 'thumbnail',
        ),
        'type' => 'entityreference_bootstrap_grid',
        'weight' => 2,
      ),
      'ogmk_bootstrap_grid_3' => array(
        'label' => 'hidden',
        'module' => 'ogmk_pages',
        'settings' => array(
          'cols_clear' => 1,
          'cols_lg' => 4,
          'cols_md' => 4,
          'cols_sm' => 6,
          'cols_xs' => 12,
          'links' => 1,
          'view_mode' => 'teaser',
          'wrapper_class' => 'thumbnail',
        ),
        'type' => 'entityreference_bootstrap_grid',
        'weight' => 2,
      ),
      'ogmk_bootstrap_grid_4' => array(
        'label' => 'hidden',
        'module' => 'ogmk_pages',
        'settings' => array(
          'cols_clear' => 1,
          'cols_lg' => 3,
          'cols_md' => 4,
          'cols_sm' => 6,
          'cols_xs' => 12,
          'links' => 1,
          'view_mode' => 'teaser',
          'wrapper_class' => 'thumbnail',
        ),
        'type' => 'entityreference_bootstrap_grid',
        'weight' => 2,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => TRUE,
          'view_mode' => 'ogmk_bootstrap_media_simple',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_nodes_ref',
    'label' => 'Content Items',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'paragraphs_item-node_list-ogmk_styles'.
  $field_instances['paragraphs_item-node_list-ogmk_styles'] = array(
    'bundle' => 'node_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'ogmk_bootstrap_grid_3' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'ogmk_bootstrap_grid_4' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_styles',
    'label' => 'Styles',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-node_list-ogmk_text'.
  $field_instances['paragraphs_item-node_list-ogmk_text'] = array(
    'bundle' => 'node_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'ogmk_bootstrap_grid_3' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'ogmk_bootstrap_grid_4' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_text',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'bonsai_html' => 'bonsai_html',
          'ogmk_basic_html' => 'ogmk_basic_html',
          'ogmk_html' => 'ogmk_html',
          'ogmk_plain_html' => 'ogmk_plain_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'bonsai_html' => array(
              'weight' => 0,
            ),
            'ogmk_basic_html' => array(
              'weight' => 0,
            ),
            'ogmk_html' => array(
              'weight' => 0,
            ),
            'ogmk_plain_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'context' => '',
      'dnd_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-node_list-ogmk_text_long'.
  $field_instances['paragraphs_item-node_list-ogmk_text_long'] = array(
    'bundle' => 'node_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'ogmk_bootstrap_grid_3' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'ogmk_bootstrap_grid_4' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_text_long',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'bonsai_html' => 0,
          'ogmk_basic_html' => 'ogmk_basic_html',
          'ogmk_html' => 0,
          'ogmk_plain_html' => 'ogmk_plain_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'bonsai_html' => array(
              'weight' => 0,
            ),
            'ogmk_basic_html' => array(
              'weight' => 0,
            ),
            'ogmk_html' => array(
              'weight' => 0,
            ),
            'ogmk_plain_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'context' => '',
      'dnd_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-node_list-ogmk_view_mode'.
  $field_instances['paragraphs_item-node_list-ogmk_view_mode'] = array(
    'bundle' => 'node_list',
    'default_value' => array(
      0 => array(
        'value' => 'default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'ogmk_bootstrap_grid_3' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'ogmk_bootstrap_grid_4' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'ogmk_bootstrap_media_simple' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'ogmk_view_mode',
    'label' => 'View mode',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'number_placeholders' => FALSE,
      'user_register_form' => FALSE,
      'view_modes' => array(
        'default' => array(
          'enable' => 0,
        ),
        'diff_standard' => array(
          'enable' => 0,
        ),
        'full' => array(
          'enable' => 0,
        ),
        'paragraphs_editor_preview' => array(
          'enable' => 0,
        ),
        'token' => array(
          'enable' => 0,
        ),
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'view_mode_selector',
      'settings' => array(),
      'type' => 'view_mode_selector_select',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Amount');
  t('Block Reference');
  t('Body');
  t('Content Items');
  t('Description');
  t('Header Resource');
  t('Icon');
  t('Link');
  t('Styles');
  t('Title');
  t('Type');
  t('View mode');

  return $field_instances;
}
