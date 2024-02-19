struct Shared_StateDurationExpired : idAIStateTransition
{
    // max time AI should linger in this state
    float stateDurationInSeconds; // Offset: 0xF8

    // if true, allow haste to modify this time
    bool allowHaste; // Offset: 0xFC

}; // Size: 0x100
