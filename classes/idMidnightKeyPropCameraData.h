struct idMidnightKeyPropCameraData : idMidnightKeyProperties
{
    // camera data
    idMidnightCameraData cameraData; // Offset: 0x10

    // tangent in
    idMidnightCameraTangentData tangentIn; // Offset: 0x80

    // tangent out
    idMidnightCameraTangentData tangentOut; // Offset: 0xA8

}; // Size: 0xD0
