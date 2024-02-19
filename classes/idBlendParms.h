struct idBlendParms
{
    enum blendFlags_t : int
    {
        BLENDFLAG_SOURCE_END_RELATIVE = 1,
        BLENDFLAG_DEST_END_RELATIVE = 2,
        BLENDFLAG_CONVERT_SOURCE_TO_RELATIVE = 4,
        BLENDFLAG_CONVERT_DEST_TO_RELATIVE = 8,
        BLENDFLAG_EXCEPT_LOOPING = 16
    };

    struct parms_t
    {
        // playing animation to use as point of reference (for most blends this need not be set)
        idMD6Anim* srcAnim; // Offset: 0x0

        // playing animation to exclude from use as point of reference (for most blends this need not be set)
        idMD6Anim* exceptSrcAnim; // Offset: 0x8

        // animation this blend should go to (for most blends this need not be set)
        idMD6Anim* destAnim; // Offset: 0x10

        // first frame in the source animation where the blend can start
        short sourceStartFrame; // Offset: 0x18

        // length of the blend out window in frames
        short sourceDuration; // Offset: 0x1A

        // frame in the destination animation where playback starts
        short destStartFrame; // Offset: 0x1C

        // duration of the blend in frames
        short destDuration; // Offset: 0x1E

        // various flags
        char flags; // Offset: 0x20

        // specifies how to blend the origin of the two animation sources
        char originBlend; // Offset: 0x21

        // specifies the type of blend (linear, ease-in, etc.)
        char blendType; // Offset: 0x22

        // specifies how anim events should be handles
        char animEventMethod; // Offset: 0x23

    }; // Size: 0x28

    idBlendParms::parms_t parms; // Offset: 0x0

}; // Size: 0x28
