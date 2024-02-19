struct upgradeDataValue_t
{
    // the bool value used by this modifier
    bool valueBool; // Offset: 0x0

    // the int value used by this modifier
    int valueInt; // Offset: 0x4

    // the float value used by this modifier
    float valueFloat; // Offset: 0x8

    // a second float value used by this modifier
    float valueFloat2; // Offset: 0xC

    // the sound to play
    idSoundEvent* valueSound; // Offset: 0x10

    // the FX condition used by this modifier
    fxCondition_t valueFXCondition; // Offset: 0x18

    // anim handle, used for additive animations
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > valueAnim; // Offset: 0x1C

    // the Decl used by this modifier
    idGameDeclTypeInfo* valueDecl; // Offset: 0x20

    // FX decl (needs to be separate because it's only an idDeclTypeInfo and not an idGameDeclTypeInfo)
    idDeclFX* valueDeclFX; // Offset: 0x28

    // the table to use for this value;
    idDeclTable* valueTable; // Offset: 0x30

    // the impact effect to use for this value;
    idDeclImpactEffect* valueImpactEffect; // Offset: 0x38

    // the charge property referred to by this modifier
    idDeclWeapon::chargeProperty_t valueChargeProperty; // Offset: 0x40

    // array of float values for this modifier
    idList < int , TAG_IDLIST , false > valueIntArray; // Offset: 0x48

    // trigger mode to use for this modifier
    weaponTriggerMode_t valueWeaponTriggerMode; // Offset: 0x60

    // zoom mode
    idDeclWeapon::zoomMode_t valueWeaponZoomMode; // Offset: 0x64

    // burst mode
    burstMode_t valueWeaponBurstMode; // Offset: 0x68

    // the string value used by this modifier
    idAtomicString valueString; // Offset: 0x70

}; // Size: 0x78
