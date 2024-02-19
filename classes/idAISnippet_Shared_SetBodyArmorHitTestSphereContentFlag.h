struct idAISnippet_Shared_SetBodyArmorHitTestSphereContentFlag : idAISnippet
{
    // set contentflag to the hittest group
    contentsFlags_t flag; // Offset: 0x18

    // if true enable damage group for armor hittest collection else body hittest group.
    bool isArmorGroup; // Offset: 0x1C

}; // Size: 0x20
