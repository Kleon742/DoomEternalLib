struct aiAnimState_t
{
    idDeclAIAnimStateNode* declNode; // Offset: 0x0

    idList < int , TAG_AI_UNIT , false > transitions; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastEnterTime; // Offset: 0x20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastExitTime; // Offset: 0x28

    int subgraph; // Offset: 0x30

}; // Size: 0x38
