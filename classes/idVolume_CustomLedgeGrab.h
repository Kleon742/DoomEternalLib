struct idVolume_CustomLedgeGrab : idVolume
{
    // body animation to grab and pull up from below
    idAtomicHandleT < aliasRefType_t > animPullUp; // Offset: 0xC20

    // body animation to grab and push up from above
    idAtomicHandleT < aliasRefType_t > animMantle; // Offset: 0xC28

    // body animation to grab at the foot level
    idAtomicHandleT < aliasRefType_t > animFoot; // Offset: 0xC30

    // constrain view to a cone centered on the face normal to the detected ledge
    bool constrainView; // Offset: 0xC38

    // custom ledge grab ends on the ground
    bool endsOnGround; // Offset: 0xC39

}; // Size: 0xC40
