struct Shared_CanPullTrigger : idAIStateTransition
{
    // if we can pull the trigger within this window in the future, returns transcode_yes, else transcode_no
    float secondsInFuture; // Offset: 0xF8

    // flags controlling what to check
    fireControlValidationFlags_t validationFlags; // Offset: 0xFC

}; // Size: 0x100
