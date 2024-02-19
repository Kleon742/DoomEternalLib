struct idAnimated_AnimWeb_Samuel : idAnimated_AnimWeb
{
    bool voPlayed; // Offset: 0x2B90

    // sound to play when shield is hit
    idSoundEvent* shieldSound; // Offset: 0x2B98

    // sound to play when samuel tells you not to waste your ammo
    idSoundEvent* voSound; // Offset: 0x2BA0

    // num sec to delay sound
    float voSoundDelaySec; // Offset: 0x2BA8

}; // Size: 0x2BB0
