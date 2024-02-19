struct idHavokPhysicsCommand
{
    enum cmdType_t : int
    {
        CMD_NOP = 0,
        CMD_ACTIVATION = 1,
        CMD_ONBODYREMOVED = 2,
        CMD_CONTACT_EVENT = 3,
        CMD_CONSTRAINT_BREAK = 4,
        CMD_DESTRUCTION_MODEL_UPDATE = 5,
        CMD_END = 6
    };

    // Command type
    idHavokPhysicsCommand::cmdType_t cmdType; // Offset: 0x8

    // Command size (you're doing it wrong if the command needs more than 64k!)
    unsigned short size; // Offset: 0xC

    // Command size as 16 byte aligned
    unsigned short sizeAligned; // Offset: 0xE

}; // Size: 0x10
