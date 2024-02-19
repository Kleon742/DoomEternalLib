struct idHUDEvent_CombatStateUpdate
{
    enum combatStateFlags_t : int
    {
        COMBAT_STATE_IN_ENCOUNTER_FLAG = 1,
        COMBAT_STATE_FIRED_WEAPON_FLAG = 2
    };

    struct idCombatStateData_t
    {
        unsigned int combatStateFlags; // Offset: 0x0

    }; // Size: 0x4

    idHUDEvent_CombatStateUpdate::idCombatStateData_t info; // Offset: 0x0

}; // Size: 0x4
