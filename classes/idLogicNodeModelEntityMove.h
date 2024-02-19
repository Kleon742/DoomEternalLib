struct idLogicNodeModelEntityMove : idLogicNodeModel
{
    // Type of Move function to use. Time or Speed.
    idLogicNodeEntityMove::logicMoveToSwitch_t moveToSwitch; // Offset: 0x10

    // Type of movement. Absolute position or offset.
    idLogicNodeEntityMove::logicMoveToType_t moveToType; // Offset: 0x14

}; // Size: 0x18
