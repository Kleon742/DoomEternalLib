struct idEnvironmentalDamage_PointManager_Trigger : idTrigger
{
    // type of environment damage this handles.
    environmentalDamageType_t envDamageType; // Offset: 0xC90

    // idEnvironmentalDamage_Points that form a piecewise 'linear' cylindrical path
    idList < idList < idManagedClassPtr < idEnvironmentalDamage_Point > > , TAG_IDLIST , false > envDamagePointChains; // Offset: 0xC98

}; // Size: 0xCB0
