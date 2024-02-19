struct idAICondition_Generate_Positions_Explicit : idAICondition
{
    // if non-empty, just start with these explicit positions
    idList < idVec3 , TAG_AI_FSM , false > explicitPoints_modelSpace; // Offset: 0x18

    // if true, rotate model space so that +x is direction to target/enemy
    bool orientToTarget; // Offset: 0x30

    // blah
    idColor debugColor; // Offset: 0x34

}; // Size: 0x48
