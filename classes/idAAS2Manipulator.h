struct idAAS2Manipulator
{
    struct connection_t
    {
        int a1Index; // Offset: 0x0

        int a2Index; // Offset: 0x4

        short distanceSqr; // Offset: 0x8

    }; // Size: 0xC

    struct portal_t
    {
        int a1Index; // Offset: 0x0

        int a2Index; // Offset: 0x4

    }; // Size: 0x8

    struct vertexIndexPair_t
    {
        // {{ units = m }}
        idVec3 vertex; // Offset: 0x0

        int index; // Offset: 0xC

    }; // Size: 0x10

    // stuff copied from cluster build
    idList < idRemovedPortal , TAG_AAS , false > removedPortalAreas; // Offset: 0x0

    bool isFlipped; // Offset: 0x18

    idAAS2File aas; // Offset: 0x20

    idAAS2DebugAreaModelData aasDebugData; // Offset: 0x4A8

    idList < idAAS2Manipulator::portal_t , TAG_IDLIST , false > portalList; // Offset: 0x4F0

}; // Size: 0x508
