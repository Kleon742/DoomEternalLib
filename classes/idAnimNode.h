struct idAnimNode : idBloatedEntity
{
    enum animNodeEntryFlags_t : int
    {
        ANIMNODE_FLAGS_NONE = 0,
        ANIMNODE_RETURN_TO_ORIGIN = 1,
        ANIMNODE_SUPPRESS_DELTA_CORRECTION = 2,
        ANIMNODE_RESTART_AFTER_ANIM = 4
    };

    struct animNodeEntry_t
    {
        // via state to play, if nothing specified AI will loop destination for delay time
        idAnimWebPath viaState; // Offset: 0x0

        // dest state to play, if nothing specified AI will play via then loop in default idle for delay time
        idAnimWebPath destState; // Offset: 0x30

        // how long to linger at this entry, 0 implies leave as soon as anim is finished
        float delayInSeconds; // Offset: 0x60

        // if greater than -1, force the anim using the specified blend frames
        int forceFrames; // Offset: 0x64

        // flags for this entry
        idAnimNode::animNodeEntryFlags_t flags; // Offset: 0x68

    }; // Size: 0x70

    struct syncParticipant_t
    {
        // entity that should sync with this node, should be either func_animated or func_animweb
        idManagedClassPtr < idEntity > ent; // Offset: 0x0

        // entity will be aligned with this joint from the source anim
        idAtomicString jointNameToAlignTo; // Offset: 0x20

        // if true, teleport entity to aligned position when node spawns
        bool manuallyPosition; // Offset: 0x28

    }; // Size: 0x30

    struct syncInfo_t
    {
        // list of optional participants for syncing at this node
        idList < idAnimNode::syncParticipant_t , TAG_IDLIST , false > participants; // Offset: 0x0

        // md6def to use for source anim
        idDeclMD6* alignSourceModel; // Offset: 0x18

        // animation file to get align joint translation/rotations from
        idAnimAliasRef alignSourceAnim; // Offset: 0x20

    }; // Size: 0x50

    // list of anims to play in sequence
    idList < idAnimNode::animNodeEntry_t , TAG_IDLIST , false > anims; // Offset: 0xB88

    idList < idEntityPtr_ThreadSafe < idEntity > , TAG_IDLIST , false > users; // Offset: 0xBA0

    // if true, AI should teleport here rather than locmote here
    bool teleportTo; // Offset: 0xBB8

    // if we ever get an enemy, go to combat
    bool abortForCombat; // Offset: 0xBB9

    // What walk state to use when approaching the node
    walkState_t walkState; // Offset: 0xBBC

    // optional info about how this node should sync with stuff
    idAnimNode::syncInfo_t syncInfo; // Offset: 0xBC0

    // true until our members abort for combat
    bool valid; // Offset: 0xC10

}; // Size: 0xC18
