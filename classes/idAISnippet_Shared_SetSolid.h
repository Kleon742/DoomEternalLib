struct idAISnippet_Shared_SetSolid : idAISnippet
{
    // if true, set collision flags to ALL_AI_COLLISION_FLAGS; if false, clear these flags
    bool setSolid; // Offset: 0x18

    // if true, also update sphere model according to m_setSolid ( CONTENTS_SHOTCLIP or 0 )
    bool setSphereModelContents; // Offset: 0x19

}; // Size: 0x20
