struct idMidnightKeyPropPVPPodiumEvent : idMidnightKeyProperties
{
    struct fadeSettings_t
    {
        // The initial color of the fade
        idColor startColor; // Offset: 0x0

        // The target color of the fade
        idColor targetColor; // Offset: 0x10

        // The time to fade
        int fadeTimeMS; // Offset: 0x20

    }; // Size: 0x24

    // the type of event
    idMidnightPVPPodiumEventType_t pvpPodiumEvent; // Offset: 0x10

    // the slot used for the podium event
    int pvpPodiumSlot; // Offset: 0x14

    // if true, hide other podiums while anim plays
    bool pvpHideOtherPodiums; // Offset: 0x18

    // the manual camera fade settings. We don't have time for the logic node iteration at the moment.
    idMidnightKeyPropPVPPodiumEvent::fadeSettings_t pvpCameraFade; // Offset: 0x1C

    // the video file used in the versus transitions
    idMaterial2* videoDecl; // Offset: 0x40

    // sound event to play
    idSoundEvent* soundEvent; // Offset: 0x48

}; // Size: 0x50
