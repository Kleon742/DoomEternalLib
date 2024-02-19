struct gameView_t
{
    // {{ units = m }}
    idVec3 viewPosition; // Offset: 0x0

    idMat3 viewAxis; // Offset: 0xC

    // {{ units = m }}
    idVec3 previousViewPosition; // Offset: 0x30

    idMat3 previousViewAxis; // Offset: 0x3C

    // indexed by entity number
    idArray < idList < gameViewEntInfo_t > , 2 > processedEntities; // Offset: 0x60

    // list of lists, indexed by entity number
    idArray < idList < idViewEntityInfoList > , 2 > processedEntityAimPoints; // Offset: 0x90

    idManagedClassPtr < idEntity > owner; // Offset: 0xC0

    idArray < idList < int > , 2 > targetMeleeIndices; // Offset: 0xE0

    idArray < idList < int > , 2 > actorIndices; // Offset: 0x110

    idArray < idList < idEntity * > , 2 > resolvedProcessedEntities; // Offset: 0x140

    idEntity* resolvedOwner; // Offset: 0x170

}; // Size: 0x178
