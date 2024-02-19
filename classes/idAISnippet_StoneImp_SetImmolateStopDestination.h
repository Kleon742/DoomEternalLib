struct idAISnippet_StoneImp_SetImmolateStopDestination : idAISnippet
{
    // immolate stop anim web node to use for delta test against nav graph
    idAnimWebPath_Atomic immolateOutAnim; // Offset: 0x18

    // index of stop animation in specified web node
    int animIndex; // Offset: 0x58

    // if > 0.0, don't use anim delta -- instead trace nav this far forward (in m) in front of AI
    float overrideNavTraceDist; // Offset: 0x5C

    // if >= 0.0, push clipped delta away from wall this by this much (in m)
    float overrideWallPushDist; // Offset: 0x60

}; // Size: 0x68
