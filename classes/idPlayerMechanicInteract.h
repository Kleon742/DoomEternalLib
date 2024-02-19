struct idPlayerMechanicInteract : idPlayerMechanic
{
    enum interactState_t : int
    {
        NO_STATE = -1,
        INTERACT_STATE_DORMANT = 0,
        INTERACT_STATE_ACTIVE = 1,
        MAX_STATES = 2
    };

    enum interactStateTransition_t : int
    {
        NO_TRANSITION = -1,
        INTERACT_TRANSITION_START = 0,
        INTERACT_TRANSITION_RESET = 1,
        MAX_TRANSITIONS = 2
    };

    struct interactAnimData_t
    {
        struct interactAnimDataByType_t
        {
            // type
            playerMechanicInteractType_t type; // Offset: 0x0

            // anim web anim index
            int animIndex; // Offset: 0x4

            // out anim index
            int outroAnimIndex; // Offset: 0x8

        }; // Size: 0xC

        struct idSort_InteractAnimDataByType : idSort_Quick < idPlayerMechanicInteract::interactAnimData_t::interactAnimDataByType_t , idPlayerMechanicInteract::interactAnimData_t::idSort_InteractAnimDataByType >
        {
        }; // Size: 0x8

        // anim data by type
        idList < idPlayerMechanicInteract::interactAnimData_t::interactAnimDataByType_t , TAG_IDLIST , false > interactAnimDatas; // Offset: 0x0

        // fallback anim index
        int defaultAnimIndex; // Offset: 0x18

        // fallback outro anim index
        int defaultOutroAnimIndex; // Offset: 0x1C

    }; // Size: 0x20

    typedef idInternalFsm < idPlayerMechanicInteract , idPlayerMechanicInteract::interactState_t , idPlayerMechanicInteract::interactStateTransition_t > idInteractFSM;

    idInternalFsm < idPlayerMechanicInteract , idPlayerMechanicInteract::interactState_t , idPlayerMechanicInteract::interactStateTransition_t >* interactFSM; // Offset: 0x28

    playerMechanicInteractType_t interactType; // Offset: 0x30

    idVec3 targetInteractPosition; // Offset: 0x34

    idMat3 targetOrientation; // Offset: 0x40

    bool startedFromScene; // Offset: 0x64

    // animation data
    idPlayerMechanicInteract::interactAnimData_t animData; // Offset: 0x68

    // status effect to give during interaction
    idDeclStatusEffect* statusEffect; // Offset: 0x88

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > uniqueTimeStamp; // Offset: 0x90

    playerMechanicInteractType_t activeInteractType; // Offset: 0x98

}; // Size: 0xA0
