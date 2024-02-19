struct idLogicNodeModelRandomOneShotSound : idLogicNodeModel
{
    // Sound list to choose from
    idList < const idSoundEvent * , TAG_IDLIST , false > soundsToPickFrom; // Offset: 0x10

    // Outputs
    idList < idLogicNodeRandomOneShotSound::output_t , TAG_LOGIC , false > outputs; // Offset: 0x28

}; // Size: 0x40
