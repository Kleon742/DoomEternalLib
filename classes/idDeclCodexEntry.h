struct idDeclCodexEntry : idGameDeclTypeInfo
{
    struct codexTip_t
    {
        // Tip name.
        idStrId displayName; // Offset: 0x0

        // Tip description.
        idStrId description; // Offset: 0x4

        // Icon to display next to the tip name.
        idMaterial2* icon; // Offset: 0x8

        // Color of the icon.
        swfNamedColors_t color; // Offset: 0x10

    }; // Size: 0x18

    // Entry Does not select, but is just for organization
    bool categoryEntry; // Offset: 0x90

    // Which icon to display on the category tab bar (top-level only).
    idMaterial2* categoryIcon; // Offset: 0x98

    // The display style to use when showing this codex entry in the dossier.
    codexDisplayStyle_t displayStyle; // Offset: 0xA0

    // If true, enables the "View Image" option to view full image for this entry.
    bool canShowFullImage; // Offset: 0xA4

    // The display name of the codex entry in the details header (right side of dossier).
    idStrId headerName; // Offset: 0xA8

    // The display name of the codex entry in the list view (left side of dossier).
    idStrId listName; // Offset: 0xAC

    // The description of the codex entry when UNDiscovered.
    idStrId undiscoveredDescription; // Offset: 0xB0

    // The description of the codex entry when Discovered.
    idStrId discoveredDescription; // Offset: 0xB4

    // Which icon to display on the list view when unread.
    idMaterial2* unreadIcon; // Offset: 0xB8

    // Which icon to display on the list view when undiscovered.
    idMaterial2* undiscoveredIcon; // Offset: 0xC0

    // The image to display, if any.
    idMaterial2* image; // Offset: 0xC8

    // The fullscreen image to display, if any. If absent, 'image' is used instead.
    idMaterial2* imageFullscreen; // Offset: 0xD0

    // The video to display, if any.
    idMaterial2* video; // Offset: 0xD8

    // The Model to display, if any.
    idDeclMD6* model; // Offset: 0xE0

    // what animation to play if any
    idList < idAnimAliasRef , TAG_IDLIST , false > animations; // Offset: 0xE8

    // scale of the model.
    idVec3 modelScale; // Offset: 0x100

    // offset of the model.
    idVec3 modelOffset; // Offset: 0x10C

    // bindset used if actions are present in tutorial
    bindSet_t bindset; // Offset: 0x118

    // 'Tips' to display for this codex entry (e.g. monster weaknesses)
    idList < idDeclCodexEntry::codexTip_t , TAG_IDLIST , false > tips; // Offset: 0x120

    // Also give these entries.
    idList < const idDeclCodexEntry * , TAG_IDLIST , false > AdditionalCodexEntries; // Offset: 0x138

    // the list of stats to increment on codex entry
    idList < statManipulation_t , TAG_IDLIST , false > stats; // Offset: 0x150

    // Should a notification be shown when this codex entry is obtained?
    bool showNotification; // Offset: 0x168

    // If this entry has a tutorial, should we play a notification in place of the tutorial when tutorials are turned off?
    bool showNotificationIfTutorialsOff; // Offset: 0x169

    // Image to put in the HUD notification
    idMaterial2* notificationImage; // Offset: 0x170

    // tutorial to show when we get added the first time.
    idDeclTutorialEvent* tutorial; // Offset: 0x178

    // hide this entry from the codex entirely when undiscovered.
    bool hideWhenUndiscovered; // Offset: 0x180

    // flag to set as the desired codex entry to show when opening directly to the codex page
    bool setDesiredCodexWhenAdded; // Offset: 0x181

}; // Size: 0x188
