struct idLogicNodeModelHordeDevCheckpoint : idLogicNodeModel
{
    // Outputs
    idList < idLogicNodeHordeDevCheckpoint::output_t , TAG_LOGIC , false > outputs; // Offset: 0x10

    // Item options
    idList < idLogicNodeHordeDevCheckpoint::itemOptions_t , TAG_LOGIC , false > itemOptions; // Offset: 0x28

}; // Size: 0x40
