struct idUseableBombComponent : idUseableComponent
{
    // can this bomb currently be armed
    bool useable; // Offset: 0x30

    // what team can currently arm this bomb
    gameTeam_t useableTeam; // Offset: 0x34

    // what hellgate owns this bomb
    idHellgate* hellgateOwner; // Offset: 0x38

}; // Size: 0x40
