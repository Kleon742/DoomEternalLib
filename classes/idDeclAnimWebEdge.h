struct idDeclAnimWebEdge
{
    enum edgeFlags_t : int
    {
        EDGEFLAG_RANDOM_WEIGHT = 1
    };

    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > destSubWebIndex; // Offset: 0x8

    // idAnimWeb::NodeIndex_tdestNodeIndex; uint8weightScale; boolrandomizeWeight;
    idBlendParms blendParms; // Offset: 0x10

    // custom enumerated flags for edges
    unsigned short customFlags; // Offset: 0x38

}; // Size: 0x40
