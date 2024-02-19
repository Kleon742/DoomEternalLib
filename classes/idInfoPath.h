struct idInfoPath : idInfo
{
    struct anim_t
    {
        // name of an animWeb node to play at this node
        idAnimWebPath animWebNode; // Offset: 0x0

        // name of entity to trigger when this anim starts or stops
        idManagedClassPtr < idEntity > trigger; // Offset: 0x30

        // minimum time (in seconds) to loop the animation (if the animWeb node specifies WRAP_REPEAT)
        float minLoopTime; // Offset: 0x50

        // minimum time (in seconds) to loop the animation (if the animWeb node specifies WRAP_REPEAT)
        float maxLoopTime; // Offset: 0x54

        // after triggering this anim can't trigger again until this many seconds have passed
        float timeBetween; // Offset: 0x58

        // makes the animation more or less likely to play than other anims in the list, based on their weights compared to this
        int weight; // Offset: 0x5C

        // true to allow head tracking while playing this animation
        bool enableHeadTracking; // Offset: 0x60

        // next time when this anim can play
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextPlayTime; // Offset: 0x68

    }; // Size: 0x70

    // the monster type that can use this path point
    aiMonsterType_t monsterType; // Offset: 0xB90

    // entity to look at while moving to this path point
    idManagedClassPtr < idEntity > focus; // Offset: 0xB98

    // how many degrees off the AI can be from this point's forward direction and still consider themselves aligned to it
    float alignmentTolerance; // Offset: 0xBB8

    // if true, AI will look towards the next path point just before reaching this one
    bool lookAtNextPoint; // Offset: 0xBBC

    // if true, AI will rotate to the direction the node is pointing when the node is reached
    bool alignToNode; // Offset: 0xBBD

    // if true, the AI will try to keep the focus entity in view by turning their body
    bool keepFocusInView; // Offset: 0xBBE

    // if true, the AI will consider this point as a valid place to interact with the player
    bool interactionPoint; // Offset: 0xBBF

    // if true, the AI will abort going to this path if a combat stimulus is received
    bool abortForCombat; // Offset: 0xBC0

    // if truem the AI will abort going to this path if a search stimulus is received
    bool abortForSearch; // Offset: 0xBC1

    // if true, the AI will abort going to this path if in pain
    bool abortForPain; // Offset: 0xBC2

    // if true, AI will come to a full stop at point
    bool stopAtPoint; // Offset: 0xBC3

    // walk state AI will use to go from previous path point to this path point
    walkState_t walkState; // Offset: 0xBC4

    // if true, put AI in combat anim set ( allows sprint, among other things )
    bool forceCombatAnims; // Offset: 0xBC8

    // nav mesh this info/path is for
    navSize_t navSize; // Offset: 0xBCC

    // animations to play when player leaves (chosen randomly)
    idList < idInfoPath::anim_t , TAG_IDLIST , false > playerLeftAnims; // Offset: 0xBD0

    // name of attack category in attack decl
    idStr attackCategory; // Offset: 0xBE8

    // arrival tolerance {{ units = m }}
    float arrivalTolerance; // Offset: 0xC18

    // if true, will become AI's goal entity.
    bool setAsGoalEntity; // Offset: 0xC1C

    // if goal entity - the goal radius {{ units = m }}
    float goalRadius; // Offset: 0xC20

    // if true - AI will stop moving if blocked along path ( by obstacles, for example ).
    bool stopIfBlocked; // Offset: 0xC24

    // role to give AI on the way to this node, or when there, if a set as a goal entity
    encounterGroupRole_t groupRole; // Offset: 0xC28

}; // Size: 0xC30
