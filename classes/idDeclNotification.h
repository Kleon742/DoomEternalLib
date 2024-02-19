struct idDeclNotification : idGameDeclTypeInfo
{
    enum iconAlignment_t : int
    {
        ICON_ALIGN_NONE = 0,
        ICON_ALIGN_LEFT = 1,
        ICON_ALIGN_RIGHT = 2
    };

    struct notificationIconInfo_t
    {
        // Support for having different sprite paths for the icon
        idList < idAtomicString , TAG_IDLIST , false > iconSpritePath; // Offset: 0x0

        // icon for the notification
        idMaterial2* icon; // Offset: 0x18

        // For special notifications that need an icon repositioned.
        idDeclNotification::iconAlignment_t iconAlignment; // Offset: 0x20

        // color for the notification icon (if unspecified, the icon will not be colored)
        swfNamedColors_t iconColor; // Offset: 0x24

    }; // Size: 0x28

    // where on the hud this is located ( used for queueing )
    hudLocation_t hudLocation; // Offset: 0x90

    // Type of notification to be used
    hudNotificationType_t notificationType; // Offset: 0x94

    // Hud Event ID for the notification
    hudEventID_t notificationHudEventID; // Offset: 0x98

    // Hud Event ID to emit when the notification ends (i.e. is hidden)
    hudEventID_t notificationEndHudEventID; // Offset: 0x9C

    // If opening the dossier while this notification is up should force the player to a specific page. MAP is the default
    dossierPage_t desiredDossierPage; // Offset: 0xA0

    // notification priority. Lower = higher priority
    int priority; // Offset: 0xA4

    // number of notifications that can be on the screen at the same time
    int numberOfNotificationSlots; // Offset: 0xA8

    // flag to take the notification out of the queue if one of the same type is also in the queue
    bool doNotShowDuplicate; // Offset: 0xAC

    // flag to take the notification out of the queue if one of the same type is playing
    bool ignoreIfPlaying; // Offset: 0xAD

    // ignore queueing and show this notification in the specified HUD location immediately
    bool showImmediately; // Offset: 0xAE

    // purges the queue of other notifications when added
    bool purgeQueueWhenAdded; // Offset: 0xAF

    // flag whether or not to show the notification during combat
    bool showDuringCombat; // Offset: 0xB0

    // ignore if player already has the primary item decl being granted by whatever prop2 this is attached to
    bool ignoreIfPlayerHasPrimaryItem; // Offset: 0xB1

    // which notifications to replace
    hudNotificationType_t notificationReplaceType; // Offset: 0xB4

    // which notifications this one can coexist with
    hudNotificationType_t notificationCoexistType; // Offset: 0xB8

    // how long the notification stays up.
    idTypesafeTime < int , millisecondUnique_t , 1000 > notificationTime; // Offset: 0xBC

    // how long to delay between showing an identical notification
    idTypesafeTime < int , millisecondUnique_t , 1000 > notificationDelayTime; // Offset: 0xC0

    // how long to delay between showing an identical notification
    idTypesafeTime < int , millisecondUnique_t , 1000 > notificationIgnoreDelayTime; // Offset: 0xC4

    // root widget to use for this notification.
    idStr rootWidget; // Offset: 0xC8

    // animation widget's inside the root widget to use for this notification.
    idList < idStr , TAG_IDLIST , false > animationWidget; // Offset: 0xF8

    // animation name to trigger when showing (in lieu of the usual "rollOn"), if set
    idStr animationName; // Offset: 0x110

    // Flag to mark this notification as a timer, in this case 'notificationTime' is ignored and the timer duration is used.
    bool isTimer; // Offset: 0x140

    // Only used when 'isTimer' is also true. Will hide the notification early if 'notificationTime' is less than the timer duration.
    bool hideTimerEarly; // Offset: 0x141

    // Flag to mark this notification to go into a list that displays multiple of the same notification at once (tickers).
    bool goesInList; // Offset: 0x142

    // Flag to inhibit the player during the notification
    bool inhibitPlayer; // Offset: 0x143

    // For special notifications that need an icon repositioned.
    idDeclNotification::iconAlignment_t iconAlignment; // Offset: 0x144

    // icon for the notification
    idMaterial2* icon; // Offset: 0x148

    // color for the notification icon (if unspecified, the icon will not be colored)
    swfNamedColors_t iconColor; // Offset: 0x150

    // Support for having different sprite paths for the icon
    idList < idDeclNotification::notificationIconInfo_t , TAG_IDLIST , false > iconDataList; // Offset: 0x158

    // header text for the notification
    idStrId headerText; // Offset: 0x170

    // sub text for the notification
    idStrId subText; // Offset: 0x174

    // color for header text
    swfNamedColors_t headerTextColor; // Offset: 0x178

    // color for subtext
    swfNamedColors_t subTextColor; // Offset: 0x17C

    // text to show on the CTA
    idStrId dossierCTAText; // Offset: 0x180

    // color for "base" assets on the notification
    swfNamedColors_t baseColor; // Offset: 0x184

    // color for "gradient" assets on the notification
    swfNamedColors_t gradientColor; // Offset: 0x188

    // color for "secondary" assets on the notification
    swfNamedColors_t secondaryColor; // Offset: 0x18C

    // sound for the notification when first shown
    idSoundEvent* notificationSound; // Offset: 0x190

    // sound ID for the notification when first shown
    int notificationSoundId; // Offset: 0x198

    // whether the notification sound pauses when the game does (m_notificationSoundId must be >0 for this to work)
    bool notificationSoundPauseable; // Offset: 0x19C

    // sound for the notification when hidden (will not play if the notification is force hidden for another notification)
    idSoundEvent* notificationHideSound; // Offset: 0x1A0

    // If this is set to a valid cvar name, the notification will only show on the HUD if the cvar value is 1.
    idStr showCVar; // Offset: 0x1A8

    // Ignore the global "g_setting_hudNotifications" value and ONLY use the showCVar value. If showCVar is not set and this is true, always show the notification.
    bool showCVarIsExclusive; // Offset: 0x1D8

    // can we show this notification in PvP. Many notifications are disabled and this is Opt In.
    bool isPvPEnabled; // Offset: 0x1D9

    // indicates that this notification has separate styles for slayer & demon teams
    bool hasTeamStyles; // Offset: 0x1DA

}; // Size: 0x1E0
