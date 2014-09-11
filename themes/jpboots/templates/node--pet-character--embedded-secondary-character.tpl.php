<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <div class="content"<?php print $content_attributes; ?>>
        <p><?php print $second_block_header; ?></p>
        <div class="bone_layer"><?php print views_embed_view('bone', 'block', $_SESSION['petID']);?></div>
        <div class="bone_main_content"><?php print render($content);?></div>
        <?php print $second_block_footer; ?>

    </div>

</div>
