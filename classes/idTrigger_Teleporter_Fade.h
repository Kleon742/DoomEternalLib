struct idTrigger_Teleporter_Fade : idTrigger_Teleporter
{
    enum fadeState_t : int
    {
        NO_STATE = -1,
        IDLE_STATE = 0,
        FADE_ENTER_WAIT_STATE = 1,
        FADE_ENTER_STATE = 2,
        TELEPORT_STATE = 3,
        FADE_EXIT_STATE = 4,
        FADE_EXIT_WAIT_STATE = 5,
        MAX_STATES = 6
    };

    enum fadeTransitions_t : int
    {
        NO_TRANSITION = -1,
        FADE_ENTER_WAIT_TRANS = 0,
        FADE_ENTER_TRANS = 1,
        TELEPORT_TRANS = 2,
        FADE_EXIT_TRANS = 3,
        IDLE_TRANS = 4,
        MAX_TRANSITIONS = 5
    };

    typedef idInternalFsm < idTrigger_Teleporter_Fade , idTrigger_Teleporter_Fade::fadeState_t , idTrigger_Teleporter_Fade::fadeTransitions_t > idFadeTeleportFSM;

    // internal state machine for the object
    idInternalFsm < idTrigger_Teleporter_Fade , idTrigger_Teleporter_Fade::fadeState_t , idTrigger_Teleporter_Fade::fadeTransitions_t >* internalFSM; // Offset: 0xDC8

    // data for fading out
    idInfoLevelFadeParms_t fadeOut; // Offset: 0xDD0

    // data for fading in
    idInfoLevelFadeParms_t fadeIn; // Offset: 0xDF0

    // the amount of time(MS) to wait before initiating the out fade
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeOutDelayMS; // Offset: 0xE10

    // the amount of time(MS) to wait before initiating the in fade
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeInDelayMS; // Offset: 0xE14

    // the amount of time(MS) to wait from the start of the fade in before control is given back to the player
    idTypesafeTime < int , millisecondUnique_t , 1000 > controlDelayMS; // Offset: 0xE18

    // damage played when activated
    idDeclDamage* damageDecl; // Offset: 0xE20

    // sound played when activated
    idSoundEvent* soundOnActivate; // Offset: 0xE28

    // if true, inhibit player controls during fade (default is true)
    bool inhibitPlayer; // Offset: 0xE30

    // local data
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > activators; // Offset: 0xE38

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextStateMark; // Offset: 0xE50

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > controlMark; // Offset: 0xE58

}; // Size: 0xE60
