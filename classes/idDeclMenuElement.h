struct idDeclMenuElement : idGameDeclTypeInfo
{
    struct idSWFInfo_t
    {
        // The SWF to use for this element.
        idDeclSWF* swf; // Offset: 0x0

        // If true a single reference SWF used by multiple elements, if false a new SWF object is created just for this element.
        bool referencedSWF; // Offset: 0x8

    }; // Size: 0x10

    struct menuElementGameInfo_t
    {
        // Indicates whether or not to move the camera on scene entry
        bool useCameraTransition; // Offset: 0x0

        // position of camera
        idVec3 cameraPos; // Offset: 0x4

        // angle of camera
        idAngles cameraAngle; // Offset: 0x10

        // entity that describes camera placement
        idStr cameraPlacement; // Offset: 0x20

        // time (in ms) camera will take to move to this position
        idTypesafeTime < int , millisecondUnique_t , 1000 > lerpTimeMS; // Offset: 0x50

        // names of entities in map to activate
        idList < idStr , TAG_IDLIST , false > targetEntityNames; // Offset: 0x58

    }; // Size: 0x70

    // Information on the SWF in use.
    idDeclMenuElement::idSWFInfo_t swfInfo; // Offset: 0x90

    // What element functionality class to use.
    idTypeInfoPtr < idMenuElement > class; // Offset: 0xA0

    // The display name to use.
    idStrId displayName; // Offset: 0xA8

    // The idea is that each menu element decl will specify any world objects that should be activated when this menu is shown. E.g. entity animations, VFX, sounds, etc. camera info, and list of entities to activate on show
    idDeclMenuElement::menuElementGameInfo_t gameInfo; // Offset: 0xB0

    // Child elements that are part of this menu element.
    idList < const idDeclMenuElement * , TAG_IDLIST , false > childElements; // Offset: 0x120

    // List of progression categories (campaign menu screen)
    idList < idSWFWidget_ProgressionCategoryData , TAG_IDLIST , false > progressionCategoryData; // Offset: 0x138

    // extra decl that a menu might need
    idGameDeclTypeInfo* extraDecl; // Offset: 0x150

    // ui data
    idDeclUIDataGroup* uiDataGroup; // Offset: 0x158

    // Icon to use for unknown items
    idMaterial2* unknownItemIcon; // Offset: 0x160

    // stat to gate the menu on
    gameStat_t gatedStat; // Offset: 0x168

    // The UI anchor decl to use on this element
    idDeclUIAnchor* uiAnchor; // Offset: 0x170

    // Wheel Data.
    idSWFWidget_WheelData wheelData; // Offset: 0x178

    // List of icons
    idList < menuIcon_t , TAG_IDLIST , false > iconList; // Offset: 0x200

    // Menu Animation times
    idList < idTypesafeTime < int , millisecondUnique_t , 1000 > , TAG_IDLIST , false > animTime; // Offset: 0x218

    // Menu Notifications
    idList < const idDeclNotification * , TAG_IDLIST , false > notifications; // Offset: 0x230

    // If true, images the swf uses are loaded and unloaded with the swf instead of as needed
    bool cacheImages; // Offset: 0x248

    // The position the overlay's player badge should be shown while this screen is active
    menuPlayerBadgePosition_t playerBadgePosition; // Offset: 0x24C

    // popups to show when this menu element is shown
    idList < const idDeclLiveTile * , TAG_IDLIST , false > autoPopups; // Offset: 0x250

}; // Size: 0x268
