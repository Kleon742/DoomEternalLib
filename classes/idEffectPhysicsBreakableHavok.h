struct idEffectPhysicsBreakableHavok : idEffectPhysicsBreakable
{
    struct piece_t
    {
        // Part index initialized from (this may be discontinuous if a piece mask was used during initialization)
        int index; // Offset: 0x0

        // Rigid body physics state for this part
        idHavokPhysics_RigidBody* rigidBody; // Offset: 0x8

    }; // Size: 0x10

    idHavokPhysics* havokPhysics; // Offset: 0x100

    idHavokCollision* havokCollision; // Offset: 0x108

    // Tracks if this rigid-body needs to react when continuous events are posted
    bool usesContactContinuousEvents; // Offset: 0x110

    // Tracks if this rigid-body needs to react when finished events are posted
    bool usesContactFinishedEvents; // Offset: 0x111

    // Usage mask, so we can keep track of what should always be collapsed etc in the model
    idBitArray usage; // Offset: 0x118

    // Rigid-body states used for all the parts (including base-piece, if any)
    idList < idEffectPhysicsBreakableHavok::piece_t , TAG_FXPHYSICS , false > pieces; // Offset: 0x130

}; // Size: 0x148
