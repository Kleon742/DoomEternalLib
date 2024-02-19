struct idPerkComponent : idClass
{
    struct activePerkInfo_t
    {
        idDeclPerk* activePerk; // Offset: 0x0

        int numTimesUsed; // Offset: 0x8

    }; // Size: 0x10

    struct pendingPerkMsg_t
    {
        idManagedClassPtr < idEntity > activator; // Offset: 0x0

        idDeclPerk* perk; // Offset: 0x20

        bool activated; // Offset: 0x28

    }; // Size: 0x30

    idList < idPerkComponent::pendingPerkMsg_t , TAG_IDLIST , false > pendingPerkMsgs; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastPerkMsgTime; // Offset: 0x28

    idManagedClassPtr < idActor > owner; // Offset: 0x30

    // This is the list of perks the player has found so far.
    idList < const idDeclPerk * , TAG_IDLIST , false > availablePerks; // Offset: 0x50

    // This is the list of perks that are currently activated. You cannot activate a perk that is not in the available list.
    idList < idPerkComponent::activePerkInfo_t , TAG_IDLIST , false > activePerks; // Offset: 0x68

}; // Size: 0x80
