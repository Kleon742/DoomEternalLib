struct idCVarProxy
{
    // This is the only bit of information we need to store separately. So we can match an idCVarProxy with its idCVar during LocalInit().
    char* name; // Offset: 0x0

    // This will need to access m_principal to seamlessly connect to the proxy'd cvar. Next cvar in the static list
    idCVarProxy* next; // Offset: 0x8

    // idCVarSystem assigns this in LocalInit()
    idCVar* principal; // Offset: 0x10

}; // Size: 0x18
