struct idDeclSpineIK : idDeclTypeInfo
{
    // offset the entire spine when looking down {{ units = m }}
    idVec3 spineOffsetByPitch; // Offset: 0x88

    // offset the entire spine when looking up {{ units = m }}
    idVec3 spineOffsetByPitchUp; // Offset: 0x94

    // offset the entire spine when looking left {{ units = m }}
    idVec3 spineOffsetByYawLeft; // Offset: 0xA0

    // offset the entire spine when looking right {{ units = m }}
    idVec3 spineOffsetByYawRight; // Offset: 0xAC

    // provided viewlimits
    viewLimits_t viewLimits; // Offset: 0xB8

    // limit of the lower bodys rotation
    float lowerBodyRotationLimit; // Offset: 0xF4

    // for spine aim
    idList < ikSpine_t , TAG_IDLIST , false > spineInfo; // Offset: 0xF8

}; // Size: 0x110
