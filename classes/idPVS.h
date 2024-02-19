struct idPVS
{
    struct pvsNode_t
    {
        // number of the plane that splits the subspace at this node
        unsigned int planeNum; // Offset: 0x0

        // child nodes, zero is solid, negative is -(area number + 1)
        short children[2]; // Offset: 0x4

    }; // Size: 0x8

    struct pvsPortal_t
    {
        int firstVertex; // Offset: 0x0

        int numVertices; // Offset: 0x4

    }; // Size: 0x8

    struct pvsArea_t
    {
        int firstPortal; // Offset: 0x0

        int numPortals; // Offset: 0x4

    }; // Size: 0x8

    struct pvsHandle_t
    {
        // index to current pvs
        int i; // Offset: 0x0

        // handle for current pvs
        unsigned int h; // Offset: 0x4

    }; // Size: 0x8

    struct pvsCurrent_t
    {
        // current pvs handle
        idPVS::pvsHandle_t handle; // Offset: 0x0

        // current pvs bit string
        unsigned char* pvs; // Offset: 0x8

    }; // Size: 0x10

    struct pvsPassage_t
    {
        // bit set for all portals that may be visible through this passage
        unsigned char* pvs; // Offset: 0x0

        int firstNonZeroBitBlock; // Offset: 0x8

        int lastNonZeroBitBlock; // Offset: 0xC

    }; // Size: 0x10

    struct pvsBuildPortal_t
    {
        // area this portal leads to
        int dstAreaNum; // Offset: 0x0

        // winding goes counter clockwise seen from the area this portal is part of
        idWinding* w; // Offset: 0x8

        // winding bounds
        idBounds bounds; // Offset: 0x10

        // winding plane, normal points towards the area this portal leads to
        idPlane plane; // Offset: 0x28

        // passages to portals in the area this portal leads to
        idPVS::pvsPassage_t* passages; // Offset: 0x38

        // PVS for this portal
        unsigned char* pvs; // Offset: 0x40

        // used during construction
        unsigned char* mightSee; // Offset: 0x48

        bool done; // Offset: 0x50

    }; // Size: 0x58

    struct pvsBuildArea_t
    {
        // number of portals in this area
        int numPortals; // Offset: 0x0

        // bounds of the whole area
        idBounds bounds; // Offset: 0x4

        // array with pointers to the portals of this area
        idPVS::pvsBuildPortal_t** portals; // Offset: 0x20

    }; // Size: 0x28

    struct idPVSPortalConnection
    {
        int frontArea; // Offset: 0x0

        int backArea; // Offset: 0x4

        idFixedWinding winding; // Offset: 0x8

    }; // Size: 0x528

    struct idPVSAreaPortals
    {
        idList < int , TAG_IDLIST , false > portal; // Offset: 0x0

    }; // Size: 0x18

    struct pvsBuildData_t
    {
        int numPortals; // Offset: 0x0

        int numAreas; // Offset: 0x4

        int portalVisBytes; // Offset: 0x8

        int portalVisBitBlocks; // Offset: 0xC

        int areaVisBytes; // Offset: 0x10

        int areaVisBitBlocks; // Offset: 0x14

        idPVS::pvsBuildPortal_t* pvsPortals; // Offset: 0x18

        idPVS::pvsBuildArea_t* pvsAreas; // Offset: 0x20

        int allowIslandAreas; // Offset: 0x28

    }; // Size: 0x30

    struct idSort_Portals : idSort_Quick < int , idPVS::idSort_Portals >
    {
        int* portalMightSeeCount; // Offset: 0x8

    }; // Size: 0x10

    struct header_t
    {
        int magic; // Offset: 0x0

        int numPlanes; // Offset: 0x4

        int numVertices; // Offset: 0x8

        int numNodes; // Offset: 0xC

        int numPortals; // Offset: 0x10

        int numAreas; // Offset: 0x14

        int numPVSBytes; // Offset: 0x18

    }; // Size: 0x1C

    idPVS::header_t header; // Offset: 0x8

    idStr pvsName; // Offset: 0x28

    unsigned char* dataStart; // Offset: 0x58

    idPlane* planes; // Offset: 0x60

    // {{ units = m }}
    idVec3* vertices; // Offset: 0x68

    idPVS::pvsNode_t* nodes; // Offset: 0x70

    idPVS::pvsPortal_t* portals; // Offset: 0x78

    idPVS::pvsArea_t* areas; // Offset: 0x80

    int* areaOffsets; // Offset: 0x88

    unsigned char* areaPVS; // Offset: 0x90

    idPVS::pvsCurrent_t currentPVS[8]; // Offset: 0x98

    bool bare; // Offset: 0x118

}; // Size: 0x120
