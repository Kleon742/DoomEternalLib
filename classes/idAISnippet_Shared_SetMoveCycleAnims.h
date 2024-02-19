struct idAISnippet_Shared_SetMoveCycleAnims : idAISnippet
{
    struct moveCycleAnimPath_t
    {
        // walkstate
        walkState_t walkstate; // Offset: 0x0

        // anim
        idAnimWebPath_Atomic anim; // Offset: 0x8

    }; // Size: 0x48

    // the move cycle anims, if this is empty it will clear the current anims
    idList < idAISnippet_Shared_SetMoveCycleAnims::moveCycleAnimPath_t , TAG_IDLIST , false > moveCycleAnims; // Offset: 0x18

}; // Size: 0x30
