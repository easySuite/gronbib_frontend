<?php
/**
 * @file
 * gronbib_frontend.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gronbib_frontend_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gronbib_libraries_views';
  $view->description = '';
  $view->tag = 'ding_library';
  $view->base_table = 'node';
  $view->human_name = 'Gronbib libraries views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'vcard clearfix library-[nid]';
  $handler->display->display_options['style_options']['class'] = 'library-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'libraries-title org';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_ding_library_addresse']['id'] = 'field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse']['table'] = 'field_data_field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse']['field'] = 'field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse']['label'] = 'Adresse';
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_class'] = 'dd adr address';
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_label_class'] = 'dt adr-label';
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_wrapper_class'] = 'dl address-content';
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_addresse']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_library_addresse']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ding_library_addresse']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_ding_library_phone_number']['id'] = 'field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['table'] = 'field_data_field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['field'] = 'field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['element_class'] = 'dd phone tel';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['element_label_class'] = 'dt tel-label';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['element_wrapper_class'] = 'dl phone-content';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_phone_number']['hide_empty'] = TRUE;
  /* Field: Content: Fax number */
  $handler->display->display_options['fields']['field_ding_library_fax_number']['id'] = 'field_ding_library_fax_number';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['table'] = 'field_data_field_ding_library_fax_number';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['field'] = 'field_ding_library_fax_number';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['label'] = 'Fax';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['element_class'] = 'dd fax';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['element_label_class'] = 'dt fax-label';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['element_wrapper_class'] = 'dl fax-content';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_fax_number']['hide_empty'] = TRUE;
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_ding_library_mail']['id'] = 'field_ding_library_mail';
  $handler->display->display_options['fields']['field_ding_library_mail']['table'] = 'field_data_field_ding_library_mail';
  $handler->display->display_options['fields']['field_ding_library_mail']['field'] = 'field_ding_library_mail';
  $handler->display->display_options['fields']['field_ding_library_mail']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_mail']['element_class'] = 'dd email';
  $handler->display->display_options['fields']['field_ding_library_mail']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_mail']['element_label_class'] = 'dt email-label';
  $handler->display->display_options['fields']['field_ding_library_mail']['element_wrapper_class'] = 'dl email-content';
  $handler->display->display_options['fields']['field_ding_library_mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_mail']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<i class="icon-chevron-right"></i> [title_1]';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[title_1]';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'p';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'library-link';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_library' => 'ding_library',
  );

  /* Display: Frontpage libraries listing */
  $handler = $view->new_display('panel_pane', 'Frontpage libraries listing', 'ding_library_frontpage_list');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Se alle biblioteker';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'libraries';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_ding_library_title_image' => 'field_ding_library_title_image',
    'field_ding_library_lead' => 'field_ding_library_lead',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Kø';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'ding_library_listing' => 'ding_library_listing',
    'ding_groups_listning' => 0,
    'ding_groups_frontpage_listing' => 0,
    'ding_tabroll_frontpage' => 0,
  );
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_library_lead']['id'] = 'field_ding_library_lead';
  $handler->display->display_options['fields']['field_ding_library_lead']['table'] = 'field_data_field_ding_library_lead';
  $handler->display->display_options['fields']['field_ding_library_lead']['field'] = 'field_ding_library_lead';
  $handler->display->display_options['fields']['field_ding_library_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_library_lead']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_lead']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ding_library_lead']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['field_ding_library_lead']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_library' => 'ding_library',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $translatables['gronbib_libraries_views'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Adresse'),
    t('Phone'),
    t('Fax'),
    t('E-mail'),
    t('<i class="icon-chevron-right"></i> [title_1]'),
    t('Frontpage libraries listing'),
    t('Se alle biblioteker'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Kø'),
    t('File'),
    t('View panes'),
  );
  $export['gronbib_libraries_views'] = $view;

  return $export;
}
