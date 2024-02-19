struct idWeaponWheel_DebugEntry
{
    // When did they first press the button.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > buttonStartTime; // Offset: 0x0

    // When did they let go of the button.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > buttonEndTime; // Offset: 0x8

    // What selection did they make
    int selectionIndex; // Offset: 0x10

    // What frame did this happen on?
    int frameNumber; // Offset: 0x14

    // What was the Joystick axis at that time.
    idVec2 selectionAxis; // Offset: 0x18

    // Weapon Selected.
    idDeclWeapon* selectedWeapon; // Offset: 0x20

    // Did we just select last weapon?
    bool selectedLastWeapon; // Offset: 0x28

}; // Size: 0x30
