struct idLogicNodeModelGameTimer : idLogicNodeModel
{
    // Time value to use
    int timeSec; // Offset: 0x10

    // Time attack decl mutator ( only used when time is set )
    idDeclGameMutator* declMutator; // Offset: 0x18

    // sound to play when time is added
    idSoundEvent* addTimeSound; // Offset: 0x20

}; // Size: 0x28
