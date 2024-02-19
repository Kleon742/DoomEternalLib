struct idDeclOnlinePerk : idGameDeclTypeInfo
{
    // Increases boost by percentage
    float boostUpModifier; // Offset: 0x90

    // Increases armor by percentage
    float duraBumpModifier; // Offset: 0x94

    // Increases jump force by percentage
    float jumpManModifier; // Offset: 0x98

    // Increases max ammo count by percentage
    float overAmmoModifier; // Offset: 0x9C

    // Increases time to get locked on by percentage
    float lockJackModifier; // Offset: 0xA0

    // Increases fire rate by percentage
    float fasterFasterModifier; // Offset: 0xA4

    // Decreases time to obtain lock by percentage
    float theSnapperModifier; // Offset: 0xA8

    // Increases loadout count by number
    int overLoadModifier; // Offset: 0xAC

}; // Size: 0xB0
