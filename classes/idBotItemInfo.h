struct idBotItemInfo
{
    idManagedClassPtr < idEntity > itemEntity; // Offset: 0x0

    // {{ units = m * m }}
    float itemWeight; // Offset: 0x20

    bool itemIsOpportunistic; // Offset: 0x24

    int itemType; // Offset: 0x28

    int itemFlags; // Offset: 0x2C

    int itemAmount; // Offset: 0x30

}; // Size: 0x38
