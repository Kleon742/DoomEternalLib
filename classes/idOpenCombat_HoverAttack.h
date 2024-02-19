struct idOpenCombat_HoverAttack : idAIState
{
    // optional string for overriding aim tracking parms
    idAtomicString aimTrackingParmsOverrideString; // Offset: 0x130

    // optional string for overriding look tracking parms
    idAtomicString lookTrackingParmsOverrideString; // Offset: 0x138

    // nocomment
    float recoilStrength; // Offset: 0x140

    // this does not control launch, it should just approximate the actual delay defined by the anim events
    idTypesafeTime < float , secondUnique_t , 1 > projectileLaunchDelay; // Offset: 0x144

}; // Size: 0x148
