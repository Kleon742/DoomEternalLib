struct idDestructibleIdleCommand_t
{
    enum idleCommand_t : int
    {
        IDLE_COMMAND_ACTIVATE_ALL = 0,
        IDLE_COMMAND_BECOME_STATIC = 1
    };

    // How long in idle before command takes effect.
    idTypesafeTime < int , millisecondUnique_t , 1000 > time; // Offset: 0x0

    // the command to run.
    idDestructibleIdleCommand_t::idleCommand_t command; // Offset: 0x4

    // run this
    bool repeatable; // Offset: 0x8

}; // Size: 0xC
