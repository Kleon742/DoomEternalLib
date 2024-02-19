struct idAnimWebModelInfo
{
    // index of the model in the idDeclAnimWeb
    idIndex < short , idAnimWeb::invalidModelIndex_t , - 1 > modelIndex; // Offset: 0x0

    // blend equation specifying the blend tree for the model
    idAtomicString blendEq; // Offset: 0x8

    // the fixed-up blend equation (variable names replaced with animation)
    idAtomicString blendEqFixed; // Offset: 0x10

    // animation handle and other properties for each animation in the blend tree
    idList < idMD6AnimProps , TAG_DECL_ANIMWEB , false > animProps; // Offset: 0x18

    // animProp coordinates used in blend equations
    idList < float , TAG_DECL_ANIMWEB , false >* coordinates; // Offset: 0x30

    idList < idDeclAnimWebTagGroup , TAG_DECL_ANIMWEB , false >* tagGroups; // Offset: 0x38

}; // Size: 0x40
