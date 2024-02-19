struct idDeclTypeInfoGraph : idDeclTypeInfo
{
    enum invalidConfigIndex_t : int
    {
        INVALID_CONFIG_INDEX = -1
    };

    enum invalidLayerIndex_t : int
    {
        INVALID_LAYER_INDEX = -1
    };

    enum graphTool_t : int
    {
        OLD_DECL_EDITOR = 0,
        NEW_DECL_EDITOR = 1,
        COUNT = 2
    };

    struct idContextMenuItemBase
    {
        idStr description; // Offset: 0x8

        bool isEnabled; // Offset: 0x38

        bool isChecked; // Offset: 0x39

    }; // Size: 0x40

    struct idContextMenuItemMain : idDeclTypeInfoGraph::idContextMenuItemBase
    {
        void (*callback)(idDeclTypeInfoGraph * graph); // Offset: 0x40

    }; // Size: 0x48

    struct idContextMenuItemSubGraph : idDeclTypeInfoGraph::idContextMenuItemBase
    {
        void (*callback)(idDeclTypeInfoGraph * graph , const idList < idTypeInfoSubGraph * > & selectedSubGraphs); // Offset: 0x40

    }; // Size: 0x48

    struct idContextMenuItemNode : idDeclTypeInfoGraph::idContextMenuItemBase
    {
        void (*callback)(idDeclTypeInfoGraph * graph , const idList < idTypeInfoGraphNode * > & selectedNodes); // Offset: 0x40

    }; // Size: 0x48

    struct idContextMenuItemLink : idDeclTypeInfoGraph::idContextMenuItemBase
    {
        void (*callback)(idDeclTypeInfoGraph * graph , const idList < idTypeInfoGraphLink * > & selectedLinks); // Offset: 0x40

    }; // Size: 0x48

    struct idLayersConfig
    {
        // Name of the layer confif
        idAtomicString name; // Offset: 0x0

        // Layer mask
        typeInfoGraphLayersMask_t layersMask; // Offset: 0x8

    }; // Size: 0x10

    typedef void (*mainContextMenuCallback_t)(idDeclTypeInfoGraph * graph);

    typedef void (*subGraphContextMenuCallback_t)(idDeclTypeInfoGraph * graph , const idList < idTypeInfoSubGraph * > & selectedSubGraphs);

    typedef void (*nodeContextMenuCallback_t)(idDeclTypeInfoGraph * graph , const idList < idTypeInfoGraphNode * > & selectedNodes);

    typedef void (*linkContextMenuCallback_t)(idDeclTypeInfoGraph * graph , const idList < idTypeInfoGraphLink * > & selectedLinks);

    typedef idGrowableList < idTypeInfoGraphLink * , 64 > baseLinks_t;

    typedef idGrowableList < const idTypeInfoGraphLink * , 64 > baseConstLinks_t;

    typedef idIndex < int , idDeclTypeInfoGraph::invalidConfigIndex_t > configIndex_t;

    typedef idIndex < int , idDeclTypeInfoGraph::invalidLayerIndex_t > layerIndex_t;

    // a list of available layers
    idList < idAtomicString , TAG_IDLIST , false > layers; // Offset: 0x88

    // a list of available layers configurations
    idList < idDeclTypeInfoGraph::idLayersConfig , TAG_IDLIST , false > layersConfigs; // Offset: 0xA0

    // tool used to save graph
    idDeclTypeInfoGraph::graphTool_t graphTool; // Offset: 0xB8

    // subgraphs
    idList < idTypeInfoSubGraph * , TAG_IDLIST , false > subGraphs; // Offset: 0xC0

    // links
    idList < idTypeInfoGraphLink * , TAG_IDLIST , false > links; // Offset: 0xD8

    // Indicates whether a link is being created
    bool linkBeingCreated; // Offset: 0xF0

}; // Size: 0xF8
