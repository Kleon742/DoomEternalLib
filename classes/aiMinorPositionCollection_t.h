struct aiMinorPositionCollection_t
{
    // idStaticList< idVec3, 512 >origins;
    idStaticList < idAIPositionCollisions , 512 , false , TAG_IDLIST > collisions; // Offset: 0x0

    int queryIndex; // Offset: 0x818

}; // Size: 0x820
