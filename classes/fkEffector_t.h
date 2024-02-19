struct fkEffector_t
{
    // for lookup
    idAtomicString name; // Offset: 0x0

    // name of the tag to use for actual effector
    idAtomicString tagName; // Offset: 0x8

    // between anim parent joint and this joint, effector inherits only fk deltas
    idAtomicString chainParentJoint; // Offset: 0x10

    // how should we inherit data from parent joint?
    fkEffectorInheritType_t parentInheritType; // Offset: 0x18

    // only apply rotation up to this joint in chain, regardless of parentage
    idAtomicString endJoint; // Offset: 0x20

    // reference pose -- offsets between tag and anim/chain parent are cached from this pose
    idAnimAliasRef poseReferenceAnim; // Offset: 0x28

    // pointer to reference anim
    idMD6Anim* refAnimPtr; // Offset: 0x58

    // type of effector
    fkEffectorType_t effectorType; // Offset: 0x60

    // optional pose frame to use -- will be overriden by anim events if found
    float poseFrame; // Offset: 0x64

    // name of tracking parms that goes with this effector
    idAtomicString trackingParmsName; // Offset: 0x68

    // improve perf by making this as high as you can !!!
    idTypesafeTime < float , secondUnique_t , 1 > updateInterval; // Offset: 0x70

    // if true, exclude origin delta ( as if model does not translate )
    bool zeroOriginDelta; // Offset: 0x0

    // if true, effector will subtract origin model space rotation as animation plays
    bool subtractOriginRotation; // Offset: 0x0

    // if true, don't cache offset between chain parent and effector
    bool rebuildOffsetEveryFrame; // Offset: 0x0

    // if true, run one animation blend, then run tracking, then run a second blend
    bool DANGER_perfectTracking; // Offset: 0x0

}; // Size: 0x78
