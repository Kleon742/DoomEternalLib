struct idPlayerAimAssist : idAimAssist
{
    enum enum_2E301 : int
    {
        AA_DEBUGMODE_ALL = 0,
        AA_DEBUGMODE_FRICTION = 1,
        AA_DEBUGMODE_ADHESION = 2,
        AA_DEBUGMODE_ZOOMSNAP = 3,
        AA_DEBUGMODE_NONE = 4
    };

    // player controlled entity (idPlayer, idDemonPlayer, etc) associated with this object
    idManagedClassPtr < idEntity > playerEntity; // Offset: 0x48

    idManagedClassPtr < idEntity > lastTarget; // Offset: 0x68

    // save current target .. didn't want to muck with lastTarget right now.. possible side affects with aim assist..
    idManagedClassPtr < idEntity > currentTarget; // Offset: 0x88

    // const idDeclHighlight *currentHighlightDecl; our current highlight decl (changes when aim assist decl changes on equip or firing mode change) idHighlightHandlehighlightHandle; handle to our current highlight the current entity we're highlighting
    idManagedClassPtr < idEntity > currentHighlightEnt; // Offset: 0xA8

}; // Size: 0xC8
