struct idPOIInfo
{
    // decl for the POI
    idDeclPOI* decl; // Offset: 0x0

    // entity POI is attached to if any.
    idManagedClassPtr < idEntity > entity; // Offset: 0x8

    // Custom text to be put in the ( 'label', 'txtVal' ) sprite
    idStr labelText; // Offset: 0x28

    // where the POI is at in world coordinates.
    idVec3 worldPosition; // Offset: 0x58

    // where the POI is at in world coordinates when off screen.
    idVec3 offScreenPosition; // Offset: 0x64

    // where the POI is at in screen coordinates.
    idVec2 screenPosition; // Offset: 0x70

    // length of time to display the POI before fading it out
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x78

    // time to fully hide the POI, only set if m_duration > gameTime_zero
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hideTime; // Offset: 0x80

    // time the poi was created. Used for any sort of fancy effect on the poi when it spawns
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > creationTime; // Offset: 0x88

    // time the poi was refreshed. Used for other sorts of fancy effects, e.g. lerping on end.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > refreshTime; // Offset: 0x90

    // does the world position have direct LOS from player's perspective
    bool hasLOS; // Offset: 0x98

    // does this POI care about LOS?
    bool usesLOS; // Offset: 0x99

    // is this POI for a demon bounty ( we do some special hacky stuff )
    bool isDemonBountyPOI; // Offset: 0x9A

    // is this POI for a timed bounty ( we do some additional hacky stuff )
    bool isTimedBountyPOI; // Offset: 0x9B

    // This POI is added to the map the first time
    bool firstAppearancePOI; // Offset: 0x9C

    // This POI appeared in the LOS for the first time
    bool POIAlreadyAppearedInLOS; // Offset: 0x9D

    // playerNum for this entity
    int playerNum; // Offset: 0xA0

    // how much from 0 to 1 is the lerp
    float lerpAmount; // Offset: 0xA4

    // unique identifier for POI
    int uid; // Offset: 0xA8

    // Custom color to be used for specific POI types
    int overrideColor; // Offset: 0xAC

}; // Size: 0xB0
