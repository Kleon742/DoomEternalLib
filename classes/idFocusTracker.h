struct idFocusTracker
{
    // {{ units = m }}
    float traceDistance; // Offset: 0x8

    idFocusTrace focusPointTrace; // Offset: 0x10

    idUserCmd usercmd; // Offset: 0xF0

    // focus entity we can use (such as a door)
    idManagedClassPtr < idEntity > focusUsableEntity; // Offset: 0x188

    // current entity from focus trace
    idManagedClassPtr < idEntity > focusEntity; // Offset: 0x1A8

    // A list of potential usable entities that can be added and removed by game code. Normal focus tracker code takes precedence.
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > potentialUsableEntities; // Offset: 0x1C8

    // id of cursor to show
    int cursorId; // Offset: 0x1E0

    // time when focus will be cleared
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > clearFocusTime; // Offset: 0x1E8

    // various flags that can be set for the focused entity (cleared on update)
    int focusedEntityFlags; // Offset: 0x1F0

    // cached trace model index for bounds traces
    int traceModelIndex; // Offset: 0x1F4

    // results of the focus trace
    idFocusTrace focusTrace; // Offset: 0x1F8

    // crosshair info for the currently focused entity
    idCrosshairInfo crosshairInfo; // Offset: 0x2D8

    // time when crosshair info will be cleared (used for player names)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > clearCrosshairTime; // Offset: 0x2E0

    // true if the player is looking at a friendly NPC
    bool overFriendly; // Offset: 0x2E8

}; // Size: 0x2F0
