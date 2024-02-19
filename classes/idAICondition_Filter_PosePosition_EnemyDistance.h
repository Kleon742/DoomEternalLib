struct idAICondition_Filter_PosePosition_EnemyDistance : idAICondition
{
    // blah
    idColor debugColor_input; // Offset: 0x18

    // blah
    idColor debugColor_output; // Offset: 0x28

    // blah
    idRange < float > validDistanceRange; // Offset: 0x38

    // if true, invalid results can still pass if they take us closer to enemy
    bool allowInvalid_closer; // Offset: 0x40

    // if true, invalid results can still pass if they take us farther from enemy
    bool allowInvalid_farther; // Offset: 0x41

}; // Size: 0x48
