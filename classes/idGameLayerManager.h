struct idGameLayerManager
{
    idList < layerState_t , TAG_IDLIST , false > layers_ActiveLayers; // Offset: 0x0

    idList < layerState_t , TAG_IDLIST , false > layers_Spawn_OnNextMapLoad; // Offset: 0x18

    idList < layerState_t , TAG_IDLIST , false > layers_Kill_OnNextMapLoad; // Offset: 0x30

    idList < layerState_t , TAG_IDLIST , false > layers_SetRenderModelVisibility_OnNextMapLoad; // Offset: 0x48

    idList < layerState_t , TAG_IDLIST , false > layers_SetDormancyState_OnNextMapLoad; // Offset: 0x60

    idList < layerState_t , TAG_IDLIST , false > layers_SetGeomCacheStreamState_OnNextMapLoad; // Offset: 0x78

    // Hierarchy
    idListMap < const idDeclLayer * , layerNode_t * > layers; // Offset: 0x90

}; // Size: 0xC0
