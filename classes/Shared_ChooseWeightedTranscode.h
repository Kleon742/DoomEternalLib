struct Shared_ChooseWeightedTranscode : idAIStateTransition
{
    struct transcodeInfo_t
    {
        // weight of the entry
        float weight; // Offset: 0x0

        // transcode associated to the entry
        aiTransCode_t transcode; // Offset: 0x4

    }; // Size: 0x8

    // available options for the transition
    idList < Shared_ChooseWeightedTranscode::transcodeInfo_t , TAG_AI_FSM , false > infos; // Offset: 0xF8

}; // Size: 0x110
