struct idInteractable_GoreBud : idInteractable
{
    // Melee damage kills this gore bud
    bool respondToMelee; // Offset: 0x2B50

    // Any damage kills this gore bud
    bool respondToAllDamage; // Offset: 0x2B51

    // Use to kill
    bool respondToUse; // Offset: 0x2B52

    // This gore bud will regenerate
    bool canRegenerate; // Offset: 0x2B53

    // How long to regenerate
    idTypesafeTime < int , millisecondUnique_t , 1000 > regenerationTimeMS; // Offset: 0x2B54

    // When successfully struck / shot / will activate these entities
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > OnStruckByPlayer; // Offset: 0x2B58

    // When regenerated will deactivate these entities
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > OnRegenerate; // Offset: 0x2B70

    // Activate these when I'm dead ( Parent nest has been interacted with )
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > OnDead; // Offset: 0x2B88

    bool allowNestInteraction; // Offset: 0x2BA0

    bool regenerating; // Offset: 0x2BA1

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > regenerateEndTime; // Offset: 0x2BA8

}; // Size: 0x2BB0
