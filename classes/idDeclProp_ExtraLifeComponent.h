struct idDeclProp_ExtraLifeComponent : idDeclProp_UseComponent
{
    // How many lives should this pickup give the player?
    int lives; // Offset: 0x130

    // codex to give.
    idDeclCodexEntry* codexDecl; // Offset: 0x138

}; // Size: 0x140
