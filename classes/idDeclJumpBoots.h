struct idDeclJumpBoots : idDeclInventory
{
    // approximate height the player can jump {{ units = m }}
    float doubleJumpHeight; // Offset: 0x3F8

    // current speed is scaled by this amount
    float doubleJumpSpeedScale; // Offset: 0x3FC

    // air english ability is scaled by this amount
    float doubleJumpAirEnglishScale; // Offset: 0x400

    // offset in MS from the start of the initial jump until the start of the double jump window
    idTypesafeTime < int , millisecondUnique_t , 1000 > doubleJumpWindowOffset; // Offset: 0x404

    // duration in MS of the double jump window
    idTypesafeTime < int , millisecondUnique_t , 1000 > doubleJumpWindowDuration; // Offset: 0x408

    // the view pitch change during the double jump
    float doubleJumpViewPitchChange; // Offset: 0x40C

    // how long the view pitch variation takes
    idTypesafeTime < int , millisecondUnique_t , 1000 > doubleJumpViewPitchDuration; // Offset: 0x410

}; // Size: 0x418
