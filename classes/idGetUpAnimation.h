struct idGetUpAnimation
{
    // anim itself
    idMD6Anim* getUpAnim; // Offset: 0x0

    // Anim orientation of this joint from the specified 'getup' joint list
    idList < idQuat , TAG_IDLIST , false > jointOrientations; // Offset: 0x8

}; // Size: 0x20
