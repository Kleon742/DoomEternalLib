struct idChainsaw_Slice : idWeapon
{
    // current chain animation position (0 to 1)
    float curChainNormalizedFrame; // Offset: 0x3BA0

    // when should we decay another ammo?
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastAmmoDecayTime; // Offset: 0x3BA8

    // used for fx and sound to track when we start and end firing
    bool isFiring; // Offset: 0x3BB0

    // spring for revving up (or down) chainsaw chain
    idSpring < idVec1 > revSpring; // Offset: 0x3BB4

    // third person attack anim
    playerTorsoAnims_t attackAnimThird; // Offset: 0x3BE4

    // records which type of extra condition to use for the FX on the surface the chainsaw is currently cutting (if any)
    fxExtraCondition_t extraConditionImpact; // Offset: 0x3BE8

    // placed at the cut location to play gore particles
    idEntityFx* goreFXEntity; // Offset: 0x3BF0

    idSoundObject soundObjectChainSaw; // Offset: 0x3BF8

}; // Size: 0x3C08
