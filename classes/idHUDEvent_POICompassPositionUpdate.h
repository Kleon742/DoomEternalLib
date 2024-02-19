struct idHUDEvent_POICompassPositionUpdate
{
    struct poiInfo_t
    {
        idDeclPOI* decl; // Offset: 0x0

        int uid; // Offset: 0x8

        float x; // Offset: 0xC

        float y; // Offset: 0x10

    }; // Size: 0x18

    idHUDEvent_POICompassPositionUpdate::poiInfo_t info; // Offset: 0x0

}; // Size: 0x18
