struct idMapModel
{
    idStr name; // Offset: 0x0

    idList < idMapPrimitive * , TAG_IDLIST , false > primitives; // Offset: 0x30

    bool didCopyPrimitives; // Offset: 0x48

}; // Size: 0x50
