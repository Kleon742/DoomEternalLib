struct idDeclGameEventCallout : idGameDeclTypeInfo
{
    enum stringReplacementType_t : int
    {
        SRT_INVALID = 0,
        SRT_INT = 1,
        SRT_STRING = 2,
        SRT_MAX = 3
    };

    struct replacementInfo_t
    {
        // index of subject used to look up string replacement text
        char subjectIndex; // Offset: 0x0

        // the type of string replacement to use
        idDeclGameEventCallout::stringReplacementType_t lookupType; // Offset: 0x4

    }; // Size: 0x8

    struct screenShakeInfo_t
    {
        // shake or not
        bool shake; // Offset: 0x0

        // screen shake decl
        idDeclViewShake* shakeDecl; // Offset: 0x8

        // 0.0 to 1.0
        float shakeStrength; // Offset: 0x10

    }; // Size: 0x18

    struct calloutInfo_t
    {
        // Large text that will display across the screen.
        idStrId bannerText; // Offset: 0x0

        // Small text that will display in the event ticker.
        idStrId tickerText; // Offset: 0x4

        // Sound played to play for this callout.
        idSoundEvent* sound; // Offset: 0x8

        // UI sound id to play for this callout. If set to a positive integer, sounds with the same ID will be cut off when new sounds are played.
        int soundId; // Offset: 0x10

        // HUD notification to use for the callout.
        idDeclNotification* hudNotification; // Offset: 0x18

        // string replacements for the banner
        idList < idDeclGameEventCallout::replacementInfo_t , TAG_IDLIST , false > bannerReplacements; // Offset: 0x20

        // string replacements for the ticker
        idList < idDeclGameEventCallout::replacementInfo_t , TAG_IDLIST , false > tickerReplacements; // Offset: 0x38

        // screen shake info
        idDeclGameEventCallout::screenShakeInfo_t screenShake; // Offset: 0x50

    }; // Size: 0x68

    // The callout data for non-targeted global user callouts (e.g. match intro countdown).
    idDeclGameEventCallout::calloutInfo_t globalCallout; // Offset: 0x90

    // The callout data to use for allied teammates.
    idDeclGameEventCallout::calloutInfo_t allyCallout; // Offset: 0xF8

    // The callout data to use for enemy players.
    idDeclGameEventCallout::calloutInfo_t enemyCallout; // Offset: 0x160

    // The callout data to use for the local player. If this data is setup, the ally callout will NOT be sent to the targeted user.
    idDeclGameEventCallout::calloutInfo_t selfCallout; // Offset: 0x1C8

    // Overrides internal priority. If set to -1, priority is based on type of callout. Priority defines what order callouts are queued.
    int priorityOverride; // Offset: 0x230

    // This applies to directed callouts only (e.g. teammate killed, not ally victory). If false will send the ally callout to all teammates and not the targetted user.
    bool sendAllyCalloutToSelf; // Offset: 0x234

}; // Size: 0x238
