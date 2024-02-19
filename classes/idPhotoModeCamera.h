struct idPhotoModeCamera : idFreeCamera
{
    // CAMERA STATES
    idPhotoModeCamera_States_t currentState; // Offset: 0xD20

    idPhotoModeCamera_States_t savedStateWhileFrozen; // Offset: 0xD24

    // CAMERA MOVEMENT RELATED We attempt to find a valid spawn location in all 4 cardinal directions from the player
    idVec3 testingSpawnLocations[4]; // Offset: 0xD28

    idVec3 CalculatedSpawnPosition; // Offset: 0xD58

    idVec3 desiredOrigin; // Offset: 0xD64

    bool HasEverFoundValidSpawnLocation; // Offset: 0xD70

    bool CameraHasBeenMovedToSpawnLocation; // Offset: 0xD71

    bool InitialSpawnLocationsHaveBeenCalculated; // Offset: 0xD72

    bool SkipTeleportingToSpawn; // Offset: 0xD73

    float ZoomInput; // Offset: 0xD74

    float CustomFOV; // Offset: 0xD78

    bool ClearAnglesOnPlayerControl; // Offset: 0xD7C

    bool SkipScreenEffects; // Offset: 0xD7D

}; // Size: 0xD80
