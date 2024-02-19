struct idProp_BreakableLoot : idProp_Usable
{
    struct effectsDef_t
    {
        // after looting, this is the impulse dir applied to all the breakables
        idVec3 impulseDir; // Offset: 0x0

        // after looting, this is the impulse magnitude applied to all the breakables {{ units = kg * m / s }}
        float impulseMag; // Offset: 0xC

        // after looting, particle effect shown
        idDeclParticle* lootParticle; // Offset: 0x10

        // entities always shown always. If they are idBreakable-based entities, they are broken when looted and can be faded out with breakableFadeTime or individual settings within the breakable
        idList < const idDeclEntityDef * , TAG_IDLIST , false > parts; // Offset: 0x18

        // after looting, splinters are visual entities that are randomly spawned. if you want useable entities, use entitiesSpawnedOnBreak
        idList < const idDeclEntityDef * , TAG_IDLIST , false > splinters; // Offset: 0x30

        // the minimum # of splinters to spawn
        int minSplinters; // Offset: 0x48

        // the maximum # of splinters to spawn
        int maxSplinters; // Offset: 0x4C

        // sound to play when object breaks
        idSoundEvent* soundBreak; // Offset: 0x50

        // particle effect to be played until looted
        idDeclParticle* idleParticle; // Offset: 0x58

        // color of glowing highlight on renderModel until looted, after looting highlight is disabled
        highlightColor_t highlightColor; // Offset: 0x60

        // [s] for the breakables, time after using that the entire entity will start to fade
        float breakableFadeTime; // Offset: 0x64

        // [s] for the breakables, how many seconds to delay before removing prop when not fading
        float breakableFadeDelay; // Offset: 0x68

        // [s] time after using that the entire entity will start to fade
        float fadeTime; // Offset: 0x6C

        // [s] how many seconds to delay before removing prop when not fading
        float fadeDelay; // Offset: 0x70

    }; // Size: 0x78

    struct inventoryDef_t
    {
        // potential random loot that can be given, duplicates are not given, if you want duplicates, put more than one of the same type in the list
        idList < const idDeclInventory * , TAG_IDLIST , false > randomLootPool; // Offset: 0x0

        // amount of random loot given during loot, if >0, this number is randomized
        int randomLootQuantity; // Offset: 0x18

        // must have inventory item to use the prop
        idDeclInventory* requiredInvDecl; // Offset: 0x20

    }; // Size: 0x28

    struct idClipOverride
    {
        // physics contents value
        idContents contents; // Offset: 0x0

        // physics clip mask value
        idContents clipMask; // Offset: 0x4

    }; // Size: 0x8

    // effects definition
    idProp_BreakableLoot::effectsDef_t effectsDef; // Offset: 0x1B68

    // inventory definition
    idProp_BreakableLoot::inventoryDef_t inventoryDef; // Offset: 0x1BE0

    // settings for overriding collision contents
    idProp_BreakableLoot::idClipOverride clipOverride; // Offset: 0x1C08

    // extra items that will be spawned when looted
    idList < const idDeclEntityDef * , TAG_IDLIST , false > entitiesSpawnedOnBreak; // Offset: 0x1C10

    idList < idEntity * , TAG_IDLIST , false > spawnParts; // Offset: 0x1C28

    idList < idEntity * , TAG_IDLIST , false > spawnSplinters; // Offset: 0x1C40

    idList < idEntity * , TAG_IDLIST , false > spawnEntitiesOnBreak; // Offset: 0x1C58

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lootedTime; // Offset: 0x1C70

    // the inventory this prop is holding
    idInventoryCollection inventory; // Offset: 0x1C78

    idFadeHelper fade; // Offset: 0x21E0

}; // Size: 0x2200
