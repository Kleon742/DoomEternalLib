struct idMD6AnimData
{
    enum animFlag_t : int
    {
        ANIM_FLAG_ADDITIVE = 1,
        ANIM_FLAG_USE_FORWARD_TRANSLATION = 2,
        ANIM_FLAG_USE_LEFT_TRANSLATION = 4,
        ANIM_FLAG_USE_UP_TRANSLATION = 8,
        ANIM_FLAG_USE_ROTATION = 16,
        ANIM_FLAG_IGNORE_BOUNDS = 32,
        ANIM_FLAG_DEFAULTED = 64,
        ANIM_FLAG_PROXY = 128,
        ANIM_FLAG_RETARGET_ADDITIVE = 256,
        ANIM_FLAG_NO_INTERPOLATION = 512,
        ANIM_FLAG_HAS_JOINT_DATA = 1024,
        ANIM_FLAG_HAS_USER_CHANNEL_DATA = 2048,
        ANIM_FLAG_HAS_ORIGIN_DELTA = 4096,
        ANIM_FLAG_INJURED = 8192,
        ANIM_FLAG_SCRAMBLE = 16384,
        ANIM_FLAG_MAIMED = 32768,
        ANIM_FLAG_ATTACK = 65536,
        ANIM_FLAG_EVADE = 131072,
        ANIM_FLAG_HAS_LOCOMOTION_DATA = 262144,
        ANIM_FLAG_MORPHTRACKS_COMPOSITE = 524288
    };

    // Secondary anim maps ptr,
    animMaps_t* secondaryAnimMaps; // Offset: 0x0

    // size of the idMD6AnimData class + all static anim data + all frameset data
    unsigned int totalSize; // Offset: 0x8

    // size of the idMD6AnimData class + all static anim data (includes frameset tables)
    unsigned short size; // Offset: 0xC

    // various flags indicating properties of the animation
    unsigned short flags; // Offset: 0xE

    // total number of frames in the entire animation
    unsigned short numFrames; // Offset: 0x10

    // frame rate of the animation
    unsigned short frameRate; // Offset: 0x12

    // total number of frame sets in this animation
    unsigned short numFrameSets; // Offset: 0x14

    // offset to table for looking up a frameset number by animation frame
    unsigned short frameSetTblOffset; // Offset: 0x16

    // offset to table for looking up a frameset offset by frameset number
    unsigned short frameSetOffsetTblOffset; // Offset: 0x18

    // offset to table with constant joint rotations during this animation
    unsigned short constROffset; // Offset: 0x1A

    // offset to table with constant joint scales during this animation
    unsigned short constSOffset; // Offset: 0x1C

    // offset to table with constant joint translations during this animation
    unsigned short constTOffset; // Offset: 0x1E

    // offset to table with constant user channel values during this animation
    unsigned short constUOffset; // Offset: 0x20

    // size of the frameset base data (each frameset uses the base data of the next frameset)
    unsigned short nextSize; // Offset: 0x22

    // offset to table of joint weights mask for this animation. If 0, the joint weights are all 1 no table is stored.
    unsigned short jointWeightsOffset; // Offset: 0x24

    // the initial delta of the origin
    float startDelta[12]; // Offset: 0x28

    // the final delta of the origin
    float endDelta[12]; // Offset: 0x58

    // Sadly padding needed
    unsigned char pad[8]; // Offset: 0x88

}; // Size: 0x90
