struct idInfoTexLod : idInfo
{
    // model represent a walkable surface
    bool walkableSurface; // Offset: 0xB90

    // relative size of step. Lower value -> more samples
    float stepSize; // Offset: 0xB94

}; // Size: 0xB98
