struct idLogicOnPlayerStatEventReceiver : idEventReceiver
{
    idList < idLogicNodeActivateOnPlayerStat * , TAG_LOGIC , false > nodes; // Offset: 0x38

    idList < int , TAG_LOGIC , false > playerIndices; // Offset: 0x50

    bool iterating; // Offset: 0x68

}; // Size: 0x70
