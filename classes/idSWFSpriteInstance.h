struct idSWFSpriteInstance
{
    enum spriteDisplayFlags_t : int
    {
        SWF_DISPLAY_INVISIBLE = 1,
        SWF_DISPLAY_DELETED = 2,
        SWF_DISPLAY_ORPHANED = 4,
        SWF_TRANSFORM_DIRTY = 8,
        SWF_DISPLAY_HAS_FILTERS = 16
    };

    enum swfClipEventFlags_t : int
    {
        CLIPEVENT_LOAD = 1,
        CLIPEVENT_ENTERFRAME = 2,
        CLIPEVENT_UNLOAD = 4,
        CLIPEVENT_MOUSEMOVE = 8,
        CLIPEVENT_MOUSEDOWN = 16,
        CLIPEVENT_MOUSEUP = 32,
        CLIPEVENT_KEYDOWN = 64,
        CLIPEVENT_KEYUP = 128,
        CLIPEVENT_DATA = 256,
        CLIPEVENT_INITIALIZE = 512,
        CLIPEVENT_PRESS = 1024,
        CLIPEVENT_RELEASE = 2048,
        CLIPEVENT_RELEASEOUTSIDE = 4096,
        CLIPEVENT_ROLLOVER = 8192,
        CLIPEVENT_ROLLOUT = 16384,
        CLIPEVENT_DRAGOVER = 32768,
        CLIPEVENT_DRAGOUT = 65536,
        CLIPEVENT_KEYPRESS = 131072,
        CLIPEVENT_CONSTRUCT = 262144
    };

    struct visStruct
    {
        idSWFSpriteInstance* instance; // Offset: 0x0

        int parentIndex; // Offset: 0x8

        bool isVisible; // Offset: 0xC

        bool currentlyVisible; // Offset: 0xD

    }; // Size: 0x10

    struct runStruct
    {
        idSWFSpriteInstance* instance; // Offset: 0x0

        int visIndex; // Offset: 0x8

    }; // Size: 0x10

    struct waitStruct
    {
        idSWFSpriteInstance* instance; // Offset: 0x0

        int visIndex; // Offset: 0x8

    }; // Size: 0x10

    struct swfFlatTransformEntry_t
    {
        uint8_t flags; // Offset: 0x0

        char alignmentType; // Offset: 0x1

        swfMatrix_t local; // Offset: 0x4

        swfMatrix_t global; // Offset: 0x1C

        int parent; // Offset: 0x34

        idVec2 offset; // Offset: 0x38

    }; // Size: 0x40

    struct treeRootData
    {
        // A semi-sorted list in which parentIndex < childIndex for all elements. Replicates original hierarchical traversal order.
        idList < idSWFSpriteInstance::visStruct , TAG_IDLIST , false > visData; // Offset: 0x0

        // List of instances meeting the "multiple frames" condition necessary to use RunTo. Managed at Init/destructor time. Much less common than any other factor of determining this, and entirely invariable after load.
        idList < idSWFSpriteInstance::runStruct , TAG_IDLIST , false > canRunTo; // Offset: 0x18

        // frameCount == 1 case runs a single frame (frame 0 -> frame 1)
        idList < idSWFSpriteInstance::runStruct , TAG_IDLIST , false > canRunToOnce; // Offset: 0x30

        // Waiting is a *very* rare operation; avoid tons of instance dereferences by only doing things when necessary.
        idList < idSWFSpriteInstance::waitStruct , TAG_IDLIST , false > waitingList; // Offset: 0x48

        // Counter to track when all of tree has been destructed, and thus this shared struct needs to be cleaned up as well.
        int terminationCount; // Offset: 0x60

        bool isVisibleDisplayListDirty; // Offset: 0x64

        idList < idSWFSpriteInstance * , TAG_SWF , false > visibleDisplayList; // Offset: 0x68

        idList < idSWFSpriteInstance::swfFlatTransformEntry_t , TAG_SWF , false > flatTransformList; // Offset: 0x80

        idList < uint16_t , TAG_SWF , false > dirtyTransformList; // Offset: 0x98

        idList < uint16_t , TAG_SWF , false > freeTransformList; // Offset: 0xB0

    }; // Size: 0xC8

    struct tween_t
    {
        idAtomicString variable; // Offset: 0x0

        float (*function)(float t , float b , float c , float d); // Offset: 0x8

        float startValue; // Offset: 0x10

        float stopValue; // Offset: 0x14

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x18

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x20

        // If looping, how much time to wait between phases, -1 if not looping
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseTime; // Offset: 0x28

        // instead of looping back we snap back and continue looping if pauseTime >= 0
        bool snapBack; // Offset: 0x30

    }; // Size: 0x38

    struct clipActionRecord_t
    {
        unsigned int flags; // Offset: 0x0

        unsigned int dataSize; // Offset: 0x4

        unsigned char* data; // Offset: 0x8

    }; // Size: 0x10

    struct rarelyAccessedData
    {
        idList < idSWFSpriteInstance::tween_t , TAG_SWF , false > tweens; // Offset: 0x0

        // Waiting related data
        bool triggerWait; // Offset: 0x18

        bool isWaiting; // Offset: 0x19

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > waitDuration; // Offset: 0x20

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > resumeTime; // Offset: 0x28

        // This allows alpha to be adjusted independently of fading handled by game code/actionscript Use only by 1 reticle HUD element apparently.
        float alphaOverride; // Offset: 0x30

        // This is to allow sprites to "pop out" of the screen This is only useful in stereoscopic rendering or in-world
        float z; // Offset: 0x34

        // Color tweening timers. Seems to be very rare.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startNamedColorTime; // Offset: 0x38

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endNamedColorTime; // Offset: 0x40

        int nextNamedColorId; // Offset: 0x48

        // Action records. Seems to be very rare (didn't see any in testing, but that doesn't rule out *something* using it.
        idList < idSWFSpriteInstance::clipActionRecord_t , TAG_SWF , false > actionRecords; // Offset: 0x50

        // Moved these both into rarely modified data. We spend a lot of time simply checking onEnterFrame.IsFunction(). Let's cache that data and avoid that expense.
        bool onEnterFrameIsFunction; // Offset: 0x68

        idSWFScriptVar onEnterFrame; // Offset: 0x70

        // specially named sprite instances (such as _left) may have an offset applied to them
        float xOffset; // Offset: 0x80

        float yOffset; // Offset: 0x84

    }; // Size: 0x88

    struct swfAction_t
    {
        unsigned char* data; // Offset: 0x0

        unsigned int dataLength; // Offset: 0x8

    }; // Size: 0x10

    struct swfActionAS3_t
    {
        unsigned int frame; // Offset: 0x0

        idSWFScriptFunction* asMethod; // Offset: 0x8

    }; // Size: 0x10

    struct placeObject2Data_t
    {
        unsigned long long flags; // Offset: 0x0

        int depth; // Offset: 0x8

        int characterID; // Offset: 0xC

        idStr name; // Offset: 0x10

        swfMatrix_t matrix; // Offset: 0x40

        swfColorXform_t cxf; // Offset: 0x58

        float ratio; // Offset: 0x78

        unsigned short clipDepth; // Offset: 0x7C

    }; // Size: 0x80

    struct placeObject3Data_t
    {
        unsigned long long flags; // Offset: 0x0

        unsigned short blendMode; // Offset: 0x8

        swfFilterList_t* filterList; // Offset: 0x10

    }; // Size: 0x18

    // Removing the private access control statement due to cl 214702 Apparently MS's C++ compiler supports the newer C++ standard, and GCC supports C++03 In the new C++ standard, nested members of a friend class have access to private/protected members of the class granting friendship In C++03, nested members defined in a friend class do NOT have access to private/protected members of the class granting friendshipfriend class idSWF;
    int visIndex; // Offset: 0x8

    int flatTransformIndex; // Offset: 0xC

    // These are shared for the entire tree. Moved here to reduce size of SWFSpriteInstance and hopefully improve cache performance.
    idSWFSpriteInstance::treeRootData* rootData; // Offset: 0x10

    // name of this sprite instance
    idAtomicString name; // Offset: 0x18

    int fullPathHash; // Offset: 0x20

    // this sprite instance's script object
    idSWFScriptSprite* scriptObject; // Offset: 0x28

    // swf this sprite instance is from Technically, this is shared throughout the tree structure, but is left out of the shared data to avoid cache misses on its frequent use in the SpriteInstance code.
    idSWF* swf; // Offset: 0x30

    // pointer to a dictionary entry in the swf
    idSWFSprite* sprite; // Offset: 0x38

    // parent sprite instance (will be NULL only for the root sprite instance)
    idSWFSpriteInstance* parent; // Offset: 0x40

    // depth of this sprite instance in the parent's display list
    int depth; // Offset: 0x48

    spriteAlignmentType_t alignmentType; // Offset: 0x4C

    bool isPlaying; // Offset: 0x50

    bool isVisible; // Offset: 0x51

    bool visibilityRestricted; // Offset: 0x52

    bool firstRun; // Offset: 0x53

    // Flags to control rendering of certain sprites
    int spriteFlags; // Offset: 0x54

    // currentFrame is the frame number currently in the displayList we use 1 based frame numbers because currentFrame = 0 means nothing is in the display list it's also convenient because Flash also uses 1 based frame numbers
    unsigned short currentFrame; // Offset: 0x58

    unsigned short frameCount; // Offset: 0x5A

    unsigned short frameMax; // Offset: 0x5C

    // Exclude this sprite (and, implicitly, its children) from SWF dimming. Useful for "dim everything but 'x'" type scenarios.
    bool dimExclude; // Offset: 0x5E

    // if this is set, apply this material when rendering any child shapes
    idMaterial2* materialOverride; // Offset: 0x60

    unsigned short materialWidth; // Offset: 0x68

    unsigned short materialHeight; // Offset: 0x6A

    // have to cache this in the sprite instance in case the color profile changes
    int namedColorId; // Offset: 0x6C

    // children display entries
    idList < swfDisplayEntry_t , TAG_SWF , false > displayList; // Offset: 0x70

    idSWFSpriteInstance::rarelyAccessedData* rare; // Offset: 0x88

    // Last known transform, calculated at render time and stored in case we want world coords
    swfMatrix_t absoluteTransform; // Offset: 0x90

    swfRect_t bounds; // Offset: 0xA8

    int lastActionFrame; // Offset: 0xB8

    bool deferredActionScript3Alloc; // Offset: 0xBC

    idList < swfAction_t , TAG_SWF , false > actions; // Offset: 0xC0

    idList < idSWFSpriteInstance::swfActionAS3_t , TAG_SWF , false > as3Actions; // Offset: 0xD8

    idSWFScriptFunctionAS* actionScript; // Offset: 0xF0

    // ID's used for tutorial walkthroughs
    idStr walkthroughID; // Offset: 0xF8

    swfFilterList_t* filterList; // Offset: 0x128

}; // Size: 0x130
