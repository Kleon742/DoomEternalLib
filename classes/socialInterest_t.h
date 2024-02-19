struct socialInterest_t
{
    idEntityPtr_ThreadSafe < idActor > actor; // Offset: 0x0

    // idStaticList< socialPercept_t, 128 >rawPercepts; idStaticList< socialPercept_t, 128 >aggregatePercepts; idStaticList< factionLinkAddress_t, 64 >relationshipIndices;indices in decl
    socialInterestData_t data; // Offset: 0x18

    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 21 > maxTimestamps; // Offset: 0x48

}; // Size: 0xF0
