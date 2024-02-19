struct idAutoMapObject : idClass
{
    enum type_t : int
    {
        NONE = 0,
        PROP2 = 1,
        INTERACTABLE = 2,
        INTERACTABLE_AUTOMAP_STATION = 3,
        INTERACTABLE_COLL_VIEWER = 4,
        INTERACTABLE_SLAYER_GATE = 5,
        MAX_PLAYER_REVEALED_TYPE = 5,
        MAP_SECTION = 6,
        ENCOUNTER = 7,
        OBJECTIVE = 8,
        FAST_TRAVEL = 9,
        UNKNOWN_SLAYER = 10,
        MIN_SLAYER_OR_DEMON_TYPE = 10,
        UNKNOWN_DEMON = 11,
        LOCAL_SLAYER = 12,
        LOCAL_DEMON = 13,
        REMOTE_SLAYER = 14,
        MIN_REMOTE_SLAYER_OR_DEMON_TYPE = 14,
        REMOTE_DEMON = 15,
        INVASION_SPAWN = 16
    };

    enum state_t : int
    {
        HIDDEN = 0,
        REVEALED = 1,
        DISCOVERED = 2,
        COMPLETED = 3,
        NUM_STATES = 4
    };

    struct renderParms_t
    {
        char* renderModelName; // Offset: 0x0

        char* discoveredRenderModelName; // Offset: 0x8

        idMaterial2* renderMaterial; // Offset: 0x10

        idMaterial2* discoveredRenderMaterial; // Offset: 0x18

        bool billboard; // Offset: 0x20

        bool spin; // Offset: 0x21

        bool bob; // Offset: 0x22

        bool usesFogOfWar; // Offset: 0x23

        bool useZoomScaling; // Offset: 0x24

        idVec3 scale; // Offset: 0x28

        idVec3 minScale; // Offset: 0x34

        idVec3 maxScale; // Offset: 0x40

        float minDistance; // Offset: 0x4C

        float maxDistance; // Offset: 0x50

        idVec3 originOffset; // Offset: 0x54

        idColor colors[3]; // Offset: 0x60

    }; // Size: 0x90

    struct revealParms_t
    {
        bool discoverableBeforeCollected; // Offset: 0x0

        bool persistentDiscoveredAfterCollected; // Offset: 0x1

        float objectRevealRadius; // Offset: 0x4

        float fogOfWarRevealRadiusNotTraversedOnReveal; // Offset: 0x8

        float fogOfWarRevealRadiusTraversedOnReveal; // Offset: 0xC

        float fogOfWarVerticalReveal; // Offset: 0x10

    }; // Size: 0x14

    // Type of object
    idAutoMapObject::type_t type; // Offset: 0x10

    bool isActive; // Offset: 0x14

    // Rendering properties
    idRenderModel* renderModel; // Offset: 0x18

    idRenderModel* discoveredRenderModel; // Offset: 0x20

    // Same as m_renderModel or m_discoveredRenderModel.
    idRenderModel* currentRenderModel; // Offset: 0x28

    idMaterial2* renderMaterial; // Offset: 0x30

    idMaterial2* discoveredRenderMaterial; // Offset: 0x38

    // Value is m_renderMaterial or m_discoveredRenderMaterial depending on m_state.
    idMaterial2* currentRenderMaterial; // Offset: 0x40

    bool billboard; // Offset: 0x48

    bool spin; // Offset: 0x49

    bool bob; // Offset: 0x4A

    // If true, this object is affected by fog-of-war.
    bool usesFogOfWar; // Offset: 0x4B

    float spinVal; // Offset: 0x4C

    // Zoom scaling: min render model scale
    idVec3 minScale; // Offset: 0x50

    // Zoom scaling: max render model scale
    idVec3 maxScale; // Offset: 0x5C

    // Zoom scaling: linear Z distance where minScale is used
    float minDistance; // Offset: 0x68

    // Zoom scaling: linear Z distance where maxScale is used
    float maxDistance; // Offset: 0x6C

    // Offset of render model's origin from entity origin
    idVec3 originOffset; // Offset: 0x70

    // Color of icon for each state other than HIDDEN
    idColor colors[3]; // Offset: 0x7C

    // The entity corresponding to this object in the map (may become invalid due to layer manager).
    idManagedClassPtr < idEntity > entity; // Offset: 0xB0

    // Cached entity name
    idStr entityName; // Offset: 0xD0

    // Cached entity origin
    idVec3 entityOrigin; // Offset: 0x100

    // Cached entity axis
    idMat3 entityAxis; // Offset: 0x10C

    // Cached entity IsHidden(). If entity is hidden, keep this object hidden.
    bool entityIsHidden; // Offset: 0x130

    idAutoMapObject::state_t state; // Offset: 0x134

    // TODO: these parms are only set and used by idAutomap, could move into that class
    idAutoMapObject::revealParms_t revealParms; // Offset: 0x138

}; // Size: 0x150
