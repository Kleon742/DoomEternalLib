struct idPowerStrikeMeter : idPlayerMeter
{
    struct bonuses_t
    {
        // value increase for damaging an AI
        idList < aiMonsterValue_t , TAG_IDLIST , false > damage; // Offset: 0x0

        // per damage-decl scales to apply to m_damage list vals
        idList < gameDeclValue_t , TAG_IDLIST , false > damageDeclScales; // Offset: 0x18

        // value increase for causing a gore wound on an AI
        idList < aiMonsterValue_t , TAG_IDLIST , false > goreWound; // Offset: 0x30

        // value increase for killing (but not glory-killing) an AI
        idList < aiMonsterValue_t , TAG_IDLIST , false > kill; // Offset: 0x48

        // value increase for glory-killing an AI
        idList < aiMonsterValue_t , TAG_IDLIST , false > gloryKill; // Offset: 0x60

    }; // Size: 0x78

    struct activated_t
    {
        // value reduction for each melee strike
        float meleeCost; // Offset: 0x0

    }; // Size: 0x4

    // override this and play our own level up sounds  damage/kill bonuses bonuses for doing things
    idPowerStrikeMeter::bonuses_t bonuses; // Offset: 0xA0

    // debug bar to draw
    debugBar_t debugBar; // Offset: 0x118

    // activated behavior activated parms
    idPowerStrikeMeter::activated_t activated; // Offset: 0x158

    // active or not
    bool active; // Offset: 0x15C

    // tracked to be able to space sounds
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastChargeLevelSoundTime; // Offset: 0x160

    // list of damaged this frame
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > damagedEnts; // Offset: 0x168

    // list of gore wounded this frame
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > goreWoundedEnts; // Offset: 0x180

    // list of killed this frame
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > killedEnts; // Offset: 0x198

    // list of glory killed this frame
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > gloryKilledEnts; // Offset: 0x1B0

}; // Size: 0x1C8
