struct idInfo_DoorTraversalChain : idInfo_TraversalChain
{
    // {{ units = m }}
    idList < idVec3 , TAG_IDLIST , false > linkOrigins; // Offset: 0xBF8

    idIndex < int , invalidTraversal_t , - 1 > aasTraversalIndex; // Offset: 0xC10

    idNavIndex < invalidReach_t > aasReachIndex; // Offset: 0xC14

    // emitter ( or other model ) to show/hide as this traversal chain is enabled/disabled
    idManagedClassPtr < idEntity > door; // Offset: 0xC18

}; // Size: 0xC38
