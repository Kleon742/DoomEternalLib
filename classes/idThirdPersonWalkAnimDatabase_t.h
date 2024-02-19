struct idThirdPersonWalkAnimDatabase_t
{
    // Allows for 8 sets of 9 animations turns on the new mp motion animation blending system.
    bool useWalkAnimDatabase; // Offset: 0x0

    // Array of all states with custom playback data, the first one will be used as a default...
    idArray < idThirdPersonWalkAnimState_t , 72 > states; // Offset: 0x8

}; // Size: 0xB48
