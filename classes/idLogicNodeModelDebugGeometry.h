struct idLogicNodeModelDebugGeometry : idLogicNodeModel
{
    // Origin type
    logicDebugGeometryOriginType_t originType; // Offset: 0x10

    // Geometries
    idList < idTypeInfoObjectPtr < idLogicDebugGeometry > , TAG_LOGIC , false > geometries; // Offset: 0x18

}; // Size: 0x30
