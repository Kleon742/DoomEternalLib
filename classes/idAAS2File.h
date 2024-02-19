struct idAAS2File : idResource
{
    struct bestReachableArea_t
    {
        // {{ units = m }}
        float bboxHeight; // Offset: 0x0

        // {{ units = m }}
        float maxEdgeDist; // Offset: 0x4

        int areaFlags; // Offset: 0x8

        int excludeTravelFlags; // Offset: 0xC

        int pointAreaNum; // Offset: 0x10

        // {{ units = m }}
        float pointAreaFloorDist; // Offset: 0x14

        int boundsAreaNum; // Offset: 0x18

        // {{ units = m }}
        float boundsAreaFloorDist; // Offset: 0x1C

    }; // Size: 0x20

    struct floorEdgeSplitPoint_t
    {
        // {{ units = m }}
        idVec3 point; // Offset: 0x0

        // {{ units = m }}
        float dist; // Offset: 0xC

        int edgeNum; // Offset: 0x10

    }; // Size: 0x14

    struct bspTree_t
    {
        idVec3 floorNormal; // Offset: 0x0

        int headNode; // Offset: 0xC

        int firstArea; // Offset: 0x10

        int lastArea; // Offset: 0x14

    }; // Size: 0x18

    unsigned int crc; // Offset: 0x58

    unsigned int timestamp; // Offset: 0x5C

    idList < int , TAG_AAS , false > visitedAreas; // Offset: 0x60

    idAAS2Settings settings; // Offset: 0x78

    int majorVersion; // Offset: 0x23C

    int minorVersion; // Offset: 0x240

    int firstFakeVertex; // Offset: 0x244

    int firstFakeEdge; // Offset: 0x248

    int firstFakeEdgeIndex; // Offset: 0x24C

    int firstFakeArea; // Offset: 0x250

    // LIST DATA BLOCKS
    idList < idAAS2File::bspTree_t , TAG_AAS , false > trees; // Offset: 0x258

    idList < idPlane , TAG_AAS , false > planes; // Offset: 0x270

    idList < idVec3 , TAG_AAS , false > vertices; // Offset: 0x288

    idList < aas2Edge_t , TAG_AAS , false > edges; // Offset: 0x2A0

    idList < int , TAG_AAS , false > edgeIndex; // Offset: 0x2B8

    idList < aas2Reachability_t , TAG_AAS , false > reachabilities; // Offset: 0x2D0

    idList < aas2Area_t , TAG_AAS , false > areas; // Offset: 0x2E8

    idList < aas2Node_t , TAG_AAS , false > nodes; // Offset: 0x300

    idList < aas2Portal_t , TAG_AAS , false > portals; // Offset: 0x318

    idList < int , TAG_AAS , false > portalIndex; // Offset: 0x330

    idList < aas2Cluster_t , TAG_AAS , false > clusters; // Offset: 0x348

    idList < unsigned char , TAG_AAS , false > obstaclePVS; // Offset: 0x360

    idList < aas2Name_t , TAG_AAS , false > reachabilityNames; // Offset: 0x378

    // table of animation for animated traversals
    idList < aas2AnimName_t , TAG_AAS , false > animNames; // Offset: 0x390

    // table of dependency nodes for animated traversals
    idList < aas2DependencyName_t , TAG_AAS , false > dependencyNames; // Offset: 0x3A8

    // table of dependency nodes for animated traversals
    idList < aas2InteractionEntityName_t , TAG_AAS , false > interactionEntityNames; // Offset: 0x3C0

    // CoverPoints
    idList < aas2Cover_t , TAG_AAS , false > cover; // Offset: 0x3D8

    // CoverPoint-list indices in each area
    idList < int , TAG_AAS , false > areaCoverIndex; // Offset: 0x3F0

    // intersecting CoverPoint-list indices
    idList < int , TAG_AAS , false > touchingCoverIndex; // Offset: 0x408

    // choke points
    idList < aas2ChokePoint_t , TAG_AAS , false > chokePoints; // Offset: 0x420

    // traversal points
    idList < aas2Traversal_t , TAG_AAS , false > traversalPoints; // Offset: 0x438

    // extensible hint node structure
    idList < aas2HintNode_t , TAG_AAS , false > hintNodes; // Offset: 0x450

    idList < aas2AreaBounds_t , TAG_AAS , false > areaBounds; // Offset: 0x468

    bool allocatedOnGlobalHeap; // Offset: 0x480

}; // Size: 0x488
