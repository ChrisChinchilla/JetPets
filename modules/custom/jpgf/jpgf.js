(function ($) {
    Drupal.behaviors.jpgf = {
        attach: function(context, settings) {
            if ($('.field-name-field-pet-image').length > 0) {
                $('.field-name-field-pet-cert-image').remove();
                $('.field-name-field-primary-pet-character').addClass( "withImage" );

            } else {
                $('.field-name-field-primary-pet-character .node-pet-character h2').remove();
            }
        }
    };
})(jQuery);