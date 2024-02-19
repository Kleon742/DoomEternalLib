struct idMidnightCameraTangentData
{
    // (Degrees) Field of view delta applied to FoV in animation.
    float deltaFoV; // Offset: 0x0

    // (Meters) Delta distance applied to the focal plane distance in the animation. {{ _nits = m }}
    float deltaFocalPlane; // Offset: 0x4

    // (No units) Lens f number
    float fNumber; // Offset: 0x8

    // (Meters) Delta applied to near dof plane after calculation from len optics. {{ _nits = m }}
    float deltaNearDoF; // Offset: 0xC

    // (Meters) Delta applied to near dof limit plane after calculation from len optics. {{ _nits = m }}
    float deltaNearDoFLimit; // Offset: 0x10

    // (Meters) Delta applied to far dof plane after calculation from len optics. {{ _nits = m }}
    float deltaFarDoF; // Offset: 0x14

    // (Meters) Delta applied to far dof limit plane after calculation from len optics. {{ _nits = m }}
    float deltaFarDoFLimit; // Offset: 0x18

    // (Meters) Delta applied to near plane. {{ _nits = m }}
    float deltaNearPlane; // Offset: 0x1C

    // (0-1) Minimum amount of blur to apply to pixels beyong the far DoF plane.
    float minFarBlurAmount; // Offset: 0x20

    // If exposureMode == MANUAL this is the base exposure value set.
    float manualExposure; // Offset: 0x24

}; // Size: 0x28
