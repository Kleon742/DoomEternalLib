struct idHavokConstraint
{
    struct createParms_t
    {
        bool enabled; // Offset: 0x0

        float breakingThreshold; // Offset: 0x4

        idConstraintCallbacks* callbacks; // Offset: 0x8

    }; // Size: 0x10

    idHavokPhysics* havokPhysics; // Offset: 0x8

    idAtomicString name; // Offset: 0x10

    // Must come from a valid idPhysics interface
    idPhysicsProperties* bodyProperties1; // Offset: 0x18

    // Either comes from a a valid idPhysics interface or set to the world properties
    idPhysicsProperties* bodyProperties2; // Offset: 0x20

    idHavokConstraintId constraintId; // Offset: 0x28

    hkpConstraintData* constraintData; // Offset: 0x30

    idConstraintCallbacks* callbacks; // Offset: 0x38

}; // Size: 0x40
