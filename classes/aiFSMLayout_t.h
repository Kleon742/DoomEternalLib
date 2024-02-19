struct aiFSMLayout_t
{
    idDeclAIFSMManager* decl; // Offset: 0x0

    idFSMGraphFSM* graphFSM; // Offset: 0x8

    idList < aiFSMState_t , TAG_AI_FSM , false > states; // Offset: 0x10

    idList < aiFSMTransition_t , TAG_AI_FSM , false > transitions; // Offset: 0x28

}; // Size: 0x40
