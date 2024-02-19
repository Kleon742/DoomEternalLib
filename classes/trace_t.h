struct trace_t
{
    // fraction of movement completed, 1.0 = didn't hit anything
    float fraction; // Offset: 0x0

    // final position of trace model {{ units = m }}
    idVec3 endpos; // Offset: 0x4

    // final axis of trace model
    idMat3 endAxis; // Offset: 0x10

    // contact information, only valid if fraction < 1.0
    contactInfo_t c; // Offset: 0x34

}; // Size: 0x80
