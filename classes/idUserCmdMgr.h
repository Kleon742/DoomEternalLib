struct idUserCmdMgr
{
    struct idUserCmdInfo
    {
        idUserCmd cmd; // Offset: 0x0

    }; // Size: 0x98

    idArray < idUserCmdMgr::idUserCmdInfo , 12 > cmdBuffer; // Offset: 0x0

}; // Size: 0x720
