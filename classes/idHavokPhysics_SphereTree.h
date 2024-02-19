struct idHavokPhysics_SphereTree : idHavokPhysics_Base
{
    idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > jointIndices; // Offset: 0x208

    idList < short , TAG_IDLIST , false > instanceToIndex; // Offset: 0x220

    idHavokShapePointer sphereShape; // Offset: 0x238

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTime; // Offset: 0x240

    sphereTreeCachedInstanceData_t* cachedInstanceData; // Offset: 0x248

}; // Size: 0x250
