struct idEncounterState
{
    enum groupStates_t : int
    {
        DEFAULT = 0,
        NOTHING = 1,
        COMBAT = 2,
        AMBUSH = 3,
        SEARCH = 4,
        FLEE = 5
    };

    // state for this encounter state
    idEncounterState::groupStates_t state; // Offset: 0x0

    // name of the target for this encounter state( for instance, the ambush target )
    idManagedClassPtr < idEntity > target; // Offset: 0x8

}; // Size: 0x28
