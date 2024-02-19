struct idHUD_HealthInfo : idHUDElement
{
    struct ComponentDescriptor
    {
        float maxValue; // Offset: 0x0

        float previousValue; // Offset: 0x4

        float currentValue; // Offset: 0x8

        float warningLevel; // Offset: 0xC

        float changeValue; // Offset: 0x10

        float fillRateSpeed; // Offset: 0x14

        bool manualFillControl; // Offset: 0x18

        bool isLowHealthState; // Offset: 0x19

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTime; // Offset: 0x20

        idSWFCachedSpriteInstance componentSpr; // Offset: 0x28

        idSWFCachedSpriteInstance fillBarSpr; // Offset: 0x58

        idSWFCachedSpriteInstance fillPulseSpr; // Offset: 0x88

        idSWFCachedSpriteInstance addAmountPopupSpr; // Offset: 0xB8

        idSWFCachedSpriteInstance infoSpr; // Offset: 0xE8

        idSWFCachedSpriteInstance infoPulseSpr; // Offset: 0x118

        idSWFCachedSpriteInstance backSpr; // Offset: 0x148

        idSWFCachedSpriteInstance backPulseSpr; // Offset: 0x178

        idSWFCachedSpriteInstance backIconSpr; // Offset: 0x1A8

        idSWFTextInstance* infoTxt; // Offset: 0x1D8

        idSWFTextInstance* infoPulseTxt; // Offset: 0x1E0

    }; // Size: 0x1E8

    // Health store off.
    idHUD_HealthInfo::ComponentDescriptor healthDesc; // Offset: 0xF8

    idHUD_HealthInfo::ComponentDescriptor armorDesc; // Offset: 0x2E0

    idHUD_HealthInfo::ComponentDescriptor radShieldDesc; // Offset: 0x4C8

    idHUD_HealthInfo::ComponentDescriptor oxygenDesc; // Offset: 0x6B0

    idSWFCachedSpriteInstance mainSpr; // Offset: 0x898

    idSWFCachedSpriteInstance topAdornmentSpr; // Offset: 0x8C8

    idSWFCachedSpriteInstance bottomAdornmentSpr; // Offset: 0x8F8

    idSWFCachedSpriteInstance sentinelArmorSpr; // Offset: 0x928

    // Flag for when we have to heal the normal health before showing the overhealth anim
    bool waitForOverflowAnimation; // Offset: 0x958

    // The the radiation suit equipped for this player
    bool radShieldEquipped; // Offset: 0x959

    // Is the Radiation suit actively blocking damage
    bool radShieldActive; // Offset: 0x95A

    // The the oxygen suit equipped for this player
    bool oxygenEquipped; // Offset: 0x95B

    // Is the oxygen suit actively blocking damage
    bool oxygenActive; // Offset: 0x95C

    // Does the player have the ability to dash and see it on the UI
    bool dashUnlockedAndVisible; // Offset: 0x95D

    // Does the player have the ability to use blood punch and see it on the UI
    bool bloodPunchUnlockedAndVisible; // Offset: 0x95E

    bool sentinelArmorActive; // Offset: 0x95F

}; // Size: 0x960
