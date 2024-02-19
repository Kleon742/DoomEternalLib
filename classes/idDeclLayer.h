struct idDeclLayer : idDeclTypeInfo
{
    // The parent of this layer.
    idDeclLayer* layerParent; // Offset: 0x88

    // Meta-data used in idStudio in the Layer Browser.
    idStr layerType; // Offset: 0x90

}; // Size: 0xC0
