struct idAIFSMManager : idClass
{
    struct idFSMStack
    {
        idList < const idTypeInfo * , TAG_AI_FSM , false > fsms; // Offset: 0x0

        idList < const idTypeInfo * , TAG_AI_FSM , false > states; // Offset: 0x18

    }; // Size: 0x30

    idSysMutex mutex; // Offset: 0x10

    idFSMUser* owner; // Offset: 0x38

    idList < idAIFiniteStateMachine * , TAG_AI_FSM , false > fsms; // Offset: 0x40

    // root FSM
    idAIFiniteStateMachine* controllingFSM; // Offset: 0x58

    // currently running action FSM
    idAIFiniteStateMachine* actionFSM; // Offset: 0x60

    // set in various places, handle all these before running normal update
    idStaticList < aiTransCode_t , 4 , false , TAG_IDLIST > pendingTranscodesToHandle; // Offset: 0x68

    idSysMutex pendingTranscodesMutex; // Offset: 0x90

    // if true, show debug output
    bool debugOutput; // Offset: 0xB8

}; // Size: 0xC0
