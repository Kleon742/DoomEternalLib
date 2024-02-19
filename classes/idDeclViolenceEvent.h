struct idDeclViolenceEvent : idGameDeclTypeInfo
{
    // Victim/Inflictor/Attacker Requirements. violence event id
    violenceEvents_t eventId; // Offset: 0x90

    // Event only valid if inflictor is in this list.
    idList < idCompiledDamageEntityInfo::idEntityType_t , TAG_IDLIST , false > validInflictors; // Offset: 0x98

    // Event only valid if Attacker is in this list.
    idList < idCompiledDamageEntityInfo::idEntityType_t , TAG_IDLIST , false > validAttackers; // Offset: 0xB0

    // Event only valid if Victim is in this list.
    idList < idCompiledDamageEntityInfo::idEntityType_t , TAG_IDLIST , false > validVictims; // Offset: 0xC8

    // which flags need to be on.
    idViolenceFrameFlags_t validFrameFlags; // Offset: 0xE0

    // Which Cheats need to be active for this to be valid.
    idList < idCheatCodeManager::idCheatCodesTypes_t , TAG_IDLIST , false > NeededCheats; // Offset: 0xE8

    // Which perks need to be active for this to be valid.
    idList < const idDeclPerk * , TAG_IDLIST , false > NeededPerks; // Offset: 0x100

    // Which GameMode is needed to be in.
    compiledDamage_Mode_t gameMode; // Offset: 0x118

    // Entity Info Requirements Event only valid if victim has these properties.
    idCompiledDamageEntityInfo victimInfo; // Offset: 0x120

    // Event only valid if inflictor has these properties.
    idCompiledDamageEntityInfo inflictorInfo; // Offset: 0x158

    // Event only valid if attacker has these properties.
    idCompiledDamageEntityInfo attackerInfo; // Offset: 0x190

    // Damage/Attack Requirements Event only valid if damage decl match is in this list.
    idList < const idDeclDamage * , TAG_IDLIST , false > damageDecls; // Offset: 0x1C8

    // Event only valid if the victim is causing the damage in this list.
    idList < const idDeclDamage * , TAG_IDLIST , false > victimDamageDecls; // Offset: 0x1E0

    // Event only valid if Damage Source is this.
    idDamageParms::damageSource_t validDamageSource; // Offset: 0x1F8

    // Event only valid if attack is this type.
    idCompiledDamageData::idAttackType_t attackType; // Offset: 0x200

    // Event only valid if this weapon damage type is used.
    idPlayerWeaponDamageType_t weaponDamageType; // Offset: 0x204

    // Event only valid if required flags are on
    damageScalarDamageFlags_t requiredDamageFlags; // Offset: 0x208

    // Event only valid if victim is of this monster type
    aiMonsterType_t requiredMonsterType; // Offset: 0x210

    // Event only valid if victim is of this player demon type
    demonType_t requiredPlayerDemonVictim; // Offset: 0x218

    // Event only valid if attacker is of this player demon type
    demonType_t requiredPlayerDemonAttacker; // Offset: 0x21C

    // Event only valid if number of required kills
    int numberOfRequiredKills; // Offset: 0x220

    // Event only valid if the number of required kills is off a single shot
    bool isMultiKill; // Offset: 0x224

    // Event only valid if the number of required kills is in a single deployment
    bool isDeployable; // Offset: 0x225

    // If set the stats clear on alt fire release
    bool oncePerAltFire; // Offset: 0x226

    // Event only valid if it happens during the window
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeframeMS; // Offset: 0x228

    // stat to increase if the event is found
    gameStat_t stat; // Offset: 0x22C

    // stat to increment by amount of damage victim has received.
    gameStat_t damageStat; // Offset: 0x230

    // Stat awarding will only be done for the attacker if true. To all involved if false. This is only checked for battlemode violence events to prevent two players from getting progress.
    bool onlyAwardToAttacker; // Offset: 0x234

}; // Size: 0x238
