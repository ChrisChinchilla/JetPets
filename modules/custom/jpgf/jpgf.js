(function ($) {
    Drupal.behaviors.jpgf = {
        attach: function(context, settings) {
            if ($('.node-type-survey-response .field-name-field-pet-image').length > 0) {
                $('.node-type-survey-response .field-name-field-pet-cert-image').remove();
                $('.node-type-survey-response .field-name-field-primary-pet-character').addClass( "withImage" );

            } else {
                $('.node-type-survey-response .field-name-field-primary-pet-character .node-pet-character h2').remove();
            }
        }
    };
})(jQuery);