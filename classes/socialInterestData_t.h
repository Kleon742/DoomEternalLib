struct socialInterestData_t
{
    // idBlockList< socialPercept_t, 4, 64 >rawPercepts; idBlockList< socialPercept_t, 4, 64 >aggregatePercepts; idBlockList< factionLinkAddress_t, 4, 16 >relationshipIndices;indices in decl
    idXList < socialPercept_t > rawPercepts; // Offset: 0x0

    idXList < socialPercept_t > aggregatePercepts; // Offset: 0x10

    // indices in decl
    idXList < factionLinkAddress_t > relationshipIndices; // Offset: 0x20

}; // Size: 0x30
