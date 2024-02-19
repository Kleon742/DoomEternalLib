struct idUIElement : idClass
{
    idSWF_GameObject swfObject; // Offset: 0x10

    idSWFWidget* rootWidget; // Offset: 0x88

    idList < idUIElement * , TAG_IDLIST , false > childElements; // Offset: 0x90

    idVec3* viewOrigin; // Offset: 0xA8

    idMat3* viewAxis; // Offset: 0xB0

    bool isActive; // Offset: 0xB8

    int focusedChildElementIndex; // Offset: 0xBC

    bool queuedActivate; // Offset: 0xC0

    bool queuedDeactivate; // Offset: 0xC1

}; // Size: 0xC8
