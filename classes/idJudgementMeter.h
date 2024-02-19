struct idJudgementMeter : idPowerStrikeMeter
{
    enum canActivateWhen_t : int
    {
        METER_FULL = 0,
        ATTACK_POSSIBLE = 1,
        METER_CHARGE = 2
    };

    // color to use when charged and crucible can be used
    idVec4 debugBarColorCharged; // Offset: 0x1C8

    // if > 0 then decay progresses over this many kills and time-based decay is ignored
    int decayKillPips; // Offset: 0x1D8

    // per demon kill costs
    idList < aiMonsterValue_t , TAG_IDLIST , false > decayKillDemonCosts; // Offset: 0x1E0

    // true to use decayKillDemonCosts costs instead of the decayKillPips
    bool useDecayKillDemonCosts; // Offset: 0x1F8

    // describes when the crucible can be activated
    idJudgementMeter::canActivateWhen_t canActivateWhen; // Offset: 0x1FC

    // if deactivated while there is still meter left it can be reactivated
    bool canReactivate; // Offset: 0x200

    bool dontRemoveEffectAfterReloading; // Offset: 0x201

    // if true, then regen only happens while meter is active
    bool regenRequiresActive; // Offset: 0x202

    // if true, then regen only happens while meter is inactive
    bool regenRequiresInactive; // Offset: 0x203

    bool hudElementShown; // Offset: 0x204

}; // Size: 0x208
