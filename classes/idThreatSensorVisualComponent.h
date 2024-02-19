struct idThreatSensorVisualComponent : idClass
{
    // entity def for the threat sensor xray model
    idDeclEntityDef* threatSensorVisualEntityDef; // Offset: 0x10

    // optional offset for the threat sensor visual model {{ units = m }}
    idVec3 visualEntityOffset; // Offset: 0x18

    // in game entity using the above model
    idManagedClassPtr < idAnimated_ThreatSensor > threatSensorVisualEntity; // Offset: 0x28

    idManagedClassPtr < idEntity > owner; // Offset: 0x48

    bool enabled; // Offset: 0x68

}; // Size: 0x70
