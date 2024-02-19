struct idVolume_MancubusFlamethrower : idTrigger_Hurt
{
    // how fast do it travel ( meters per second )
    float velocity; // Offset: 0xD48

    // how far do it travel ( in meters )
    float range; // Offset: 0xD4C

    idVec3 forward; // Offset: 0xD50

    idVec3 launchOrigin; // Offset: 0xD5C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > removeTime; // Offset: 0xD68

    idDemonPlayer* mancubusOwner; // Offset: 0xD70

    idList < idFlamethrower_TouchEvent , TAG_IDLIST , false > touchEvents; // Offset: 0xD78

}; // Size: 0xD90
