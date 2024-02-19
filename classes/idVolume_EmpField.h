struct idVolume_EmpField : idVolume_DamageOverTime
{
    // did we damage anything
    bool damagedEntity; // Offset: 0xD18

    // who deployed us
    idManagedClassPtr < idEntity > owningEntity; // Offset: 0xD20

}; // Size: 0xD40
