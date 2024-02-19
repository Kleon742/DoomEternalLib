struct idAICondition_Shared_AimedAt : idAICondition
{
    // incoming projectiles will be ignored unless they intersect bounds of this size, centered at character
    idVec3 characterBounds; // Offset: 0x18

    // offset for bounding box
    idVec3 characterBoundsOffset; // Offset: 0x24

    // if non-empty, match this with a bounds in behavior decl
    idAtomicString behaviorBoundsName; // Offset: 0x30

}; // Size: 0x38
