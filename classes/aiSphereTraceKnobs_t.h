struct aiSphereTraceKnobs_t
{
    // the damage decl to pair this knobs with
    idDeclDamage* damageDecl; // Offset: 0x0

    // currently unused
    idAtomicString name; // Offset: 0x8

    // how much of the impact dir comes from trace direction
    float impactDirWeight_trace; // Offset: 0x10

    // how much impact dir comes from owner velocity
    float impactDirWeight_ownerLinearVelocity; // Offset: 0x14

    // how much impact dir comes from owner velocity direction
    float impactDirWeight_ownerLinearVelocityDir; // Offset: 0x18

    // how much impact dir comes from owner to victim dir
    float impactDirWeight_ownerToVictim; // Offset: 0x1C

}; // Size: 0x20
