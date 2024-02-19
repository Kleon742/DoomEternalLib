struct idPoseableEntity : idAnimatedEntity
{
    // articulated figure properties
    idAnimator_AF afProperties; // Offset: 0x1B48

    // parameters to use when transitioning to ragdoll upon death
    idRagdollInfo ragdollInfo; // Offset: 0x2010

    // corpse pose in md6
    idMD6Anim* md6AnimDecl; // Offset: 0x2038

    // list of bodies to bind
    idList < int , TAG_IDLIST , false > boundBodies; // Offset: 0x2040

    // gore used for inital gore
    idList < idStr , TAG_IDLIST , false > startGore; // Offset: 0x2058

    // names of joint groups, their associated damage scale, and armor level
    idEntityDamageComponent entityDamageComponent; // Offset: 0x2070

    // Gore Component for the corpse.
    idGoreComponent goreComponent; // Offset: 0x2198

    // havok constraints list
    idList < idHavokConstraint * , TAG_IDLIST , false > boundConstraintsHavok; // Offset: 0x30E0

    // How long before we can start optimizing.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeTilOptimizationsValid; // Offset: 0x30F8

}; // Size: 0x3100
