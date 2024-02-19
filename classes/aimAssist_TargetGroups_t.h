struct aimAssist_TargetGroups_t
{
    // Name of a targeting group to add to aim assist
    idAtomicString targetingGroupName; // Offset: 0x0

    // How much to scale friction radius for this group
    float frictionRadiusScalar; // Offset: 0x8

    // How much to scale adhesion radius for this group
    float adhesionRadiusScalar; // Offset: 0xC

}; // Size: 0x10
