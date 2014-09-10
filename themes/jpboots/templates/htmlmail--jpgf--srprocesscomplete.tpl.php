<?php

$template_name = basename(__FILE__);
$current_path = realpath(NULL);
$current_len = strlen($current_path);
$template_path = realpath(dirname(__FILE__));
if (!strncmp($template_path, $current_path, $current_len)) {
    $template_path = substr($template_path, $current_len + 1);
}
$template_url = url($template_path, array('absolute' => TRUE));
?>
    <div class="htmlmail-body">
        Congratulations <?php echo $params['name'] ?>!! Your <?php echo $params['petName'] ?> is a <?php echo $params['petType'][0] ?>.<br>
        <br>
        <?php
        $config = array(
            "style_name" => "300px_shareable",
            "path" => $params['petImage'][0],
            "height" => NULL,
            "width" => NULL,
        );
        print theme_image_style($config);
        ?>
        <br>
        <br>
        <ul>
            <li><a href="https://www.facebook.com/sharer/sharer.php?u=<?php echo $params['shareURL'] . '/small' ?>">Facebook</a></li>
            <li><a href="http://twitter.com/intent/tweet?url=<?php echo $params['shareURL'] . '/small' ?>&text=Find out what personality my <?php echo $params['petName'] ?> was!?&via=jetpets">Twitter</a></li>
            <li><a href="https://plus.google.com/share?url=<?php echo $params['shareURL'] . '/small' ?>">G+</a></li>
            <li>Pin</li>
            <li><a href="mailto:subject=What should this say&body=What should this say <?php echo $params['shareURL'] . '/small' ?>">Email</a>
            </li>
        </ul>
        <br>
        You can download the certificate from this <a href="<?php echo $params['url']?>">link</a> to print out and frame.<br>
        <br>
        Find out how <?php echo $params['petName'] ?> compares to other pets <a href="http://petquiz.com.au/personalities" target=""_blank">here</a>.<br>
        <br>
        <a href="http://Petquiz.com.au">Petquiz.com.au</a> is proudly supported by Jetpets.
    </div>