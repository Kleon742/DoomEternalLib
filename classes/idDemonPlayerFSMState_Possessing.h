struct idDemonPlayerFSMState_Possessing : idDemonPlayerFSMState < idDemonPlayer >
{
    bool requestedMovement; // Offset: 0x30

    bool goToGhost; // Offset: 0x31

    // time hazard can next be activated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hazardActivateTime; // Offset: 0x38

    bool hazardActivated; // Offset: 0x40

    // possession may have a time limit
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endPossessionTime; // Offset: 0x48

    // remember camera distance before messing with it
    float previousCamDist; // Offset: 0x50

    bool spawnPressed; // Offset: 0x54

    bool warpPressed; // Offset: 0x55

}; // Size: 0x58
