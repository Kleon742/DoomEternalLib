struct idAbility_Ruin : idArgentumAbility
{
    enum state_t : int
    {
        NO_STATE = -1,
        INITIALIZE = 0,
        IDLE = 1,
        DROP_TO_GROUND = 2,
        SLAM_WEAPON = 3,
        HIGHLIGHT_AREA = 4,
        ACTIVATE_RUIN = 5,
        MAX_STATES = 6
    };

    enum transitions_t : int
    {
        NO_TRANSITION = -1,
        INITIALIZE_to_IDLE = 0,
        IDLE_to_DROP_TO_GROUND = 1,
        IDLE_to_SLAM_WEAPON = 2,
        DROP_TO_GROUND_to_SLAM_WEAPON = 3,
        SLAM_WEAPON_to_HIGHLIGHT_AREA = 4,
        HIGHLIGHT_AREA_to_ACTIVATE_RUIN = 5,
        ACTIVATE_RUIN_to_IDLE = 6,
        MAX_TRANSITIONS = 7
    };

    typedef idInternalFsm < idAbility_Ruin , idAbility_Ruin::state_t , idAbility_Ruin::transitions_t > idInternalFSM;

    // internal state machine for the object
    idInternalFsm < idAbility_Ruin , idAbility_Ruin::state_t , idAbility_Ruin::transitions_t >* internalFSM; // Offset: 0x140

    // whether we are active or not
    bool active; // Offset: 0x148

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > retriggerTime; // Offset: 0x150

    bool activateDamage; // Offset: 0x158

    bool highlightArea; // Offset: 0x159

    // {{ units = m }}
    idVec3 regionStart; // Offset: 0x15C

    // {{ units = m }}
    idVec3 regionLeft; // Offset: 0x168

    // {{ units = m }}
    idVec3 regionRight; // Offset: 0x174

    idDeclAbility_Ruin* ruinDecl; // Offset: 0x180

    idHavokGatherQueryId boundsQuery; // Offset: 0x188

}; // Size: 0x190
