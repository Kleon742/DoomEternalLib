struct idBotPathManager : idEventReceiver
{
    idHashIndex pathNodeNameHash; // Offset: 0x38

    idList < botPathNode_t , TAG_BOT , false > pathNodeList; // Offset: 0x68

}; // Size: 0x80
