struct idAnimSysNodeData_FingerMovement : idAnimSysNodeData
{
    struct fingerMovement_t
    {
        // Which event to react to to trigger this fingermovement
        idAnimSysNodeData::idAnimSysNodeEvent reactToEvent; // Offset: 0x0

        // Which animation to play
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > animation; // Offset: 0x8

    }; // Size: 0xC

    // Finger movements
    idList < idAnimSysNodeData_FingerMovement::fingerMovement_t , TAG_IDLIST , false > fingerMovements; // Offset: 0xB8

    // Flag to use while fingermovement anim is playing
    idAtomicString fingerMovementActiveFlag; // Offset: 0xD0

    // External timescale controller
    idAtomicString externalTimeScaleRef; // Offset: 0xD8

    // External blend modifier (0-1)
    idAtomicString externalBlendRef; // Offset: 0xE0

}; // Size: 0xE8
