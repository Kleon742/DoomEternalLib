struct aiPainAnimInfo_t
{
    // an explicit path to the animweb node ( can be empty if stateName is not empty )
    idAnimWebPath webNode; // Offset: 0x0

    // state name ( can be empty if webNode is not empty )
    idAtomicString stateName; // Offset: 0x30

    // flags applied only to this anim
    actorPainFlags_t painFlags; // Offset: 0x38

    // ai context flags that apply to this anim only
    aiContextFlags_t contextFlags; // Offset: 0x3C

    // if >= 0, specific index this anim applies to
    int animIndex; // Offset: 0x40

    // damage dir
    damageDirection_t damageDir; // Offset: 0x44

    // used by some systems to find the right pain
    idAtomicString optionalString; // Offset: 0x48

}; // Size: 0x50
