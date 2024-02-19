struct idDeclAutomapSoundProfile : idGameDeclTypeInfo
{
    // Sound that plays when the map is initially opened
    idSoundEvent* activationSound; // Offset: 0x90

    // Sound that plays when the view is centered on player
    idSoundEvent* centerCameraSound; // Offset: 0x98

    // Demonic ambient sound whose volume is a function of player progression through the map. Plays when the Automap opens and stops when the Automap closes
    idSoundEvent* demonicAmbientNoise; // Offset: 0xA0

    // RTPC hook for percentage volume for Demonic Ambient Sound
    idSoundRTPC* demonicAmbientNoiseRTPC; // Offset: 0xA8

    // Angelic ambient sound whose volume is a function of player progression through the map. Plays when the Automap opens and stops when the Automap closes
    idSoundEvent* angelicAmbientNoise; // Offset: 0xB0

    // RTPC hook for percentage volume for Angelic Ambient Sound
    idSoundRTPC* angelicAmbientNoiseRTPC; // Offset: 0xB8

    // Percentage ceiling for Demonic presence ambient noise. When the completion percentage is at or above this value, the sound no longer plays [0.0f - 0.99f] and transitions to Angelic
    float demonicPresenceCompletionPercentageCeiling; // Offset: 0xC0

    // Min value [0.0f - 1.0f] for the Demonic ambient noise volume. Please be aware that the Demonic Floor should never be greater than the Demonic Ceiling
    float demonicAmbientNoiseFloor; // Offset: 0xC4

    // Max value [0.0f - 1.0f] for the Demonic ambient noise volume. Please be aware that the Demonic Ceiling should never be less than the Demonic Floor
    float demonicAmbientNoiseCeiling; // Offset: 0xC8

    // Min value [0.0f - 1.0f] for the Angelic ambient noise volume. Please be aware that the Angelic Floor should never be greater than the Angelic Ceiling
    float angelicAmbientNoiseFloor; // Offset: 0xCC

    // Max value [0.0f - 1.0f] for the Angelic ambient noise volume. Please be aware that the Angelic Ceiling should never be less than the Angelic Floor
    float angelicAmbientNoiseCeiling; // Offset: 0xD0

    // Rotate sound that is played when the camera yaw rotates
    idSoundEvent* rotateYawSound; // Offset: 0xD8

    // Rotate sound that is played when the camera yaw stops rotating
    idSoundEvent* rotateYawStopSound; // Offset: 0xE0

    // Rotate sound that is played when the camera pitch rotates
    idSoundEvent* rotatePitchSound; // Offset: 0xE8

    // Rotate sound that is played when the camera pitch stops rotating
    idSoundEvent* rotatePitchStopSound; // Offset: 0xF0

    // Pan sound that is played when the camera pans
    idSoundEvent* panSound; // Offset: 0xF8

    // Pan sound that is played when the camera stops panning
    idSoundEvent* panStopSound; // Offset: 0x100

    // Zoom sound that is played when the camera zooms in
    idSoundEvent* zoomInSound; // Offset: 0x108

    // Zoom sound that is played when the camera stops zooming in
    idSoundEvent* zoomInStopSound; // Offset: 0x110

    // Zoom sound that is played when the camera zooms out
    idSoundEvent* zoomOutSound; // Offset: 0x118

    // Zoom sound that is played when the camera stops zooming out
    idSoundEvent* zoomOutStopSound; // Offset: 0x120

}; // Size: 0x128
