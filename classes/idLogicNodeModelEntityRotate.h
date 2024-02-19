struct idLogicNodeModelEntityRotate : idLogicNodeModel
{
    // Type of rotation, this needs to be hooked up so we have other rotation types
    idLogicNodeEntityRotate::logicRotateType_t rotateType; // Offset: 0x10

    // Type of input to describe rotation
    idLogicNodeEntityRotate::logicRotateInputType_t rotateInputType; // Offset: 0x14

    // Type of input velocity
    idLogicNodeEntityRotate::velocityInputType_t velInputType; // Offset: 0x18

    // whether this rotation is infinite, the done output will NOT fire when this is ON
    bool infiniteRotation; // Offset: 0x1C

}; // Size: 0x20
