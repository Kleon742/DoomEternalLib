struct idAnimSysNodeData_AITurn : idAnimSysNodeData
{
    // Turn left animations
    idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > turnLeftAnims; // Offset: 0xB8

    // Turn right animations
    idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > turnRightAnims; // Offset: 0xD0

    // Name of scalar reference used for turn angle
    idAtomicString refValueNameTurnAngle; // Offset: 0xE8

}; // Size: 0xF0
