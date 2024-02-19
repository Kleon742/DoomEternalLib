struct idTarget_Perk : idTarget
{
    enum perkAction_t : int
    {
        MOD_GIVE = 0,
        MOD_ACTIVATE = 1,
        MOD_DEACTIVATE = 2
    };

    // List of perks to give, activate, deactivate.
    idList < const idDeclPerk * , TAG_IDLIST , false > perkList; // Offset: 0xB88

    // What operation to do on the perk list.
    idTarget_Perk::perkAction_t perkAction; // Offset: 0xBA0

}; // Size: 0xBA8
