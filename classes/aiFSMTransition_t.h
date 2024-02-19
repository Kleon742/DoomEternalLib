struct aiFSMTransition_t
{
    idFSMGraphTransition* graphTransition; // Offset: 0x0

    idAIStateTransition* instance; // Offset: 0x8

    int sourceState; // Offset: 0x10

    int destState; // Offset: 0x14

}; // Size: 0x18
