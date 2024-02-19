struct idAnimSysNodeData_Lipsync : idAnimSysNodeData
{
    enum lidDeformation_t : int
    {
        LID_DEFORM_NONE = 0,
        LID_DEFORM_FIRST = 1,
        LID_DEFORM_UP = 1,
        LID_DEFORM_DOWN = 2,
        LID_DEFORM_RIGHT = 3,
        LID_DEFORM_LEFT = 4,
        LID_DEFORM_MAX = 5
    };

    // Layer name to play this node on;
    idAtomicString preferredLayerName; // Offset: 0xB8

    // maps moods to md6 animations
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > moodTable[9]; // Offset: 0xC0

    // animation alias to play for a blink
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > blinkAlias; // Offset: 0xD2

    // aliases for deforming eye lids based on eye position
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > lidDeformationAliases[5]; // Offset: 0xD4

    // Don't print warnings
    bool suppressWarnings; // Offset: 0xDE

}; // Size: 0xE0
