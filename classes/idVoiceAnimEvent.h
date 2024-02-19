struct idVoiceAnimEvent : idVoiceEvent
{
    // name of the animation alias or animweb path to play
    idAtomicString animName; // Offset: 0x10

    // face mgr channel to play on (faceChannel_t)
    short channel; // Offset: 0x18

    // time animation should take to blend in
    unsigned short blendInDurationMS; // Offset: 0x1A

    // time animation should take to blend out
    unsigned short blendOutDurationMS; // Offset: 0x1C

    // frame to start on when playing this animation
    unsigned short startFrame; // Offset: 0x1E

    // playback rate, compressed to a short
    unsigned short rate; // Offset: 0x20

    // true to loop the animation
    bool looping; // Offset: 0x22

}; // Size: 0x28
