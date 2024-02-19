struct idDeclHUDElement : idGameDeclTypeInfo
{
    struct idHudSWFInfo_t
    {
        enum hudElementPerspective_t : int
        {
            PERSPECTIVE_NONE = 0,
            PERSPECTIVE_LEFT_PLANE = 1,
            PERSPECTIVE_RIGHT_PLANE = 2,
            PERSPECTIVE_CENTER_PLANE = 3
        };

        // The SWF to use for this HUD Element.
        idDeclSWF* swf; // Offset: 0x0

        // Do we create a custom gui model or use Global.
        bool customGUIModel; // Offset: 0x8

        // The perspective plane this gui uses
        idDeclHUDElement::idHudSWFInfo_t::hudElementPerspective_t perspectiveGUI; // Offset: 0xC

        // The scale this GUI will use when shown the HUD perspective mode is off (HUD is fullscreen and flat)
        float nonPerspectiveScale; // Offset: 0x10

        // is this gui full screen?
        bool fullscreen; // Offset: 0x14

        // should the swf be a reference as opposed to a completely separate instance of the swf
        bool referencedGui; // Offset: 0x15

        // Tag to use from the player's helmet.
        idAtomicString helmetTag; // Offset: 0x18

        // Tag to use for the demon player.
        idAtomicString demonTag; // Offset: 0x20

        // scale of the swf.
        float swfScale; // Offset: 0x28

        // offset of the swf. ( from origin if no tag ) {{ units = m }}
        idVec3 swfOffset; // Offset: 0x2C

        // Set this to true if this element will pause the game.
        bool pauseGame; // Offset: 0x38

        // The hud element variant that this swf coresponds to
        int variant; // Offset: 0x3C

        // The optional custom material to use for this hud elements render model
        idMaterial2* customMaterial; // Offset: 0x40

        // do we depth test this element.
        bool depthTest; // Offset: 0x48

        // does this unlink for hide Hud.
        bool neverUnlinkForHide; // Offset: 0x49

        // Does this element support fade
        bool supportsFade; // Offset: 0x4A

        // Set this to true if this element will always run at normal speed even if gametime slows or pauses.
        bool forceRealtimeUpdates; // Offset: 0x4B

    }; // Size: 0x50

    struct fadeParms_t
    {
        // how long we take to fade.
        float duration; // Offset: 0x0

        // Color to fade from.
        idVec4 startFade; // Offset: 0x4

        // Color to fade to
        idVec4 endFade; // Offset: 0x14

    }; // Size: 0x24

    // information on the SWF in use.
    idDeclHUDElement::idHudSWFInfo_t swfInfo; // Offset: 0x90

    // What element functionality class to use.
    idTypeInfoPtr < idHUDElement > hudClass; // Offset: 0xE0

    // Is this element active on creation.
    bool activeOnCreation; // Offset: 0xE8

    // If true, deactivate will just hide the element and free render model info. If false, deactivate will also deactivate and free the SWF.
    bool softDeactivate; // Offset: 0xE9

    // HUD Event IDs
    idList < hudEventID_t , TAG_IDLIST , false > hudEventIDs; // Offset: 0xF0

    // Hud Element only available with these flags.
    hudElementFlags_t availableFlags; // Offset: 0x108

    // Hud Element not available with these flags on.
    hudElementFlags_t notAvailableFlags; // Offset: 0x10C

    // Only activate this HUD element for this gametype. For backwards-compatibility, if this is set to "None", the HUD element will be loaded for all gametypes.
    gameType_t restrictToGameType; // Offset: 0x110

    // If true, don't activate/deactive with HUD mode changes
    bool ignoreHudMode; // Offset: 0x114

    // Hud element Animation time
    idList < idTypesafeTime < int , millisecondUnique_t , 1000 > , TAG_IDLIST , false > animTime; // Offset: 0x118

    // If true, this element will show even when scoped on a weapon
    bool showInScope; // Offset: 0x130

    // Wheel Specific Data. Wheel Data.
    idSWFWidget_WheelData wheelData; // Offset: 0x138

    // List of progression categories
    idList < idSWFWidget_ProgressionCategoryData , TAG_IDLIST , false > progressionCategoryData; // Offset: 0x1C0

    // Child elements
    idList < const idDeclHUDElement * , TAG_IDLIST , false > childElements; // Offset: 0x1D8

    // Menu Specific Data. Do we hide the hands?
    bool hideHands; // Offset: 0x1F0

    // Depth of Field Parms.
    idVec4 dof; // Offset: 0x1F4

    // Screen fade parms.
    idDeclHUDElement::fadeParms_t fadeParms; // Offset: 0x204

    // If true, images the swf uses are loaded and unloaded with the swf instead of as needed
    bool cacheImages; // Offset: 0x228

    // Element anchor The UI anchor decl to use on this element
    idDeclUIAnchor* uiAnchor; // Offset: 0x230

    // The render order. Lower values will be rendered last (e.g. priority 1 will render after priority 10). This only affects HUD elements and notifications, not menus.
    int renderDepthSortBias; // Offset: 0x238

}; // Size: 0x240
