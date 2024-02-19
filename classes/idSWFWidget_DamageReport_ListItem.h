struct idSWFWidget_DamageReport_ListItem : idSWFWidget
{
    idStr attackerStr; // Offset: 0x180

    idStr damageTypeStr; // Offset: 0x1B0

    int damageAmount; // Offset: 0x1E0

    idMaterial2* damageTypeIcon; // Offset: 0x1E8

    bool isKillingBlow; // Offset: 0x1F0

}; // Size: 0x1F8
