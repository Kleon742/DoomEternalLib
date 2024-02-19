struct idTarget_GroupMessage : idTarget
{
    // name of group to send the message to
    idStr groupName; // Offset: 0xB88

    // message type
    aiGroupMessage_t message; // Offset: 0xBB8

    // entity this message refers to, if other than the activator of the target
    idManagedClassPtr < idEntity > entity; // Offset: 0xBC0

}; // Size: 0xBE0
