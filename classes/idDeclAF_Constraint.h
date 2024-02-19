struct idDeclAF_Constraint : idClass
{
    enum afConstraintLimit_t : int
    {
        LIMIT_NONE = -1,
        LIMIT_CONE = 0,
        LIMIT_PYRAMID = 1
    };

    idAtomicString name; // Offset: 0x10

    idAtomicString body1; // Offset: 0x18

    idAtomicString body2; // Offset: 0x20

    declAFConstraintType_t type; // Offset: 0x28

    float friction; // Offset: 0x2C

    // {{ units = kg / ( s * s ) }}
    float stretch; // Offset: 0x30

    // {{ units = kg / ( s * s ) }}
    float compress; // Offset: 0x34

    // {{ units = kg / s }}
    float damping; // Offset: 0x38

    // {{ units = m }}
    float restLength; // Offset: 0x3C

    // {{ units = m }}
    float minLength; // Offset: 0x40

    // {{ units = m }}
    float maxLength; // Offset: 0x44

    idTypesafeNumber < float , DegreesUnique_t > minTwist; // Offset: 0x48

    idTypesafeNumber < float , DegreesUnique_t > maxTwist; // Offset: 0x4C

    idAFVector anchor; // Offset: 0x50

    idAFVector anchor2; // Offset: 0x78

    idAFVector shaft[2]; // Offset: 0xA0

    idAFVector axis; // Offset: 0xF0

    idDeclAF_Constraint::afConstraintLimit_t limit; // Offset: 0x118

    idAFVector limitAxis; // Offset: 0x120

    float limitAngles[4]; // Offset: 0x148

    bool limitFudge; // Offset: 0x158

    // true if this constraint only exists when the AF is synced to animation
    bool syncConstraint; // Offset: 0x159

    // this is false if any of the joints the bogy vectors rely upon wasn't found in the skeleton, during Finish()
    bool valid; // Offset: 0x15A

    // Used for the limited hinge constraint
    idVec3 havokAxisPerp; // Offset: 0x15C

    bool havokLoadDirect; // Offset: 0x168

    idVec3 havokPivotA; // Offset: 0x16C

    idVec3 havokPivotB; // Offset: 0x178

    idVec3 havokAxisA; // Offset: 0x184

    idVec3 havokAxisB; // Offset: 0x190

    idVec3 havokAxisAPerp; // Offset: 0x19C

    idVec3 havokAxisBPerp; // Offset: 0x1A8

}; // Size: 0x1B8
