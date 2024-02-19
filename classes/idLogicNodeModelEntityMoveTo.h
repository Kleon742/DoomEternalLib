struct idLogicNodeModelEntityMoveTo : idLogicNodeModel
{
    // Type of Move function to use. Time or Speed.
    idLogicNodeEntityMoveTo::logicMoveToSwitch_t moveToSwitch; // Offset: 0x10

    // Type of movement. Absolute position or offset.
    idLogicNodeEntityMoveTo::logicMoveToType_t moveToType; // Offset: 0x14

}; // Size: 0x18
