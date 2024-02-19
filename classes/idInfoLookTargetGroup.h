struct idInfoLookTargetGroup : idInfo
{
    // optional places where AI should stand to look at these targets
    idList < idManagedClassPtr < idInfoStandPoint > , TAG_IDLIST , false > standPoints; // Offset: 0xB90

    // radius of this look target group {{ units = m }}
    float radius; // Offset: 0xBA8

    // height of cylinder {{ units = m }}
    float height; // Offset: 0xBAC

}; // Size: 0xBB0
