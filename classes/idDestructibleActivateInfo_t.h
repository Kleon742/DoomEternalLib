struct idDestructibleActivateInfo_t
{
    // Impulse. data that the preset uses.
    idDestructiblePresetData_t presetData; // Offset: 0x0

    // forces applied on activation.
    idDestructibleImpulse force; // Offset: 0x44

    // condition to play for FX.
    fxCondition_t fxCondition; // Offset: 0x64

}; // Size: 0x68
