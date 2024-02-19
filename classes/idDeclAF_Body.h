struct idDeclAF_Body : idClass
{
    idAtomicString name; // Offset: 0x10

    idAtomicString jointName; // Offset: 0x18

    declAFJointMod_t jointMod; // Offset: 0x20

    int modelType; // Offset: 0x24

    idAtomicString modelName; // Offset: 0x28

    idAFVector v1; // Offset: 0x30

    idAFVector v2; // Offset: 0x58

    int numSides; // Offset: 0x80

    // {{ units = m }}
    float width; // Offset: 0x84

    // {{ units = kg / ( m * m * m ) }}
    float density; // Offset: 0x88

    idAFVector origin; // Offset: 0x90

    idAngles angles; // Offset: 0xB8

    int contents; // Offset: 0xC4

    int clipMask; // Offset: 0xC8

    int solidTestAxisIndex; // Offset: 0xCC

    bool selfCollision; // Offset: 0xD0

    bool noSyncCollide; // Offset: 0xD1

    bool clearClipMaskInSolid; // Offset: 0xD2

    float bouncyness; // Offset: 0xD4

    idMat3 inertiaScale; // Offset: 0xD8

    // {{ units = 1 / s }}
    float linearFriction; // Offset: 0xFC

    // {{ units = 1 / s }}
    float angularFriction; // Offset: 0x100

    float contactFriction; // Offset: 0x104

    idAtomicString containedJoints; // Offset: 0x108

    idAFVector frictionDirection; // Offset: 0x110

    idAFVector contactMotorDirection; // Offset: 0x138

    // Havok only
    int havokBoneId; // Offset: 0x160

    float havokMass; // Offset: 0x164

    float havokRadius; // Offset: 0x168

    idVec3 havokPos; // Offset: 0x16C

    idMat3 havokAxis; // Offset: 0x178

    idMat3 havokAxis2; // Offset: 0x19C

    idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_AF , false > containedJointIndices; // Offset: 0x1C0

}; // Size: 0x1D8
