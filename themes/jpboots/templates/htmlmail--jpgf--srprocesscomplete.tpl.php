<?php

$template_name = basename(__FILE__);
$current_path = realpath(NULL);
$current_len = strlen($current_path);
$template_path = realpath(dirname(__FILE__));
if (!strncmp($template_path, $current_path, $current_len)) {
    $template_path = substr($template_path, $current_len + 1);
}
$template_url = url($template_path, array('absolute' => TRUE));
$themeURL = url(drupal_get_path('theme', 'jpboots'), array('absolute' => TRUE));
?>

<div class="htmlmail-body" style="max-width:550px;">
    <?php echo $params['subject']; ?><br>
    <br>
    <?php
    $config = array(
        "style_name" => "600px_shareable",
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
  <p>
    <strong>Want to get more personal?</strong>
    <br>
    Upload an image of your pet <a href="http://petquiz.com.au/addimage/<?php echo $params['pID'] . '/' . $params['cID']?>">by clicking here</a> and personalise <?php echo $params['petName']; ?>s certificate even more!
  </p>
    <p>Share your result</p>

    <a href="https://www.facebook.com/sharer/sharer.php?u=<?php echo $params['shareURL'] ?>&t=My pet is a <?php echo $params['petType'] ; ?>. Find out what yours is by taking the pet personality survey"><img
            src="<?php echo $themeURL; ?>/images/fb_email_logo.png"></a>
    <a href="http://twitter.com/intent/tweet?url=<?php echo $params['shareURL'] ?>&text=My pet is a <?php echo $params['petType'] ; ?>. Find out what yours is by taking the pet personality survey"><img
            src="<?php echo $themeURL; ?>/images/tw_email_logo.png"></a>
    <a href="https://plus.google.com/share?url=<?php echo $params['shareURL'] ?>"><img
            src="<?php echo $themeURL; ?>/images/gp_email_logo.png"></a>
    <a href="mailto:subject=My pet is a <?php echo $params['petType'] ; ?>. Find out what yours is by taking the pet personality survey&body=My pet is a <?php echo $params['petType'] ; ?>. Find out what yours is by taking the pet personality survey at http://Petquiz.com.au" ?>"><img
            src="<?php echo $themeURL; ?>/images/em_email_logo.png"></a>
    <br>
    You can view your result <a href="<?php echo $params['url'] ?>">here</a> and print out and frame if you wish.<br>
    Find out how <?php echo $params['petName'] ?> compares to other pets <a href="http://petquiz.com.au/personalities"
                                                                            target="_blank">here</a>.<br>
    <br>
    <a href="http://Petquiz.com.au">Petquiz.com.au</a> is proudly supported by Jetpets.
</div>