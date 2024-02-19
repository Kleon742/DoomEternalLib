struct layerState_t
{
    idDeclLayer* layer; // Offset: 0x0

    // Rendermodel Visibility
    bool visible; // Offset: 0x8

    // Entity Dormancy
    bool dormant; // Offset: 0x9

    // geom streaming on/off
    bool geomStreaming; // Offset: 0xA

    // Spawn State of the entities in this layer
    gameLayerState_t spawnState; // Offset: 0xC

}; // Size: 0x10
