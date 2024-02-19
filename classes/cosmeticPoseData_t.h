struct cosmeticPoseData_t
{
    // To provide an easy distinction between generic and skin specific poses, and so we don't have to go through the skin list if it is generic.
    cosmeticPoseType_t poseType; // Offset: 0x0

    // Alias for the anim that the pose uses.
    idAtomicHandleT < aliasRefType_t > animAlias; // Offset: 0x8

    // Skins this pose is able to be used with ( only needs to be populated if type is POSE_TYPE_SKIN_SPECIFIC )
    idList < const idDeclGameItem * , TAG_IDLIST , false > associatedSkins; // Offset: 0x10

    // List of entity defs for the props that this pose uses
    idList < const idDeclEntityDef * , TAG_IDLIST , false > props; // Offset: 0x28

}; // Size: 0x40
