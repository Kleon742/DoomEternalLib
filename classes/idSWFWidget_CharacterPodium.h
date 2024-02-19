struct idSWFWidget_CharacterPodium : idSWFWidget
{
    idCharacterPodium podium; // Offset: 0x180

    bool podiumSpawned; // Offset: 0x310

    // position relative to camera viewpoint
    idVec3 position; // Offset: 0x314

    // axis relative to facing-the-camera
    idMat3 axis; // Offset: 0x320

    // ID of the lobby user to draw a podium for
    lobbyUserId_t lobbyUserId; // Offset: 0x344

    // playable character currently selected by the user
    idDeclPlayableCharacter* playableCharacter; // Offset: 0x348

    // animation to use for the character model
    characterEquippedAnimationType_t animationType; // Offset: 0x350

    // blend time for the character model animation
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animationBlendTime; // Offset: 0x358

}; // Size: 0x360
