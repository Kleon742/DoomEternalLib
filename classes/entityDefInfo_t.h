struct entityDefInfo_t
{
    // apply these values to any entity that is a child of this
    idEntityDefRef entityDef; // Offset: 0x0

    // bounds of spawned entity, meaning depends on user
    idVec3 bounds; // Offset: 0x8

}; // Size: 0x18
