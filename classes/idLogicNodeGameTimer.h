struct idLogicNodeGameTimer
{
    enum logicIds_t : int
    {
        INPUT_EVENT_SET = 0,
        INPUT_EVENT_ADD = 1,
        OUTPUT_SET = 2,
        OUTPUT_ADD = 3,
        OUTPUT_EVENT = 4
    };

    // event we should be listening for
    int timeSec; // Offset: 0x0

    // Time attack decl mutator ( only used when time is set )
    idDeclGameMutator* declMutator; // Offset: 0x8

    // sound to play when time is added
    idSoundEvent* addTimeSound; // Offset: 0x10

}; // Size: 0x18
