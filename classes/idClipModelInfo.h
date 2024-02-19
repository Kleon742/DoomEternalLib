struct idClipModelInfo
{
    enum clipModelType_t : int
    {
        CLIPMODEL_NONE = 0,
        CLIPMODEL_RENDERMODEL = 1,
        CLIPMODEL_AUTO = 2,
        CLIPMODEL_CUSTOM = 3,
        CLIPMODEL_BOX = 4,
        CLIPMODEL_CYLINDER = 5,
        CLIPMODEL_CONE = 6,
        CLIPMODEL_DODECAHEDRON = 7,
        CLIPMODEL_CAPSULE = 8,
        CLIPMODEL_SPHERE = 9,
        CLIPMODEL_RENDERMODEL_BOUNDS = 10,
        CLIPMODEL_PENCIL = 11
    };

    struct idClipModelFilter
    {
        // if set, will allow collision with player
        bool playerClip; // Offset: 0x0

        // if set, will allow collision with monsters (and possibly contribute to autoAAS)
        bool monsterClip; // Offset: 0x0

        // if set, will allow collision with moveables
        bool moveableClip; // Offset: 0x0

        // if set, will allow collision with projectiles
        bool shotClip; // Offset: 0x0

        // if set, will allow collision with ik
        bool ikClip; // Offset: 0x0

        // if set, will allow collision for AI visilibity purposes
        bool opaqueClip; // Offset: 0x0

        // if set, will allow collision for projectiles that specify a team value (mp)
        bool allTeamsShotClip; // Offset: 0x0

    }; // Size: 0x1

    // voidSetType( clipModelType_t newType ){ type = newType; } voidSetSize( idVec3newSize ){ size = newSize; } voidSetOffset( idVec3 newOffset ){ offset = newOffset; } voidSetNumSides( int num ){ numSides = num; } voidSetShouldShrink( bool shrink ){ clipShrink = shrink; } voidSetAllowInline( bool in ){ allowInline = in; } voidSetIsSoftObstacle( bool soft ){ softObstacle = soft; } voidSetMaterial( idMaterial2 * material ){ overrideClipMaterial = material; } voidSetName( char * name ){ clipModelName = name; }  const clipModelType_t GetType() const { return type; } private: clip model type
    idClipModelInfo::clipModelType_t type; // Offset: 0x0

    // flags to disable some collision contents during compile
    idClipModelInfo::idClipModelFilter contentsFilter; // Offset: 0x4

    // bounds size for box, cylinder or cone type {{ units = m }}
    idVec3 size; // Offset: 0x8

    // offset the bounding box {{ units = m }}
    idVec3 offset; // Offset: 0x14

    // number of sides for cylinder or cone type
    int numSides; // Offset: 0x20

    // name of collision model, defaults to modelName if empty
    idStrClipModel clipModelName; // Offset: 0x28

    // shrink the clip model
    bool clipShrink; // Offset: 0x30

    // allow this collision model to be inlined
    bool allowInline; // Offset: 0x31

    // if entity's clip model has CONTENTS_OBSTACLE, the clip model acts like a dynamic obstacle as long as the AI's goal is not inside of it
    bool softObstacle; // Offset: 0x32

    // add CONTENTS_OBSTACLE to clip model at spawn time
    bool forceObstacle; // Offset: 0x33

    // simplify percentage (100 is no simplify, 0 is use default) (havok related)
    unsigned char simplify; // Offset: 0x34

    // override the clip material
    idMaterial2* overrideClipMaterial; // Offset: 0x38

    // allows clipmodel to be offset as defined above (otherwise, "offset" is ignored due to "unfix collision offset bug" (whatever that is) - see CL 47619
    bool ignoreUnfixCollisionOffsetBug; // Offset: 0x40

    // convex decomposition setting (havok related)
    convexDecomposition_t convexDecomposition; // Offset: 0x44

    idClipModelInfo* next; // Offset: 0x50

}; // Size: 0x58
