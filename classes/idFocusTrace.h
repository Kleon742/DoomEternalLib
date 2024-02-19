struct idFocusTrace
{
    // starting point of the trace {{ units = m }}
    idVec3 start; // Offset: 0x0

    // intermediate trace where box trace ends {{ units = m }}
    idVec3 close; // Offset: 0xC

    // desired end point of the trace {{ units = m }}
    idVec3 end; // Offset: 0x18

    // distance trace went before hitting something {{ units = m }}
    float distance; // Offset: 0x24

    // true if the trace distance was within the default usable distance
    bool closeEnough; // Offset: 0x28

    // entity the trace hit
    idManagedClassPtr < idEntity > ent; // Offset: 0x30

    // havok'd
    idHavokQueryId boundsTrace; // Offset: 0x50

    // havok'd
    idHavokQueryId pointTrace; // Offset: 0x58

    // the results of the trace as returned by the collision system
    trace_t tr; // Offset: 0x60

}; // Size: 0xE0
