struct Summon_SuperiorPositionAvailable : idAIStateTransition
{
    // position parms decl to use
    idDeclAIPositioningParms* positioningParms; // Offset: 0xF8

    // if true, allow AI to stay at current position if it is best
    bool allowCurrent; // Offset: 0x100

}; // Size: 0x108
