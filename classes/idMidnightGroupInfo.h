struct idMidnightGroupInfo : idClass
{
    // Identifier of the group
    idMidnightObjectUID < idMidnightGroupUIDType , 65534 > UID; // Offset: 0x10

    // name of group
    idAtomicString name; // Offset: 0x18

    // list of MD6def authorized for this group
    idStaticList < const idDeclMD6 * , 16 , false , TAG_IDLIST > declsMD6; // Offset: 0x20

    // geom cache authorized for this group
    idGeomCache* geomCache; // Offset: 0xB8

    // Type of interrupt when the entity died.
    idMidnight::GroupInterruptionType_t deadEntityInterruptType; // Offset: 0xC0

    // Motion tracks are in world Axis or not
    idMidnight::motionAxis_t motionAxis; // Offset: 0xC4

    // motionLoopMode
    idCurves::loopMode_t motionLoopMode; // Offset: 0xC8

}; // Size: 0xD0
