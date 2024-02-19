struct idFocusAttack : idInventoryItem
{
    // tell us if we are currently active
    bool active; // Offset: 0x110

    bool playedExitSound; // Offset: 0x111

    // the player entity that carries the item
    idPlayer* playerEntity; // Offset: 0x118

}; // Size: 0x120
