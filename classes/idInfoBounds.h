struct idInfoBounds : idInfo
{
    // bounds to render
    idBounds bounds; // Offset: 0xB90

    // color of bounds
    idColor color; // Offset: 0xBA8

    // if true this info/bounds will show the bounds specified by the g_globalBounds cvar
    bool showGlobalBounds; // Offset: 0xBB8

}; // Size: 0xBC0
