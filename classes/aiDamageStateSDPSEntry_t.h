struct aiDamageStateSDPSEntry_t
{
    // Decls that will override this SDPS entry if the override's activation key is activated
    idList < const idDeclAIDamageStateOverride * , TAG_IDLIST , false > overrideDecls; // Offset: 0x0

    // the decl this table is associated with
    idList < const idDeclDamage * , TAG_IDLIST , false > damageDecls; // Offset: 0x18

    // monster type of attacker to filter this condition by
    aiMonsterType_t monsterTypes; // Offset: 0x30

    // optional references to decls that list more damage decls
    idList < const idDeclAIDamageDeclCollection * , TAG_IDLIST , false > damageCollections; // Offset: 0x38

    // the decl this table is associated with
    idList < const idDeclDamage * , TAG_IDLIST , false > excludeDamageDecls; // Offset: 0x50

    // monster type of attacker to filter this condition by
    aiMonsterType_t excludeMonsterTypes; // Offset: 0x68

    // optional references to decls that list more damage decls
    idList < const idDeclAIDamageDeclCollection * , TAG_IDLIST , false > excludeDamageCollections; // Offset: 0x70

    // pain bucket to check
    painType_t bucketType; // Offset: 0x88

    // the total damage needed to trigger this reaction
    float totalDamageNeeded; // Offset: 0x8C

    // the total damage as a health fraction needed to trigger this reaction
    float totalHealthFractionNeeded; // Offset: 0x90

    // if AI is greater than this health fraction, reaction is invalid, unless there is a prerequisite state
    float prerequisiteHealthFraction; // Offset: 0x94

    // if nonzero, use this instead of what is on node
    idTypesafeTime < float , secondUnique_t , 1 > overrideMinReEnterSeconds; // Offset: 0x98

    // if true, makes it valid for armored body parts
    bool armored; // Offset: 0x9C

    // if true, makes it valid for armored and only armored body parts
    bool armored_only; // Offset: 0x9D

    // if true, any damage parms marked as DAMAGETYPE_SPLASH will be invalid
    bool noSplash; // Offset: 0x9E

}; // Size: 0xA0
