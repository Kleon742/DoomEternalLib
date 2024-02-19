struct Buff_SuperiorPositionAvailable : idAIStateTransition
{
    // position parms decl to use
    idDeclAIPositioningParms* positioningParms; // Offset: 0xF8

    // if >= 0, use this instead of what is specified on owner's buffs
    float overrideBuffRadius; // Offset: 0x100

    // if true, allow AI to stay at current position if it is best
    bool allowCurrent; // Offset: 0x104

}; // Size: 0x108
