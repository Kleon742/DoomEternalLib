struct aiDamageStateParms_t
{
    idDeclDamage* damageDecl; // Offset: 0x0

    bool armored; // Offset: 0x8

    painType_t currentReaction; // Offset: 0xC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastReactionTime; // Offset: 0x10

    idArray < float , 22 >* damagesDone; // Offset: 0x18

    float totalActorHealth; // Offset: 0x20

    float currentTotalHealthFraction; // Offset: 0x24

    float radiusPercentage; // Offset: 0x28

    idEntity* attacker; // Offset: 0x30

    SDPSReaction_t* outReaction; // Offset: 0x38

    idTypesafeTime < float , secondUnique_t , 1 > overrideMinReEnterSeconds; // Offset: 0x40

}; // Size: 0x48
