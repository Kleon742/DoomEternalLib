struct idPlayerBodyReaction_t : idPlayerBodyReactionDescriptor_t
{
    // on / off switch for this state
    bool enable; // Offset: 0x18

    // event position must be no closer than this distance for this reaction to apply (0 to ignore) {{ units = m }}
    float rangeMin; // Offset: 0x1C

    // event position must be no farther than this distance for this reaction to apply (0 to ignore) {{ units = m }}
    float rangeMax; // Offset: 0x20

    // start state
    idPlayerBodyReactionState_t state_start; // Offset: 0x28

    // impact ground (alive)
    idPlayerBodyReactionState_t state_impactGround; // Offset: 0x98

    // impact ground (dead)
    idPlayerBodyReactionState_t state_impactGroundDead; // Offset: 0x108

    // number of directions for this reaction
    playerBodyReactionNumDirs_t reactionNumDirs; // Offset: 0x178

    // supports randomization within the reaction
    int reactionNumVariations; // Offset: 0x17C

    // rotate the body so the selected direction is aligned with the reaction center
    bool reactionAlignToDir; // Offset: 0x180

    // whether the view is inhibited or not
    bool inhibitView; // Offset: 0x181

    // the size of the pitch constraint cone
    float pitchConstraintDegs; // Offset: 0x184

    // the size of the yaw constraint cone
    float yawConstraintDegs; // Offset: 0x188

    // either clip the camera movement on an anim with a fixed origin or, better, let the physics system clip the origin movement, but most anims in this system have fixed origin
    bool clipCameraMovement; // Offset: 0x18C

}; // Size: 0x190
