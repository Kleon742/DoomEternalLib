struct idAICondition_Shared_DamagedTarget : idAICondition
{
    struct damageTrackInfo_t
    {
        // how much damage to look for
        float damagePerHit; // Offset: 0x0

        // how much damage to look for
        float damageTotal; // Offset: 0x4

        // how far in the past to look
        idTypesafeTime < float , secondUnique_t , 1 > secondsInPast; // Offset: 0x8

        // must have this many hits
        int totalHits; // Offset: 0xC

        // required damage type, if not NULL
        idDeclDamage* damageDecl; // Offset: 0x10

    }; // Size: 0x18

    // list of damages that are required
    idList < idAICondition_Shared_DamagedTarget::damageTrackInfo_t , TAG_IDLIST , false > requiredDamages; // Offset: 0x18

}; // Size: 0x30
