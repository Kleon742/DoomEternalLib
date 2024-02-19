struct idAISnippet_BloodAngel_SetShieldEnabled : idAISnippet
{
    // toggle shield activation state
    bool enable; // Offset: 0x18

    // if true, and enabled == false, consider shield to have been disabled from external forcing (i.e. damage event)
    bool fromDamage; // Offset: 0x19

}; // Size: 0x20
