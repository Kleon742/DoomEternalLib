struct warehouseMessage_t
{
    idStr id; // Offset: 0x0

    idStr headline; // Offset: 0x30

    idStr body; // Offset: 0x60

    liveTileArticleLayout_t layout; // Offset: 0x90

    idStr imageId; // Offset: 0x98

    liveTileImageType_t imageType; // Offset: 0xC8

    idStr imageLocation; // Offset: 0xD0

    liveTileActionType_t actionType; // Offset: 0x100

    idStr actionLocation; // Offset: 0x108

}; // Size: 0x138
