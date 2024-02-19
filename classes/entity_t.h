struct entity_t
{
    idStr name; // Offset: 0x0

    idStr path; // Offset: 0x30

    idVec3 position; // Offset: 0x60

    idVec3 rotation; // Offset: 0x6C

    idVec3 scale; // Offset: 0x78

    idStr clipModel; // Offset: 0x88

    idList < idStr , TAG_IDLIST , false > groups; // Offset: 0xB8

    idList < entity_t , TAG_IDLIST , false > children; // Offset: 0xD0

}; // Size: 0xE8
