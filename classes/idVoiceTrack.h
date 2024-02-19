struct idVoiceTrack : idResource
{
    enum eventOffset_t : int
    {
        EVENTOFFSET_FORWARDS = 1,
        EVENTOFFSET_BACKWARDS = -1
    };

    struct idFrameRefIndexBuffer
    {
        // offset where next allocation will occur
        unsigned short curOffset; // Offset: 0x0

        // total size of the buffer
        unsigned short size; // Offset: 0x2

        // buffer of all indices
        unsigned short* indices; // Offset: 0x8

    }; // Size: 0x10

    struct idFrameRef
    {
        // offset into the frame refs index buffer
        unsigned short offset; // Offset: 0x0

        // number of events on this frame
        unsigned short numIndices; // Offset: 0x2

    }; // Size: 0x4

    struct flags_t
    {
        // true if anim alias should play cycling
        bool cycleAnim; // Offset: 0x0

        // true if anim alias should blend out after VO plays
        bool clearAnimAfter; // Offset: 0x0

        // true if there's no lip-syncing (track may just have anim cues or override animation)
        bool noLipSync; // Offset: 0x0

        // true if no auto-blinking is allowed during the VO
        bool suppressBlinking; // Offset: 0x0

        // true if the sample used to generate the visemes was compressed
        bool compressed; // Offset: 0x0

        // true if this voice track was modifed in the voice track editor after creation
        bool edited; // Offset: 0x0

        // true if the voice track should be synced to real time instead of game time
        bool useRealTime; // Offset: 0x0

        // true if the voice track should use the exact duration (this is more expensive, but necessary for some NPC interactions)
        bool useExactDuration; // Offset: 0x0

    }; // Size: 0x1

    struct frameInfo_t
    {
        // frame number
        int frame; // Offset: 0x0

        // number of loops
        int loop; // Offset: 0x4

    }; // Size: 0x8

    struct idSubtitleText
    {
        // a single word of the VO text
        idStr word; // Offset: 0x0

        // the time the word occurs, in milliseconds from the start of the voice track
        idTypesafeTime < int , millisecondUnique_t , 1000 > time; // Offset: 0x30

    }; // Size: 0x38

    struct localizedVTROnDisc
    {
        // localized vtr name
        char name[256]; // Offset: 0x0

        // language
        char lang[16]; // Offset: 0x100

        // offset within file
        int offset; // Offset: 0x110

        // size within file
        int size; // Offset: 0x114

        // actual vtr payload
        void* data; // Offset: 0x118

    }; // Size: 0x120

    typedef idStaticList < const idVoiceEvent * , MAX_VOICE_EVENTS > eventList_t;

    typedef idList < idVoiceTrack::idSubtitleText > subtitleList_t;

    // time-sorted list of handles for events in the track
    idList < vtrEventHandle_t , TAG_VOICETRACK_EVENTS , false > events; // Offset: 0x58

    // tracks events by handle
    idVoiceEventManager voiceEventManager; // Offset: 0x70

    // one entry for each game frame, for the duration of the track, so we can quickly find all events for a game frame
    idVoiceTrack::idFrameRef* frameRefs; // Offset: 0x100

    // number of frame refs
    short numFrameRefs; // Offset: 0x108

    idVoiceTrack::idFrameRefIndexBuffer indexBuffer; // Offset: 0x110

    // if false, frame refs won't auto-rebuild when a event is added
    bool rebuildFrameRefs; // Offset: 0x120

    // -1 if offset backwards, +1 if offset forwards
    char visemeOffsetState; // Offset: 0x121

    // -1 if offset backwards, +1 if offset forwards
    char offsetState; // Offset: 0x122

    // the actual name of the text's key in the .lang files, such as "#str_whatever" -- we need to maintain this across vtr regens because now that idStrId only holds an index any unknown id becomes -1.
    idAtomicString textLangKey; // Offset: 0x128

    // the text id this voice track is associated with
    idStrId textId; // Offset: 0x130

    // CRC of the text this voice track was generated with
    unsigned int textCRC; // Offset: 0x134

    // CRC of the text that was passed to the phonemes generation tool
    unsigned int lipsyncTextCRC; // Offset: 0x138

    // the sound shader this voice track is associated with
    idSoundEvent* soundShader; // Offset: 0x140

    // timestamp of the sample data this voice track was generated with
    unsigned int sampleTimestamp; // Offset: 0x148

    // CRC of the sample data this voice track was generated with
    unsigned int sampleCRC; // Offset: 0x14C

    // name of the anim alias or web node to play when this track is started
    idStr animName; // Offset: 0x150

    // channel to the anim alias on play when this track is started
    faceChannel_t faceChannel; // Offset: 0x180

    // duration over which to blend the animation in
    short blendInMS; // Offset: 0x184

    // duration over which to blend the animation out
    short blendOutMS; // Offset: 0x186

    // time to offset the start of the sound shader in milliseconds
    unsigned int soundOffsetMS; // Offset: 0x188

    // time to offset all viseme events, in milliseconds
    unsigned int visemeOffsetMS; // Offset: 0x18C

    // time to offset all anim events, in milliseconds
    unsigned int animEventOffsetMS; // Offset: 0x190

    // time to offset all mood events, in milliseconds
    unsigned int moodEventOffsetMS; // Offset: 0x194

    // time to offset all game events, in milliseconds
    unsigned int gameEventOffsetMS; // Offset: 0x198

    // time to offset all text events, in milliseconds
    unsigned int textEventOffsetMS; // Offset: 0x19C

    // various flags
    idVoiceTrack::flags_t flags; // Offset: 0x1A0

    // global scale to apply to all viseme weights (useful for toning down lip movements)
    float weightScale; // Offset: 0x1A4

    // the mood to set when this voice track starts
    mood_t defaultMood; // Offset: 0x1A8

    // pointer to the viseme set used by this voice track
    idDeclVisemeSet* declVisemeSet; // Offset: 0x1B0

    // source file timestamp
    unsigned int timestamp; // Offset: 0x1B8

    // duration of this voice track including VO and events, but excluding animation times
    idTypesafeTime < int , millisecondUnique_t , 1000 > approximateDuration; // Offset: 0x1BC

}; // Size: 0x1C0
