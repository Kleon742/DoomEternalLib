struct idAISnippet_Shared_SetFireMode : idAISnippet
{
    // desired firemode
    aiFireMode_t fireMode; // Offset: 0x18

    // desired equipment slot. If none will set for all slots
    equipSlot_t slot; // Offset: 0x1C

}; // Size: 0x20
