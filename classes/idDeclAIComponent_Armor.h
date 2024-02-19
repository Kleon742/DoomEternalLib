struct idDeclAIComponent_Armor : idDeclAIComponent
{
    struct damageScale_t
    {
        // damages to match ( logical OR )
        idDeclAIDamageDeclCollection* declCollection; // Offset: 0x0

        // how much to scale this damage
        float scale; // Offset: 0x8

        // scale to apply to splash damage dealt to non-armored hit groups when armored hit group is directly hit by a projectile
        float splashDamageScale; // Offset: 0xC

    }; // Size: 0x10

    // hit groups protected by armor
    idList < idAtomicString , TAG_IDLIST , false > hitGroups; // Offset: 0x98

    // gore wound hit groups that are covered by armor (these wounds will be disabled when armored)
    idList < idAtomicString , TAG_IDLIST , false > woundHitGroups; // Offset: 0xB0

    // scale incoming damage by this much, when decls are matched
    idList < idDeclAIComponent_Armor::damageScale_t , TAG_IDLIST , false > damageScales; // Offset: 0xC8

    // special case damage decls where we only apply the damage scales if the armor is the only thing hit by the decl
    idList < const idDeclAIDamageDeclCollection * , TAG_IDLIST , false > damageDeclsOnlyScaleIfOnlyArmorHit; // Offset: 0xE0

    // special case damage decls where we only apply the damage scales if the armor is the closest body part to the origin of the damage
    idList < const idDeclAIDamageDeclCollection * , TAG_IDLIST , false > damageDeclsOnlyScaleIfArmorClosestToDamageOrigin; // Offset: 0xF8

    // damage decls in this list are always treated as splash damage
    idList < idDeclDamage * , TAG_IDLIST , false > splashDamageDecls; // Offset: 0x110

}; // Size: 0x128
