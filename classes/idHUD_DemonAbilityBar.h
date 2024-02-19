struct idHUD_DemonAbilityBar : idHUDElement
{
    // ability bar ( 6 - 8 abilities )
    idSWFWidget_DemonAbilityBar* abilityBar; // Offset: 0xF8

    // Pip cost, reservoir.
    idSWFWidget_DemonResourceMeter* resourceMeter; // Offset: 0x100

    // team ability meter.
    idSWFWidget_DemonTeamMeter* teamMeter; // Offset: 0x108

}; // Size: 0x110
