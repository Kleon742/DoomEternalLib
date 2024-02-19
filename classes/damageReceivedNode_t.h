struct damageReceivedNode_t
{
    playerDamageReceivedEvent_t entry; // Offset: 0x0

    damageReceivedNode_t* prev; // Offset: 0xB8

    damageReceivedNode_t* next; // Offset: 0xC0

}; // Size: 0xC8
