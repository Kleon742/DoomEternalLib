struct shieldPlacementQuery_t
{
    idMat3 originRotation; // Offset: 0x0

    idBox bounds; // Offset: 0x24

    // {{ units = m }}
    idVec3 originTranslation; // Offset: 0x60

    // filled out only when this struct is returned
    idEntity* protectedEntity; // Offset: 0x70

    float score; // Offset: 0x78

    idIndex < int , invalidAIDataID_t , - 1 > placementQueryID; // Offset: 0x7C

}; // Size: 0x80
