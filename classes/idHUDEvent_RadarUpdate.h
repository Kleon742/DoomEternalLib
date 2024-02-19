struct idHUDEvent_RadarUpdate
{
    struct entityVec
    {
        float x; // Offset: 0x0

        float y; // Offset: 0x4

        float z; // Offset: 0x8

    }; // Size: 0xC

    struct radarInfo
    {
        struct entityInfo
        {
            idHUDEvent_RadarUpdate::entityVec pos; // Offset: 0x0

            idMaterial2* icon; // Offset: 0x10

            float iconSize; // Offset: 0x18

            idEntity* entity; // Offset: 0x20

        }; // Size: 0x28

        idHUDEvent_RadarUpdate::radarInfo::entityInfo entityList[128]; // Offset: 0x0

        int numEntities; // Offset: 0x1400

        idHUDEvent_RadarUpdate::entityVec player; // Offset: 0x1404

        idHUDEvent_RadarUpdate::entityVec playerdir; // Offset: 0x1410

        float radius; // Offset: 0x141C

        float pulseSpeed; // Offset: 0x1420

        int pulseRate; // Offset: 0x1424

    }; // Size: 0x1428

    idHUDEvent_RadarUpdate::radarInfo info; // Offset: 0x0

}; // Size: 0x1428
