<?php

$template_name = basename(__FILE__);
$current_path = realpath(NULL);
$current_len = strlen($current_path);
$template_path = realpath(dirname(__FILE__));
if (!strncmp($template_path, $current_path, $current_len)) {
    $template_path = substr($template_path, $current_len + 1);
}
$template_url = url($template_path, array('absolute' => TRUE));
$themeURL = url(drupal_get_path('theme', $GLOBALS['theme']), array('absolute' => TRUE));
?>

<div class="htmlmail-body" style="max-width:550px;">
    <?php echo $params['subject']; ?><br>
    <br>
    <?php
    $config = array(
        "style_name" => "300px_shareable",
        "path" => $params['petImage'][0],
        "height" => NULL,
        "width" => NULL,
        "attributes" => array(
            "style" => "float: left; margin-right:10px;"
        )
    );
    ?>
    <a href="<?php echo $params['url']; ?>">
        <?php
        print theme_image_style($config);
        ?>
    </a>
    <br>

    <p>Share your result</p>
    <a href="https://www.facebook.com/sharer/sharer.php?u=<?php echo $params['shareURL'] . '/small' ?>"><img
            src="<?php echo $themeURL; ?>/images/fb_email_logo.png"></a>
    <a href="http://twitter.com/intent/tweet?url=<?php echo $params['shareURL'] . '/small' ?>&text=Find out what personality my <?php echo $params['petName'] ?> was!?&via=jetpets"><img
            src="<?php echo $themeURL; ?>/images/tw_email_logo.png"></a>
    <a href="https://plus.google.com/share?url=<?php echo $params['shareURL'] . '/small' ?>"><img
            src="<?php echo $themeURL; ?>/images/gp_email_logo.png"></a>
    <a href="mailto:subject=What should this say&body=What should this say <?php echo $params['shareURL'] . '/small' ?>"><img
            src="<?php echo $themeURL; ?>/images/em_email_logo.png"></a>

    <br>
    You can view your result <a href="<?php echo $params['url'] ?>">here</a> and print out and frame if you wish.<br>
    <br>
    Find out how <?php echo $params['petName'] ?> compares to other pets <a href="http://petquiz.com.au/personalities"
                                                                            target="_blank">here</a>.<br>
    <br>
    <a href="http://Petquiz.com.au">Petquiz.com.au</a> is proudly supported by Jetpets.
</div>