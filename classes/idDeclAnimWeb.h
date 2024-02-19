struct idDeclAnimWeb : idDecl
{
    enum nodeProps_t : int
    {
        NP_ANIM = 0,
        NP_WRAP = 1,
        NP_RATE = 2,
        NP_DELTA = 3,
        NP_BLENDEQ = 4,
        NP_TRANSITION = 5,
        NP_MAX = 6
    };

    enum subWebBlend_t : int
    {
        SUBWEBBLEND_USE_SOURCE_NODE = 0,
        SUBWEBBLEND_ALWAYS_BLEND_OUT_ANYWHERE = 1,
        SUBWEBBLEND_MAX = 2
    };

    enum graphTool_t : int
    {
        OLD_DECL_EDITOR = 0,
        NEW_DECL_EDITOR = 1,
        COUNT = 2
    };

    struct stateList_t
    {
        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > stateIndex[4]; // Offset: 0x0

        unsigned short numStates; // Offset: 0x8

    }; // Size: 0xA

    struct idEdgeCache
    {
        // destination for an edge
        idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > destNodeIndex; // Offset: 0x0

        // amount to scale edge weight
        unsigned char weightScale; // Offset: 0x2

        // edge flags
        unsigned char flags; // Offset: 0x3

    }; // Size: 0x4

    struct idModelAnimInfo
    {
        // name for the sub model.
        idAtomicString animSetName; // Offset: 0x0

        // model this web animates.
        idDeclMD6* model; // Offset: 0x8

    }; // Size: 0x10

    struct idNodeCache
    {
        // number of edges this node has
        unsigned short numEdges; // Offset: 0x0

        // padding
        unsigned char pad2; // Offset: 0x2

        // offset of edge indices in the edge index cache
        ptrdiff_t edgeIndexOffset; // Offset: 0x8

    }; // Size: 0x10

    struct idLayerInfo
    {
        // name of the layer
        idAtomicString name; // Offset: 0x0

        // list of subwebs on this layer
        idList < idAtomicString , TAG_IDLIST , false > subWebsOnLayer; // Offset: 0x8

        // true if the layer is visible in the animweb editor
        bool isVisible; // Offset: 0x20

    }; // Size: 0x28

    struct idSubWebInfo
    {
        // indices of nodes that are in this sub-web
        idList < idIndex < idAnimWeb::NodeIndexType , idAnimWeb::invalidNodeIndex_t > , TAG_DECL_ANIMWEB , false > nodes; // Offset: 0x0

        // name of the sub-web
        idAtomicString name; // Offset: 0x18

        // color for nodes in this sub-web
        idColor color; // Offset: 0x20

        // true if this sub-web is considered a hub that should always be pathable
        bool isHub; // Offset: 0x30

        // true if this sub-web should be rendered in the animweb editor
        bool isVisible; // Offset: 0x31

        // scratch for determining when a sub-web name is no longer referenced by an nodes
        bool used; // Offset: 0x32

    }; // Size: 0x38

    struct idSettings
    {
        // last position of the edit camera when this decl was edited {{ units = m }}
        idVec3 editPos; // Offset: 0x0

        // size of the grid {{ units = m }}
        float gridSize; // Offset: 0xC

        // true if nodes should be snapped to the grid
        bool snapToGrid; // Offset: 0x10

        // true if the grid should be drawn
        bool showGrid; // Offset: 0x11

        // true to always show links that don't cross subweb boundaries
        bool alwaysShowIntraSubwebLinks; // Offset: 0x12

        // true to always show node props, instead of only when selected
        bool alwaysShowNodeProps; // Offset: 0x13

        // true to show "hints" instead of all the node properties
        bool showAbbreviatedNodeProps; // Offset: 0x14

        // true to show incoming blend links from other subwebs
        bool showIncomingLinks; // Offset: 0x15

        // true if the composite web should merge models and model infos, if false, the models in the composite web will be used explicitly
        bool mergeModels; // Offset: 0x16

        // true to show the corresponding property on nodes
        bool nodeProps[6]; // Offset: 0x17

        // a default blend out will start this many frames from the end of the source animation
        int defaultBlendOutWindow; // Offset: 0x20

        // a default blend out will occur over this many frames
        int defaultBlendDuration; // Offset: 0x24

        // the default blend type
        long long defaultBlendType; // Offset: 0x28

        // how to set up blends to subwebs
        long long subWebBlend; // Offset: 0x30

    }; // Size: 0x38

    idDeclAnimWeb::graphTool_t graphTool; // Offset: 0x78

    // all nodes in the web
    idList < idDeclAnimWebNode * , TAG_DECL_ANIMWEB , false > nodes; // Offset: 0x80

    // list of names for each sub-web in the web
    idList < idDeclAnimWeb::idSubWebInfo , TAG_DECL_ANIMWEB , false > subWebs; // Offset: 0x98

    // hashes for names of subwebs for faster searching
    idList < unsigned int , TAG_DECL_ANIMWEB , false > subWebNameHashes; // Offset: 0xB0

    // list of all states
    idList < idAtomicString , TAG_DECL_ANIMWEB , false > states; // Offset: 0xC8

    // hashes for names of states for faster searching
    idList < unsigned int , TAG_DECL_ANIMWEB , false > stateNameHashes; // Offset: 0xE0

    // list of models this web animates
    idList < idDeclAnimWeb::idModelAnimInfo , TAG_DECL_ANIMWEB , false > models; // Offset: 0xF8

    // edge properties
    idList < idDeclAnimWebEdge , TAG_DECL_ANIMWEB , false > edges; // Offset: 0x110

    // edge properties made cache-friendly for pathing
    idList < idDeclAnimWeb::idEdgeCache , TAG_DECL_ANIMWEB , false > edgeCache; // Offset: 0x128

    // node properties made cache-friendly for pathing
    idList < idDeclAnimWeb::idNodeCache , TAG_DECL_ANIMWEB , false > nodeCache; // Offset: 0x140

    // scalar variables
    idList < idAnimWebScalar , TAG_DECL_ANIMWEB , false > scalars; // Offset: 0x158

    // layers in this sub-web
    idList < idDeclAnimWeb::idLayerInfo , TAG_DECL_ANIMWEB , false > layers; // Offset: 0x170

    // edge indices for each node in a flat array for cache coherency during pathing
    idIndex < short , idAnimWeb::invalidEdgeIndex_t , - 1 >* edgeIndexCache; // Offset: 0x188

    // nodeallocator for the static blendtrees
    idMD6Allocator* nodeAllocator; // Offset: 0x190

    // size of the edge index cache
    unsigned int edgeIndexCacheSize; // Offset: 0x198

    // this gets incremented each time a change is so that systems referencing the web can re-initialize on a change
    int changeId; // Offset: 0x19C

    // if true, links to sub-webs without specific states will turned into multiple links to nodes in the sub-web after parse
    bool expandSubWebLinks; // Offset: 0x1A0

    // settings used only for the anim web editor tool
    idDeclAnimWeb::idSettings settings; // Offset: 0x1A8

}; // Size: 0x1E0
