struct idBotUtils
{
    struct entityDistInfo_t
    {
        // {{ units = m * m }}
        float entityDistToPointSqr; // Offset: 0x0

        idManagedClassPtr < const idEntity > entity; // Offset: 0x8

    }; // Size: 0x28

}; // Size: 0x1
