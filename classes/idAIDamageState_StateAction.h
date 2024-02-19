struct idAIDamageState_StateAction : idClass
{
    // debug flags
    aiGraphDebugFlags_t debugFlags; // Offset: 0x10

    // if true, execute action on state exit instead of entry
    bool executeOnExit; // Offset: 0x14

}; // Size: 0x18
