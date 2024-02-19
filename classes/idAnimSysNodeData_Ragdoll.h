struct idAnimSysNodeData_Ragdoll : idAnimSysNodeData
{
    struct idBindConstraint
    {
        enum bindConstraint_t : int
        {
            Fixed = 0,
            BallAndSocket = 1,
            Universal = 2
        };

        // constraint type
        idAnimSysNodeData_Ragdoll::idBindConstraint::bindConstraint_t type; // Offset: 0x0

        // name of constraint
        idAtomicString name; // Offset: 0x8

        // articulated figure body to bind to other entity
        idAtomicString bodyName; // Offset: 0x10

        // name of joint which specifies the position for the constraint
        idAtomicString jointName; // Offset: 0x18

        // if this constraint should skip its clamp
        bool shouldClamp; // Offset: 0x20

    }; // Size: 0x28

    // the articulated figure decl to use
    idDeclAF* articulatedFigure; // Offset: 0xB8

    // __edit const idDeclImpactSound *m_sndBounceTable; sound based on surftype to play when AF bounces __edit const idDeclImpactParticle *m_prtBounceTable; particle based on surftype to spawn when AF bounces constraints used to bind this articulated figure to it's parent
    idList < idAnimSysNodeData_Ragdoll::idBindConstraint , TAG_AF , false > bindConstraints; // Offset: 0xC0

    // whether we can fall apart on use
    bool canDeattachBones; // Offset: 0xD8

}; // Size: 0xE0
