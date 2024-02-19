struct idAnimWebHands : idAnimator_GameAnimWeb
{
    idHands* hands; // Offset: 0x888

    // alpha scalars for things like choosing a random punch animation, running, etc.  ------------------------ doom: added variables ------------------------ % zoom in, used to blend between zoomed and nonzoomed version of weapons.
    float zoomPCT; // Offset: 0x890

    // zoom percent for the weapon, if a different percent is needed
    float weaponZoomPCT; // Offset: 0x894

    // 0 to 1, 0=center, 1=left (for 4 part anims with center, left, right, up components)
    float blendLeanCL; // Offset: 0x898

    // 0 to 1, 0=center, 1=right (for 4 part anims with center, left, right, up components)
    float blendLeanCR; // Offset: 0x89C

    // 0 to 1, 0=center, 1=up (for 4 part anims with center, left, right, up components)
    float blendLeanCU; // Offset: 0x8A0

    // 0 to 1, 0=left, 1=right (for 2 part anims with left, right components)
    float blendLeanLR; // Offset: 0x8A4

    // 0 to 1, 0=not in cover, 1=in cover
    float blendInCover; // Offset: 0x8A8

    // 0=not falling, 1=full falling (blends between basic fall and long fall anim)
    float blendFallLong; // Offset: 0x8AC

    // 0 to 1, 0=not ready to peek, 1=ready to peek
    float blendReadyToPeek; // Offset: 0x8B0

    // 0 to 1, 0 no recoil, 1 full recoil
    float blendFireRecoil; // Offset: 0x8B4

    // 0 = 1 shot, 1 = two shots, etc.
    float burstShotSelect; // Offset: 0x8B8

    // rate scale for melee attacks (used by chainsaw melees)
    float meleeScale; // Offset: 0x8BC

    // rate scale for D5 melee into
    float meleeD5IntoScale; // Offset: 0x8C0

    // rate scale for D5 melee hit
    float meleeD5HitScale; // Offset: 0x8C4

    // rate scale for D5 melee miss
    float meleeD5MissScale; // Offset: 0x8C8

    // selects which throw animation to play
    float throwAnimSelect; // Offset: 0x8CC

    // 0 = HANDS_VERSION_BARE, 1 = HANDS_VERSION_PRAETOR
    float handsVersionSelect; // Offset: 0x8D0

    // 0 = WEAPON_UNLOADED, 1 = WEAPON_LOADED
    float weaponLoadedSelect; // Offset: 0x8D4

    // 0 = Weapon unloaded, 1 = Weapon loaded, smooth blend
    float weaponLoadedBlend; // Offset: 0x8D8

    // 0 = HANDS_DOUBLE_BARREL_HAMMER_COCKED_TWO, 1 = HANDS_DOUBLE_BARREL_HAMMER_COCKED_ONE
    float doubleBarrelHammerCockedSelect; // Offset: 0x8DC

    // [0.0...1.0] Target lock acquired percent
    float weaponLockPercent; // Offset: 0x8E0

    // 0.0 or 1.0 indicating whether a target lock has been acquired with the current weapon.
    float weaponHasLockedTarget; // Offset: 0x8E4

    // 0.0 or 1.0 indicating whether the player owner is currently in the air after performing a double jump.
    float playerIsDoubleJumping; // Offset: 0x8E8

    // 0 = HANDS_WEAPON_CAN_RELOAD_AFTER_FIRING, 1 = HANDS_WEAPON_CANT_RELOAD_AFTER_FIRING
    float weaponCanReloadAfterFiringSelect; // Offset: 0x8EC

    // playback rate for shoot anim to match weapon fire rate
    float shootAnimRate; // Offset: 0x8F0

    // playback rate for shoot_charge anim
    float shootChargeAnimRate; // Offset: 0x8F4

    // playback rate for charge_shoot_to_charge_idle
    float chargeShootToChargeIdleAnimRate; // Offset: 0x8F8

    // selects either the looping shoot anim (0), or the default idle anim (1)
    float shootAnimSelect; // Offset: 0x8FC

    // for MP Nailgun : 0 = left barrel, 1 = right barrel, 2 = both barrels
    float shootAnimBarrelSelect; // Offset: 0x900

    // selects one of the shoot anims for a weapon that has a 'shoot_again' state
    float shootAgain1AnimSelect; // Offset: 0x904

    // selects one of the shoot anims for a weapon that has a 'shoot_again' state
    float shootAgain2AnimSelect; // Offset: 0x908

    // weight for anim1 for the looping shoot state
    float loopingShootWeightAnim1; // Offset: 0x90C

    // weight for anim2 for the looping shoot state
    float loopingShootWeightAnim2; // Offset: 0x910

    // weight for anim3 for the looping shoot state
    float loopingShootWeightAnim3; // Offset: 0x914

    // 0 to 1, 0=normal idle, 1=stab idle
    float blendChainsawIdle; // Offset: 0x918

    // 0 to 1, 0 = no shake, 1 = full shake
    float chainsawShake; // Offset: 0x91C

    // 0 = HANDS_GENERIC_HIDE_INSTANT, 1 = HANDS_GENERIC_HIDE_ANIMATED (requires animweb node generic_hide_into)
    float genericHideAnimSelect; // Offset: 0x920

    // rate scale for reload anims
    float reloadAnimRate; // Offset: 0x924

    // rate scale for oneHand reload anims
    float reloadOneHandAnimRate; // Offset: 0x928

    // rate scale for bringup anims
    float bringUpAnimRate; // Offset: 0x92C

    // 0 = HANDS_BRINGUP_INTRO_ANIM_DEFAULT, 1 = HANDS_BRINGUP_INTRO_ANIM_ACCENT
    float bringUpIntroAnimSelect; // Offset: 0x930

    // rate scale for bringdown anims
    float bringDownAnimRate; // Offset: 0x934

    // specifies a custom hands anim
    float customAnimSelect; // Offset: 0x938

    // specifies a custom weapon anim if there are multiples for a given custom anim
    float customWeaponAnimSelect; // Offset: 0x93C

    // selects which chainsaw GK failed anim to play
    float chainsawFailedAnimSelect; // Offset: 0x940

    // 0 = not spinning, 1 = spinning full speed
    float blendChaingunBarrel; // Offset: 0x944

    // 0 = not settle back during firinr, 1 = fully settled back
    float blendChaingunSettle; // Offset: 0x948

    // blend the legs according to view pitch
    float blendSwimLegsPitch; // Offset: 0x94C

    // Scale the fire delay node animation based on the "fireInterval" in the weapon decl.
    float shootDelayScale; // Offset: 0x950

    // Blend between non volatile and volatile state.
    float weaponVolatileBlend; // Offset: 0x954

    // Scale the shot charging anim, if the weapon has one
    float shotChargeScale; // Offset: 0x958

    // Current weapon charge [0..1]
    float weaponChargeForTriggerEvent; // Offset: 0x95C

    // selector for fists idle animation
    float fistsIdleSelect; // Offset: 0x960

    // WEAPON_MOD_NONE = 0, WEAPON_MOD_1 = 1, WEAPON_MOD_2 = 2
    float weaponModSelect; // Offset: 0x964

    // 0 for weapon mod 1, 1 for weapon mod 2
    float weaponModSelect01; // Offset: 0x968

    // generic hide anim rate
    float hideWeaponAnimRate; // Offset: 0x96C

    // rate scale for mod select anims
    float modSelectAnimRate; // Offset: 0x970

    // charge into rate scale
    float chargeIntoRateScale; // Offset: 0x974

    // charge charge rate scale
    float chargeChargeRateScale; // Offset: 0x978

    // charge out rate scale
    float chargeOutRateScale; // Offset: 0x97C

    // BFG shoot anim select
    float bfgShootSelect; // Offset: 0x980

    // BFG shoot state anim select
    float bfgShootStateSelect; // Offset: 0x984

    // the flourish anim selector
    float weaponFlourishAnimSelect; // Offset: 0x988

    // 0 = WEAPON_MOD_NOT_MASTERED, 1 = WEAPON_MOD_MASTERED
    float weaponModMasteredSelect; // Offset: 0x98C

    // 0 = HANDS_POINTING_ARM_RIGHT, 1 = HANDS_POINTING_ARM_LEFT
    float pointingArmSelect; // Offset: 0x990

    // 0 = CRUCIBLE_BRINGUP_ACTIVE, 1 = CRUCIBLE_BRINGUP_ACTIVATE, 2 = CRUCIBLE_BRINGUP_ACTIVATE_SHOWY
    float crucibleBringupSelect; // Offset: 0x994

    // 0 = CRUCIBLE_BRINDOWN_ACTIVE, 1 = CRUCIBLE_BRINGDOWN_DEACTIVATE
    float crucibleBringdownSelect; // Offset: 0x998

}; // Size: 0x9A0
