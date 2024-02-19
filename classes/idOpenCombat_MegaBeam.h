struct idOpenCombat_MegaBeam : idAIState
{
    // true if we want to automate trigger pull via fire control
    bool usesFireControl; // Offset: 0x130

    // inventory index of weapon to switch to for attack
    int weaponIndex; // Offset: 0x134

    // Fire even if not aiming at the target
    bool allowOffTargetFire; // Offset: 0x138

    // __edit idAtomicStringintoStateName;name of state in animweb to use as 'into' for aimState (optional) __edit idAtomicStringaimStateName;name of state in animweb to use as aimState __edit idAtomicStringfireStateName;name of state in animweb for fire/recoil anim (optional) __edit idAtomicStringholdStateName;name of state in animweb for holdinganimweb node to use as 'into' for aim anim (optional)
    idAnimWebPath_Atomic intoNode; // Offset: 0x140

    // animweb node to use as aim anim
    idAnimWebPath_Atomic aimNode; // Offset: 0x180

    // animweb node to use as fire anim (optional)
    idAnimWebPath_Atomic fireNode; // Offset: 0x1C0

    // animweb node to use as a 'hold' cycle anim
    idAnimWebPath_Atomic holdNode; // Offset: 0x200

    // name of tag on model for beam muzzle
    idAtomicString bindTagName; // Offset: 0x240

    // how long aim period of mega beam takes
    idTypesafeTime < float , secondUnique_t , 1 > aimTime; // Offset: 0x248

    // how long it takes to charge beam, after aiming is complete
    idTypesafeTime < float , secondUnique_t , 1 > chargeTime; // Offset: 0x24C

    // how long to hold the trigger
    idTypesafeTime < float , secondUnique_t , 1 > fireTime; // Offset: 0x250

    // how long to try acquiring target before we give up
    idTypesafeTime < float , secondUnique_t , 1 > abortTime; // Offset: 0x254

    // which equipment slot the beam weapon is in
    equipSlot_t equipSlot; // Offset: 0x258

    // store previous weapon inventory index
    int oldWeaponIndex; // Offset: 0x25C

}; // Size: 0x260
