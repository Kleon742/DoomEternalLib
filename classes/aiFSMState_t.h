struct aiFSMState_t
{
    idFSMGraphState* graphState; // Offset: 0x0

    idAIState* instance; // Offset: 0x8

    idStateData* instanceData; // Offset: 0x10

    idList < int , TAG_AI_FSM , false > transitions; // Offset: 0x18

}; // Size: 0x30
