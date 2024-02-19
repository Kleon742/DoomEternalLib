struct idAICondition_Shared_EntityClarity : idAICondition
{
    // use current enemy or action target instead of pending list
    bool checkCurrentTarget; // Offset: 0x18

    // if nonempty, pass if current source clarity is on this list
    idList < aiPerceptClarity_t , TAG_IDLIST , false > sourceClarities; // Offset: 0x20

    // if nonempty, pass if current position clarity is on this list
    idList < aiPerceptClarity_t , TAG_IDLIST , false > positionClarities; // Offset: 0x38

}; // Size: 0x50
