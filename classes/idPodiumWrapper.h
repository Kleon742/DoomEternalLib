struct idPodiumWrapper : idBloatedEntity
{
    enum podiumWrapperAnimation_t : int
    {
        PODIUM_WRAPPER_ANIM_NONE = -1,
        PODIUM_WRAPPER_ANIM_IDLE = 0,
        PODIUM_WRAPPER_ANIM_INTRO = 1,
        PODIUM_WRAPPER_ANIM_VICTORY = 2
    };

    idCharacterPodium wrappedPodium; // Offset: 0xB88

    bool activated; // Offset: 0xD18

    idPodiumWrapper::podiumWrapperAnimation_t cachedAnimation; // Offset: 0xD1C

}; // Size: 0xD20
