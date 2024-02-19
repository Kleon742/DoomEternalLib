struct idInteractable_SonicBoost : idInteractable
{
    enum sonicBoostState_t : int
    {
        NO_STATE = -1,
        SBS_IDLE = 0,
        SBS_MOUNT_PLATFORM = 1,
        SBS_UNMOUNT_PLATFORM = 2,
        SBS_EXEC_BOOST = 3,
        MAX_STATES = 4
    };

    enum sonicBoostTransition : int
    {
        NO_TRANSITION = -1,
        SBT_MOUNT_PLATFORM = 0,
        SBT_UNMOUNT_PLATFORM = 1,
        SBT_EXEC_BOOST = 2,
        SBT_RESET = 3,
        MAX_TRANSITIONS = 4
    };

    struct defferedQueryInfo_t
    {
        idHavokQueryId query; // Offset: 0x0

        // {{ units = m }}
        idVec3 start; // Offset: 0x8

        // {{ units = m }}
        idVec3 end; // Offset: 0x14

    }; // Size: 0x20

    struct chargedRestrictMs_t
    {
        // the amount of time to apply the charge
        idTypesafeTime < int , millisecondUnique_t , 1000 > restrictedTimeMs; // Offset: 0x0

        // the amount of time we must hold the button down to charge stage
        idTypesafeTime < int , millisecondUnique_t , 1000 > holdDownTimeMs; // Offset: 0x4

        // the speed to execute the charge at {{ units = m / s }}
        float speed; // Offset: 0x8

        // default sound to play on stage
        idSoundEvent* boosStageSound; // Offset: 0x10

        // when on this stage act as free movement
        bool forceFreeMoveBlst; // Offset: 0x18

    }; // Size: 0x20

    typedef idInternalFsm < idInteractable_SonicBoost , idInteractable_SonicBoost::sonicBoostState_t , idInteractable_SonicBoost::sonicBoostTransition > idSonicBoostFSM;

    // used to set the destination of the blast if needed
    idManagedClassPtr < idEntity > destinationEntity; // Offset: 0x2B50

    // used to set the placement of the destination {{ units = m }}
    idVec3 destinationPoint; // Offset: 0x2B70

    // speed of movement {{ units = m / s }}
    float speed; // Offset: 0x2B7C

    // the percentage of the velocity to retain if necessary
    float retainVelocityPct; // Offset: 0x2B80

    // the time we want to restrict the blast for
    idTypesafeTime < int , millisecondUnique_t , 1000 > restrictedTimeMs; // Offset: 0x2B84

    // player view direction dictates where we go
    bool restrictedView; // Offset: 0x2B88

    // bring hands up instead of weapon during blast
    bool bringUpHands; // Offset: 0x2B89

    // whether we want the gravity to be on
    bool gravityOn; // Offset: 0x2B8A

    // retain the velocity of the blast when colliding/ending
    bool retainVelocity; // Offset: 0x2B8B

    // if enabled the manual launch will take the time the user pressed down to charge and execute on release
    bool useChargedBoost; // Offset: 0x2B8C

    // if enabled the restricted time/speed params will be used
    bool useChargedRestrictMs; // Offset: 0x2B8D

    // sound to play when taking off
    idSoundEvent* takeOffSound; // Offset: 0x2B90

    // sound to play during the blast
    idSoundEvent* sonicBlastSound; // Offset: 0x2B98

    // sound to play when landing
    idSoundEvent* landingSound; // Offset: 0x2BA0

    // used to trigger a separate rail ride mechanic
    idManagedClassPtr < idSplinePath > currentSpline; // Offset: 0x2BA8

    // the button used to activate boost manually of no countdown is given
    usercmdButton_t useBoostBtn; // Offset: 0x2BC8

    // the button used to cancel the use of the boost
    usercmdButton_t cancelBoostBtn; // Offset: 0x2BD0

    // the amount in Ms before we boost the player, 0 == manual boost
    idTypesafeTime < int , millisecondUnique_t , 1000 > countdownMs; // Offset: 0x2BD8

    // the list of entities we are restricting the boost, ordered from left to right
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > restrictedList; // Offset: 0x2BE0

    // cosine of the view to entity at which we are allowed to use the entity as target
    float restrictedCosine; // Offset: 0x2BF8

    // the list of times to restrict the time
    idList < idInteractable_SonicBoost::chargedRestrictMs_t , TAG_IDLIST , false > chargedRestrictMs; // Offset: 0x2C00

    // the index to the entity currently being restricted to
    int restrictedIndex; // Offset: 0x2C18

    // the time mark until we boost the player
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeMark; // Offset: 0x2C20

    // the next time we are allowed to use the boost
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > useMarkTime; // Offset: 0x2C28

    // used to compute the button charge
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargedHoldTime; // Offset: 0x2C30

    // finite state machine
    idInternalFsm < idInteractable_SonicBoost , idInteractable_SonicBoost::sonicBoostState_t , idInteractable_SonicBoost::sonicBoostTransition >* sonicBoostFSM; // Offset: 0x2C38

    // used to test whether we have a clear path to entity
    idInteractable_SonicBoost::defferedQueryInfo_t moveQuery; // Offset: 0x2C40

    // the longest query distance {{ units = m }}
    float longestRestrictDist; // Offset: 0x2C60

    // the real destination entity
    idManagedClassPtr < idEntity > destinationEnt; // Offset: 0x2C68

    // the index for restrict ms
    int restrictMsIndex; // Offset: 0x2C88

    idManagedClassPtr < idPlayer > playerActivator; // Offset: 0x2C90

}; // Size: 0x2CB0
