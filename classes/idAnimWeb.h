struct idAnimWeb
{
    enum invalidEdgeIndex_t : int
    {
        INVALID_EDGE_INDEX = -1
    };

    enum invalidNodeIndex_t : int
    {
        INVALID_NODE_INDEX = -1
    };

    enum invalidSubWebIndex_t : int
    {
        INVALID_SUBWEB_INDEX = -1
    };

    enum invalidStateIndex_t : int
    {
        INVALID_STATE_INDEX = -1
    };

    enum invalidModelIndex_t : int
    {
        INVALID_MODEL_INDEX = -1
    };

    enum invalidModelNodeIndex_t : int
    {
        INVALID_MODEL_NODE_INDEX = -1
    };

    enum invalidLayerIndex_t : int
    {
        INVALID_LAYER_INDEX = -1
    };

    typedef short EdgeIndexType;

    typedef short NodeIndexType;

    typedef short SubWebIndexType;

    typedef short StateIndexType;

    typedef short ModelIndexType;

    typedef short ModelNodeIndexType;

    typedef short LayerIndexType;

    typedef idIndex < idAnimWeb::EdgeIndexType , idAnimWeb::invalidEdgeIndex_t > EdgeIndex_t;

    typedef idIndex < idAnimWeb::NodeIndexType , idAnimWeb::invalidNodeIndex_t > NodeIndex_t;

    typedef idIndex < idAnimWeb::SubWebIndexType , idAnimWeb::invalidSubWebIndex_t > SubWebIndex_t;

    typedef idIndex < idAnimWeb::StateIndexType , idAnimWeb::invalidStateIndex_t > StateIndex_t;

    typedef idIndex < idAnimWeb::ModelIndexType , idAnimWeb::invalidModelIndex_t > ModelIndex_t;

    typedef idIndex < idAnimWeb::ModelIndexType , idAnimWeb::invalidModelIndex_t > ModelNodeIndex_t;

    typedef idIndex < idAnimWeb::LayerIndexType , idAnimWeb::invalidLayerIndex_t > LayerIndex_t;

}; // Size: 0x0
