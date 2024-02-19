struct idAICondition_Shared_WaitingTransientFocus : idAICondition
{
    // only include interests with a current value above this
    float valueThreshold; // Offset: 0x18

    // if true, check timer intervals on interests
    bool checkIntervals; // Offset: 0x1C

}; // Size: 0x20
