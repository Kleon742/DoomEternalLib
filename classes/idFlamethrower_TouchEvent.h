struct idFlamethrower_TouchEvent
{
    idManagedClassPtr < idEntity > touchingEnt; // Offset: 0x0

    int clipModelId; // Offset: 0x20

    idHavokQueryId pointTrace; // Offset: 0x28

}; // Size: 0x30
