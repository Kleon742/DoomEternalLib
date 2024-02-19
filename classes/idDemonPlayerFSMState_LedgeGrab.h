struct idDemonPlayerFSMState_LedgeGrab : idDemonPlayerFSMState < idDemonPlayer >
{
    // copy these off to ensure they don't get stomped
    idDemonLedgeGrabComponent::ledgeGrabState_t ledgeGrabState; // Offset: 0x30

    // {{ units = m }}
    idVec3 ledgePos; // Offset: 0x34

}; // Size: 0x40
