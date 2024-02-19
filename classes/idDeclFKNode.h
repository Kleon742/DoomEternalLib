struct idDeclFKNode : idTypeInfoGraphNode
{
    // how much rotation to allot to this joint during FK, normalized against total weight of chain
    float weight; // Offset: 0x30

    // if nonzero, min/max angles this joint can have in model space, relative to identity
    idAngles absoluteConstraints_modelSpace_min; // Offset: 0x34

    // if nonzero, min/max angles this joint can have in model space, relative to identity
    idAngles absoluteConstraints_modelSpace_max; // Offset: 0x40

    // if nonzero, min/max angles this joint can have in local space, relative to identity
    idAngles absoluteConstraints_localSpace_min; // Offset: 0x4C

    // if nonzero, min/max angles this joint can have in local space, relative to identity
    idAngles absoluteConstraints_localSpace_max; // Offset: 0x58

    // if nonzero, min/max angles this joint can have in model space, relative to animation pose
    idAngles relativeConstraints_modelSpace_min; // Offset: 0x64

    // if nonzero, min/max angles this joint can have in model space, relative to animation pose
    idAngles relativeConstraints_modelSpace_max; // Offset: 0x70

    // if nonzero, min/max angles this joint can have in local space, relative to animation pose
    idAngles relativeConstraints_localSpace_min; // Offset: 0x7C

    // if nonzero, min/max angles this joint can have in local space, relative to animation pose
    idAngles relativeConstraints_localSpace_max; // Offset: 0x88

    // whether any attack from this node is valid or not
    bool enabled; // Offset: 0x0

    // if true, perform full CCD recomposition at this joint rather than naive distribution along chain
    bool recompose; // Offset: 0x0

    // if true, this is the base of a chain
    bool root; // Offset: 0x0

    // if true, use constraints
    bool useConstraints; // Offset: 0x0

}; // Size: 0x98
