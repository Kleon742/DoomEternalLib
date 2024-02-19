struct aiDamageStateGraph_t
{
    idList < aiDamageState_t , TAG_AI_UNIT , false > states; // Offset: 0x0

    idList < aiDamageTransition_t , TAG_AI_UNIT , false > transitions; // Offset: 0x18

    int currentState; // Offset: 0x30

    idDeclAIDamageStateGraph* graph; // Offset: 0x38

}; // Size: 0x40
