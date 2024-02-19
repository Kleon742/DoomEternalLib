struct idAnimSysNodeData_PlayAnimByIndex : idAnimSysNodeData_PlayAnim
{
    // Animations
    idList < idAnimAliasVariationList , TAG_ANIMSYS , false > animAliases; // Offset: 0xF0

    // Which weight group to use
    md6WeightGroup_t weightGroup; // Offset: 0x108

    // variation [1] is randomized, Index [0] is not.
    bool randomizeVariation; // Offset: 0x10C

}; // Size: 0x110
