struct idDeclAF : idDecl
{
    struct solverConstants_t
    {
        float errorReduction; // Offset: 0x0

        float errorReductionMax; // Offset: 0x4

        float lcpEpsilon; // Offset: 0x8

        float maxLcpEpsilon; // Offset: 0xC

        float limitErrorReduction; // Offset: 0x10

        float limitErrorReductionMax; // Offset: 0x14

        float limitLcpEpsilon; // Offset: 0x18

        float contactErrorReduction; // Offset: 0x1C

        float contactErrorReductionMax; // Offset: 0x20

        float contactLcpEpsilon; // Offset: 0x24

        float universalErrorReduction; // Offset: 0x28

        float universalErrorReductionMax; // Offset: 0x2C

        float universalTorsionLcpEpsilon; // Offset: 0x30

        float minTwistErrorReduction; // Offset: 0x34

        float maxTwistErrorReduction; // Offset: 0x38

    }; // Size: 0x3C

    struct idGetUpJoint
    {
        // Source joint
        idAtomicString jointName; // Offset: 0x0

        // Importance of this joint when matching
        float jointWeight; // Offset: 0x8

    }; // Size: 0x10

    struct idGetUpAnimation
    {
        // animation to play
        idAtomicString getUpAnim; // Offset: 0x0

    }; // Size: 0x8

    bool modified; // Offset: 0x78

    idDeclMD6* modelDef; // Offset: 0x80

    bool doOverrideJointMods; // Offset: 0x88

    declAFJointMod_t overrideJointMod; // Offset: 0x8C

    idAtomicString skin; // Offset: 0x90

    float defaultBouncyness; // Offset: 0x98

    // {{ units = 1 / s }}
    float defaultLinearFriction; // Offset: 0x9C

    // {{ units = 1 / s }}
    float defaultAngularFriction; // Offset: 0xA0

    float defaultContactFriction; // Offset: 0xA4

    float defaultConstraintFriction; // Offset: 0xA8

    // {{ __its = m / s }} {{ __its = radians / s }}
    idVec2 suspendVelocity; // Offset: 0xAC

    // {{ __its = m / ( s * s ) }} {{ __its = radians / ( s * s ) }}
    idVec2 suspendAcceleration; // Offset: 0xB4

    float noMoveTime; // Offset: 0xBC

    // {{ units = m }}
    float noMoveTranslation; // Offset: 0xC0

    float noMoveRotation; // Offset: 0xC4

    float minMoveTime; // Offset: 0xC8

    float maxMoveTime; // Offset: 0xCC

    int contents; // Offset: 0xD0

    int clipMask; // Offset: 0xD4

    idTypesafeTime < float , secondUnique_t , 1 > noImpulseDeathTime; // Offset: 0xD8

    // solver constants to use normally (when not syncing to animation)
    idDeclAF::solverConstants_t solverConstants; // Offset: 0xDC

    // solver constants to use when syncing to animation
    idDeclAF::solverConstants_t syncSolverConstants; // Offset: 0x118

    bool selfCollision; // Offset: 0x154

    idAtomicString base; // Offset: 0x158

    idMaterial2* clipMaterial; // Offset: 0x160

    idList < idTypeInfoObjectPtr < idDeclAF_Body > , TAG_AF , false > bodies; // Offset: 0x168

    idList < idTypeInfoObjectPtr < idDeclAF_Constraint > , TAG_AF , false > constraints; // Offset: 0x180

    // Getup joints
    idList < idDeclAF::idGetUpJoint , TAG_IDLIST , false > getUpJoints; // Offset: 0x198

    // Getup animations
    idList < idDeclAF::idGetUpAnimation , TAG_IDLIST , false > getUpAnims; // Offset: 0x1B0

    // list of groups that can be enabled or disabled on an AF
    idList < namedStringList_t , TAG_IDLIST , false > namedGroups; // Offset: 0x1C8

}; // Size: 0x1E0
