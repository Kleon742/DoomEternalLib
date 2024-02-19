struct idDeclTextCrawl : idGameDeclTypeInfo
{
    struct textCrawlBackgroundOptions_t
    {
        // If true, show a solid black background behind this text crawl
        bool visible; // Offset: 0x0

        // Time, in milliseconds, to fade in the background before showing the first line
        idTypesafeTime < int , millisecondUnique_t , 1000 > fadeInTime; // Offset: 0x4

        // Time, in milliseconds, to fade out the background after hiding the last line.
        idTypesafeTime < int , millisecondUnique_t , 1000 > fadeOutTime; // Offset: 0x8

    }; // Size: 0xC

    struct textCrawlLine_t
    {
        // Text to show onscreen
        idStrId text; // Offset: 0x0

        // How long, in milliseconds, to fade in the text
        idTypesafeTime < int , millisecondUnique_t , 1000 > fadeInTime; // Offset: 0x4

        // How long, in milliseconds, to show the text onscreen after fading in
        idTypesafeTime < int , millisecondUnique_t , 1000 > holdTime; // Offset: 0x8

        // How long, in milliseconds, to fade out the text
        idTypesafeTime < int , millisecondUnique_t , 1000 > fadeOutTime; // Offset: 0xC

        // How long, in milliseconds, to wait after fading out before showing the next line
        idTypesafeTime < int , millisecondUnique_t , 1000 > waitTime; // Offset: 0x10

        // Easing function to use for fade in
        idStr fadeInEasing; // Offset: 0x18

        // Easing function to use for fade out
        idStr fadeOutEasing; // Offset: 0x48

        // Sound to play when showing this line
        idSoundEvent* showSound; // Offset: 0x78

        // Sound to play when hiding this line
        idSoundEvent* hideSound; // Offset: 0x80

    }; // Size: 0x88

    // Background settings for this text crawl
    idDeclTextCrawl::textCrawlBackgroundOptions_t background; // Offset: 0x90

    // lines in the text crawl
    idList < idDeclTextCrawl::textCrawlLine_t , TAG_IDLIST , false > lines; // Offset: 0xA0

}; // Size: 0xB8
