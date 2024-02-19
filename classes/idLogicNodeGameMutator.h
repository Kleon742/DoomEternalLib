struct idLogicNodeGameMutator
{
    enum logicIds_t : int
    {
        INPUT_EVENT_ACTIVATE = 0,
        INPUT_EVENT_UPDATE = 1,
        OUTPUT_ACTIVATED = 2,
        OUTPUT_UPDATED = 3
    };

    idDeclGameMutator* declGameMutator; // Offset: 0x0

    mutatorUpdateInfo_t mutatorUpdateInfo; // Offset: 0x8

}; // Size: 0x18
