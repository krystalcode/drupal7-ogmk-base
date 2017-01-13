<?php
/**
 * @file
 * ogmk_base.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function ogmk_base_ckeditor_profile_defaults() {
  $data = array(
    'ogmk_basic_html' => array(
      'name' => 'ogmk_basic_html',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Format\'],
    [\'Bold\',\'Italic\',\'Underline\',\'NumberedList\',\'BulletedList\'],
    [\'Link\',\'Unlink\',\'ScaldAtom\'],
    [\'Blockquote\'],
    [\'Maximize\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%t/css/ckeditor.css',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin',
            'path' => '%editor_path%/plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'dndck4' => array(
            'name' => 'dndck4',
            'desc' => 'Scald Drag and Drop integration - CKEditor 4 widgets',
            'path' => '%base_path%sites/all/modules/contrib/scald/modules/fields/mee/plugins/dndck4/',
            'buttons' => array(
              'ScaldAtom' => array(
                'icon' => 'icons/atom.png',
                'label' => 'Edit atom properties',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'ogmk_basic_html' => 'Basic HTML',
      ),
    ),
    'ogmk_plain_html' => array(
      'name' => 'ogmk_plain_html',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'Underline\'],
    [\'NumberedList\',\'BulletedList\'],
    [\'Blockquote\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%t/css/ckeditor.css',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin',
            'path' => '%editor_path%/plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'ogmk_plain_html' => 'Plain HTML',
      ),
    ),
  );
  return $data;
}
