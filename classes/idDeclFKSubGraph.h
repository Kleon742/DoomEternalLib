struct idDeclFKSubGraph : idTypeInfoSubGraph
{
    // wrappers for focus and orientation tag data
    idList < fkEffector_t , TAG_IDLIST , false > effectors; // Offset: 0x40

    // entries in this list will auto-set these effectors when specified web node is entered and remove when exited
    idList < fkWebNodeMapping_t , TAG_IDLIST , false > webNodeMappings; // Offset: 0x58

    // tracking parms
    idList < fkTrackingParms_t , TAG_IDLIST , false > trackingParms; // Offset: 0x70

    // specific time to blend this focus in
    idTypesafeTime < int , millisecondUnique_t , 1000 > blendInMs; // Offset: 0x88

    // specific time to blend this focus out
    idTypesafeTime < int , millisecondUnique_t , 1000 > blendOutMs; // Offset: 0x8C

    // whether or not this fk chain is actually turned on
    bool enabled; // Offset: 0x90

}; // Size: 0x98
