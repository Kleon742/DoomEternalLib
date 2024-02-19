struct idMapBrush : idMapPrimitive
{
    idList < idMapBrushSide * , TAG_IDLIST , false > sides; // Offset: 0x28

    // orientation is for editing purposes only, it is premultiplied in brush sides
    idMat3 orientation; // Offset: 0x40

    unsigned int instanceId; // Offset: 0x64

}; // Size: 0x68
