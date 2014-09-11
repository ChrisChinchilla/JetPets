<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <?php print $user_picture; ?>

    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
        <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <div class="content"<?php print $content_attributes; ?>>
        <?php
        print render($content);
        ?>
    </div>
</div>
