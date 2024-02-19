struct idSWFWidget_Hud_Reticle : idSWFWidget
{
    idHUDEvent_ReticleDataUpdate::idReticleData_t currentData; // Offset: 0x180

    idHUDEvent_ReticleDataUpdate::idReticleData_t previousData; // Offset: 0x290

    idDeclWeaponReticle::reticleStyle_t style; // Offset: 0x3A0

    idDeclWeaponReticle* declReticle; // Offset: 0x3A8

    idSWFSpriteInstance* reticleSprite; // Offset: 0x3B0

    // constant instances
    idSWFSpriteInstance* ammoSpr; // Offset: 0x3B8

    idSWFTextInstance* ammoShotsRemainingTxt; // Offset: 0x3C0

    idSWFTextInstance* ammoCostTxt; // Offset: 0x3C8

    idSWFTextInstance* ammoAmountTxt; // Offset: 0x3D0

    idSWFSpriteInstance* shieldSpr; // Offset: 0x3D8

    idSWFSpriteInstance* leftChargeSpr; // Offset: 0x3E0

    idSWFSpriteInstance* rightChargeSpr; // Offset: 0x3E8

    idSWFSpriteInstance* chargingSpr; // Offset: 0x3F0

    idSWFSpriteInstance* chLeftGlowSpr; // Offset: 0x3F8

    idSWFSpriteInstance* chRightGlowSpr; // Offset: 0x400

    idSWFSpriteInstance* chBordersSpr; // Offset: 0x408

    idSWFSpriteInstance* chLeftStrokeSpr; // Offset: 0x410

    idSWFSpriteInstance* chRightStrokeSpr; // Offset: 0x418

    idSWFSpriteInstance* chBorderLeftSpr; // Offset: 0x420

    idSWFSpriteInstance* chBorderRightSpr; // Offset: 0x428

    idSWFSpriteInstance* specialChargingSpr; // Offset: 0x430

    idSWFSpriteInstance* scOuterSpr; // Offset: 0x438

    idSWFSpriteInstance* scHealthSpr; // Offset: 0x440

    idSWFSpriteInstance* scHealthGlowsSpr; // Offset: 0x448

    idArray < idSWFSpriteInstance * , 6 > scHealthBaseSpr; // Offset: 0x450

    idArray < idSWFSpriteInstance * , 6 > scHealthGradientSpr; // Offset: 0x480

    idArray < idSWFSpriteInstance * , 6 > scHealthStrokeSpr; // Offset: 0x4B0

    idSWFSpriteInstance* scTimerSpr; // Offset: 0x4E0

    idSWFTextInstance* scTimerTxt; // Offset: 0x4E8

    idSWFSpriteInstance* scTimerStrokeSpr; // Offset: 0x4F0

    idSWFSpriteInstance* scTimerGlowSpr; // Offset: 0x4F8

    idSWFSpriteInstance* scAbsorbSpr; // Offset: 0x500

    idSWFSpriteInstance* scIconsSpr; // Offset: 0x508

    idSWFSpriteInstance* scIconsFuelSpr; // Offset: 0x510

    idSWFSpriteInstance* scIconsOverheatSpr; // Offset: 0x518

    idSWFSpriteInstance* scSpinupSpr; // Offset: 0x520

    idSWFSpriteInstance* crucibleBarSpr; // Offset: 0x528

    idSWFSpriteInstance* bfgBarSpr; // Offset: 0x530

    idSWFSpriteInstance* bfgBarInnerSpr; // Offset: 0x538

    idSWFTextInstance* bfgBarTxt; // Offset: 0x540

    idSWFSpriteInstance* chargeReleaseSpr; // Offset: 0x548

    idSWFSpriteInstance* chargeReleaseBarSpr; // Offset: 0x550

    idSWFSpriteInstance* spreadSpr; // Offset: 0x558

    idArray < idSWFSpriteInstance * , 4 > spreadQuadSec0Spr; // Offset: 0x560

    idArray < idSWFSpriteInstance * , 4 > spreadQuadSec1Spr; // Offset: 0x580

    idSWFSpriteInstance* detonateSpr; // Offset: 0x5A0

    idSWFSpriteInstance* spinUpSpr; // Offset: 0x5A8

    idSWFSpriteInstance* heatSpr; // Offset: 0x5B0

    idSWFSpriteInstance* heatOverheatTextSpr; // Offset: 0x5B8

    idSWFSpriteInstance* heatWarningTextSpr; // Offset: 0x5C0

    idSWFSpriteInstance* heatPipsSpr; // Offset: 0x5C8

    idSWFSpriteInstance* arcSpr; // Offset: 0x5D0

    idSWFSpriteInstance* baseReticleSpr; // Offset: 0x5D8

    idSWFSpriteInstance* specialReticleSpr; // Offset: 0x5E0

    idSWFSpriteInstance* berserkSpr; // Offset: 0x5E8

    idSWFSpriteInstance* teleportSpr; // Offset: 0x5F0

    idSWFSpriteInstance* leapSprite; // Offset: 0x5F8

    // instances which change with the current reticle
    idSWFSpriteInstance* bar0Spr; // Offset: 0x600

    idSWFSpriteInstance* bar1Spr; // Offset: 0x608

    idSWFSpriteInstance* spinSpr; // Offset: 0x610

    idSWFSpriteInstance* superchargeSpr; // Offset: 0x618

    idSWFSpriteInstance* giveAmmoSpr; // Offset: 0x620

    idList < idSWFSpriteInstance * , TAG_MENU , false > targetHealthSpr; // Offset: 0x628

    idList < idSWFSpriteInstance * , TAG_MENU , false > cooldownSpr; // Offset: 0x640

    idList < idSWFSpriteInstance * , TAG_MENU , false > chargeBarSpr; // Offset: 0x658

    idList < idSWFSpriteInstance * , TAG_MENU , false > hostileTargetSpr; // Offset: 0x670

    idList < idSWFSpriteInstance * , TAG_MENU , false > weakPointSpr; // Offset: 0x688

    idSWFWidget* reticle; // Offset: 0x6A0

    float firedChargePercentage; // Offset: 0x6A8

    int currentSpread; // Offset: 0x6AC

    bool forceInstantSpread; // Offset: 0x6B0

    int shotsToShow; // Offset: 0x6B4

    float lastRotation; // Offset: 0x6B8

    bool cooldownSpriteNeedsReset; // Offset: 0x6BC

}; // Size: 0x6C0
