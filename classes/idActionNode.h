struct idActionNode : idBloatedEntity
{
    struct anim_t
    {
        // The type of AI character this anim is for
        aiTypeEnum_t aiType; // Offset: 0x0

        // name of an animWeb node to play at this node
        idAnimWebPath animWebNode; // Offset: 0x8

        // name of entity to trigger when this anim starts or stops
        idManagedClassPtr < idEntity > trigger; // Offset: 0x38

        // minimum time (in seconds) to loop the animation (if the animWeb node specifies WRAP_REPEAT)
        float minLoopTime; // Offset: 0x58

        // minimum time (in seconds) to loop the animation (if the animWeb node specifies WRAP_REPEAT)
        float maxLoopTime; // Offset: 0x5C

        // after triggering this anim can't trigger again until this many seconds have passed
        float timeBetween; // Offset: 0x60

        // makes the animation more or less likely to play than other anims in the list, based on their weights compared to this
        int weight; // Offset: 0x64

        // true to allow head tracking while playing this animation
        bool enableHeadTracking; // Offset: 0x68

        // next time when this anim can play
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextPlayTime; // Offset: 0x70

    }; // Size: 0x78

    // entity currently reserving this action node
    idManagedClassPtr < idAnimatedEntity > reservingEntity; // Offset: 0xB88

    // if set, AIs can be set to use only action nodes with a specific group name
    idStr groupName; // Offset: 0xBA8

    // actions to perform when reaching this point
    idComponentActionScript actionScriptComponent; // Offset: 0xBD8

    // info for anims that play at this node (one will be chosen randomly from this list each time an AI reaches the node)... this can be empty if an actionScript is set at the node
    idList < idActionNode::anim_t , TAG_IDLIST , false > anims; // Offset: 0xC58

    // type of nav mehs this action node is associated with
    navSize_t navSize; // Offset: 0xC70

    // if false don't print warnings if not in nav mesh
    bool shouldCheckNavMesh; // Offset: 0xC74

    // true if an AI standing on this action node can make it unavailable
    bool canBeBlockedByAI; // Offset: 0xC75

    // when true, this action node is disabled on spawn, trigger to toggle
    bool startOff; // Offset: 0xC76

    // this action node is active and can be used
    bool isActive; // Offset: 0xC77

    // if the AI's origin is farther away than this, the AI will move to the point {{ units = m }}
    float reachedPointTolerance; // Offset: 0xC78

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > touching; // Offset: 0xC80

    // bitflag of all monster types used by this action node
    aiMonsterType_t monsterTypes; // Offset: 0xC98

    idSysMutex unTouchMutex; // Offset: 0xCA0

}; // Size: 0xCC8
