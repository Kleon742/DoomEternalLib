struct idLogicNodeModelRotatePoint : idLogicNodeModel
{
    // the input type for the rotation angle
    idLogicNodeRotatePoint::inputType_t inputType; // Offset: 0x10

    // the type of rotation we are executing
    idLogicNodeRotatePoint::rotationMode_t rotationMode; // Offset: 0x14

}; // Size: 0x18
