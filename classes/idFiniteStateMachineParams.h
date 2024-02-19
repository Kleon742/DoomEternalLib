struct idFiniteStateMachineParams
{
    idAIFSMManager* manager; // Offset: 0x0

    idList < idAIState * , TAG_IDLIST , false > states; // Offset: 0x8

    idAIState* defaultState; // Offset: 0x20

}; // Size: 0x28
