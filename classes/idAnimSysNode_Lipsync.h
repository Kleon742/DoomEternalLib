struct idAnimSysNode_Lipsync : idAnimSysNode
{
    enum attentionLevel_t : int
    {
        ATTENTION_LOW = 0,
        ATTENTION_MODERATE = 1,
        ATTENTION_HIGH = 2,
        ATTENTION_MAX = 3
    };

    struct visemeInstance_t : animInstance_t
    {
        float weight; // Offset: 0x28

    }; // Size: 0x30

    idStaticList < idAnimSysNode_Lipsync::visemeInstance_t , 16 , false , TAG_IDLIST > activeVisemes; // Offset: 0xA8

    animInstance_t moodAnim; // Offset: 0x3C0

    animInstance_t blinkAnim; // Offset: 0x3E8

    animInstance_t fidgetAnim; // Offset: 0x410

    animInstance_t glancingAnim; // Offset: 0x438

    idStaticList < idAnimSysNode_Lipsync::visemeInstance_t , 4 , false , TAG_IDLIST > lidDeformationAnims; // Offset: 0x460

    idIndex < short , invalidJointIndex_t , - 1 > eyeJointIndex[2]; // Offset: 0x538

    // next time when a blink can occur
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextBlinkTime; // Offset: 0x540

    // next time to jitter the eyes
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextJitterTime; // Offset: 0x548

    // eye target offset due to jitter {{ units = m }}
    idVec3 eyeJitterOffset; // Offset: 0x550

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastGlanceTime; // Offset: 0x560

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentGlanceInterval; // Offset: 0x568

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastFidgetTime; // Offset: 0x570

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentFidgetInterval; // Offset: 0x578

    // time between any face fluff events
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentFluffInterval; // Offset: 0x580

    // current angle for each eye
    idAngles eyeAngles[2]; // Offset: 0x588

    // cycling 360 counter used to apply extra yaw / pitch to wandering eyes
    float eyeWander[2]; // Offset: 0x5A0

    // current index in facial anim set decl
    int animSetDeclIndex; // Offset: 0x5A8

    // how attentive character should be towards focus ( determines frequency and magnitude of glances )
    idAnimSysNode_Lipsync::attentionLevel_t focusAttentionLevel; // Offset: 0x5AC

    mood_t currentMood; // Offset: 0x5B0

    mood_t playingMood; // Offset: 0x5B4

    // various flags
    unsigned short flags; // Offset: 0x5B8

    bool initEyeTracking; // Offset: 0x5BA

    // true if actor was glancing on the prev frame
    bool glancingPreviousFrame; // Offset: 0x5BB

    bool fidgetingPreviousFrame; // Offset: 0x5BC

    idMD6Alias* moodAnimAlias[9]; // Offset: 0x5C0

    idMD6Alias* blinkAnimAlias; // Offset: 0x608

    idMD6Alias* lidDeformationAnimAlias[5]; // Offset: 0x610

}; // Size: 0x638
