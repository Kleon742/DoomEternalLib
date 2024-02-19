struct idBarricade : idBloatedEntity
{
    struct ribbondata_t
    {
        // {{ units = m }}
        idVec3 start; // Offset: 0x0

        // {{ units = m }}
        idVec3 end; // Offset: 0xC

        idMat3 startAxis; // Offset: 0x18

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x40

        idList < idRibbon2 , TAG_IDLIST , false > ribbons; // Offset: 0x48

        idManagedClassPtr < idSplinePath > ribbonSpline; // Offset: 0x60

    }; // Size: 0x80

    struct ribbonSplineData_t
    {
        // Spline path for the ribbon.
        idDeclEntityDef* ribbonSplinePath; // Offset: 0x0

        // Ribbon to use for the barricade.
        idList < const idDeclRibbon2 * , TAG_IDLIST , false > ribbonEffects; // Offset: 0x8

        // Number of spline Samples.
        int ribbonSamples; // Offset: 0x20

    }; // Size: 0x28

    struct lifeData_t
    {
        // How much life this barricade has.
        idSimpleHealth lifeComponent; // Offset: 0x0

        // Does the damage we deal also hurt us?
        bool damageRemovesLife; // Offset: 0x130

    }; // Size: 0x138

    // Ribbon Properties. Ribbon Data.
    idBarricade::ribbonSplineData_t ribbonSplineData; // Offset: 0xB88

    // Maximum Height of the barricade. {{ units = m }}
    float maxHeight; // Offset: 0xBB0

    // Minimum Height of the barricade. ( How far off the floor ) {{ units = m }}
    float minHeight; // Offset: 0xBB4

    // Maximum Length of the Barricade. {{ units = m }}
    float maxLength; // Offset: 0xBB8

    // Call Activate on spawn.
    bool activateOnSpawn; // Offset: 0xBBC

    // Damage properties.
    idDeclDamage* damageDecl; // Offset: 0xBC0

    // Life And Death properties.
    idBarricade::lifeData_t lifeData; // Offset: 0xBC8

    idStaticList < idBarricade::ribbondata_t , 2 , false , TAG_IDLIST > ribbons; // Offset: 0xD00

    idVec3 surfaceNormal; // Offset: 0xE18

}; // Size: 0xE28
