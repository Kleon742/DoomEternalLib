struct cm_vertex_t
{
    // vertex position {{ units = m }}
    idVec3 p; // Offset: 0x0

    // texture coordinates (not used, but makes the struct 16 bytes long)
    unsigned short st[2]; // Offset: 0xC

}; // Size: 0x10
