struct idTrigger_DynamicHurt : idTrigger_Hurt
{
    struct activeTriggerInfo_t
    {
        // {{ units = m }}
        idVec3 position; // Offset: 0x0

        // {{ units = m * m }}
        float sizeSqr; // Offset: 0xC

    }; // Size: 0x10

    // damage over time, decl damage
    idDeclDamage* dotDeclDamage; // Offset: 0xD48

}; // Size: 0xD50
