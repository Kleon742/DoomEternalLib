struct idDeclHandsBobCycle : idGameDeclTypeInfo
{
    // subweb name
    idAtomicString subweb; // Offset: 0x90

    // idle cycle data (only uses blend weight info)
    idHandsBobCycleSingleCycleData_t idleData; // Offset: 0x98

    // run cycle data
    idHandsBobCycleSingleCycleData_t runData; // Offset: 0x120

    // sprint cycle data
    idHandsBobCycleSingleCycleData_t sprintData; // Offset: 0x1A8

    // auto-sprint cycle data
    idHandsBobCycleSingleCycleData_t autoSprintData; // Offset: 0x230

    // crouch cycle data
    idHandsBobCycleSingleCycleData_t crouchData; // Offset: 0x2B8

    // zoom cycle data
    idHandsBobCycleSingleCycleData_t zoomData; // Offset: 0x340

    // pda cycle data (alpha only)
    idHandsBobCycleSingleCycleData_t pdaData; // Offset: 0x3C8

    // scale the alpha with speed or not
    bool scaleAlphaWithSpeed; // Offset: 0x450

    // whether this weapon needs to interrupt sprint during its bringdown or bringup
    bool interruptSprintToChangeWeapons; // Offset: 0x451

}; // Size: 0x458
