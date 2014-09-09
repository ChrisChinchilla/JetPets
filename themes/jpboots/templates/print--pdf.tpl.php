<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
    "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html class="print_pdf" xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>"
      version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>">
<head>
    <?php print $head; ?>
    <base href='<?php print $url ?>'/>
    <title><?php print $print_title; ?></title>
    <?php print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
        <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>' type='image/x-icon'/>
    <?php endif; ?>
    <?php print $css; ?>
</head>
<body>
<div id="wrapper">
    <?php if (!isset($node->type)): ?>
        <h2 class="print-title"><?php print $print_title; ?></h2>
    <?php endif; ?>
    <div class="print-content"><?php print $content; ?></div>

    <div class="print-links"><?php print theme('print_url_list'); ?></div>
    <?php print $footer_scripts; ?>
</div>
</body>
</html>
