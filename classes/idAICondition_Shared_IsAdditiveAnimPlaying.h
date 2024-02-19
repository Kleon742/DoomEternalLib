struct idAICondition_Shared_IsAdditiveAnimPlaying : idAICondition
{
    struct isAdditiveAnimPlayingData_t
    {
        // anim to play
        idAtomicString animKey; // Offset: 0x0

        // desired alpha to be considered "playing"
        float desiredAlpha; // Offset: 0x8

    }; // Size: 0x10

    // anim to play, randomly selected
    idList < idAICondition_Shared_IsAdditiveAnimPlaying::isAdditiveAnimPlayingData_t , TAG_IDLIST , false > anims; // Offset: 0x18

}; // Size: 0x30
