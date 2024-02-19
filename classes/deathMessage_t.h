struct deathMessage_t
{
    deathMessageState_t state; // Offset: 0x0

    int time; // Offset: 0x4

    int respawnTime; // Offset: 0x8

    int attackerIndex; // Offset: 0xC

    idStr attackerName; // Offset: 0x10

    int victimIndex; // Offset: 0x40

    idStr victimName; // Offset: 0x48

    idDeclDamage* damageDef; // Offset: 0x78

    int damagePercent; // Offset: 0x80

    int attackerHealthPercent; // Offset: 0x84

    int attackerShieldPercent; // Offset: 0x88

    idStaticList < killAssistData_t , 12 , false , TAG_IDLIST > assists; // Offset: 0x90

    int killTypeMask; // Offset: 0x1C8

    // points awarded for this kill
    int points; // Offset: 0x1CC

    // xp awarded for this kill
    int xp; // Offset: 0x1D0

    bool isKilledByWorld; // Offset: 0x1D4

    bool isKilledByAI; // Offset: 0x1D5

    bool isSuicide; // Offset: 0x1D6

    bool isTeamKill; // Offset: 0x1D7

    bool isUpToDate; // Offset: 0x1D8

    int attackerTeam; // Offset: 0x1DC

    int victimTeam; // Offset: 0x1E0

    idStrId tickerStatusEffectImg; // Offset: 0x1E4

    attackerLoadoutData_t attackerLoadout; // Offset: 0x1E8

    int attackerPowerupId; // Offset: 0x208

}; // Size: 0x210
