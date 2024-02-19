struct idSpawnResult
{
    enum status_t : int
    {
        S_INACTIVE = 0,
        S_PENDING = 1,
        S_COMPLETE = 2,
        S_FAILED = 3
    };

    idSpawnResult::status_t status; // Offset: 0x0

    idManagedClassPtr < idEntity > entity; // Offset: 0x8

    idSpawnLocation location; // Offset: 0x28

}; // Size: 0xA8
