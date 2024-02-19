struct idDeclMD6BinaryData : idResource
{
    idList < cachedJointInfo_t , TAG_IDLIST , false > allCachedJointEventInfo; // Offset: 0x58

    idList < idCachedJoint , TAG_IDLIST , false > allCachedJoints; // Offset: 0x70

}; // Size: 0x88
