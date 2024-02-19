struct idHUDEvent_ReticleDataUpdate
{
    struct idReticleData_t
    {
        idDeclWeaponReticle* currentReticle; // Offset: 0x0

        idDeclWeapon* currentWeaponDecl; // Offset: 0x8

        // Ammo
        int ammoCount; // Offset: 0x10

        int ammoPerShot; // Offset: 0x14

        int lowAmmoThreshold; // Offset: 0x18

        int giveAmmoCount; // Offset: 0x1C

        // Spread
        float spread; // Offset: 0x20

        // Heat
        float heat; // Offset: 0x24

        float heatCooldown; // Offset: 0x28

        float heatIncrement; // Offset: 0x2C

        bool isOverheating; // Offset: 0x30

        // Charge
        bool canCharge; // Offset: 0x31

        float charge; // Offset: 0x34

        float chargeMax; // Offset: 0x38

        float chargeCooldown; // Offset: 0x3C

        // Burst
        bool hasBurstProperty; // Offset: 0x40

        int burstMin; // Offset: 0x44

        int burstMax; // Offset: 0x48

        int burstTotalCharges; // Offset: 0x4C

        int burstCurrent; // Offset: 0x50

        bool isBurstFiring; // Offset: 0x54

        // Zoom
        float zoom; // Offset: 0x58

        float zoomFraction; // Offset: 0x5C

        bool isZooming; // Offset: 0x60

        bool isFullyZoomedIn; // Offset: 0x61

        bool inScope; // Offset: 0x62

        // Arc
        float arcAmount; // Offset: 0x64

        // Spin-Up
        float spinUp; // Offset: 0x68

        // Supercharge
        float supercharge; // Offset: 0x6C

        // Targeting
        bool targetIsLocked; // Offset: 0x70

        bool targetLockFailed; // Offset: 0x71

        // FIXME: Evan - Using gameTime_t here causes PODTest error
        long long targetTimeOut; // Offset: 0x78

        // FIXME: ^^
        long long targetReadyTime; // Offset: 0x80

        float targetLockFraction; // Offset: 0x88

        float targetHealth[2]; // Offset: 0x8C

        bool hasHostileTarget; // Offset: 0x94

        bool onHostileWeakPoint; // Offset: 0x95

        int notEnoughFuel; // Offset: 0x98

        // Misc
        float cooldown; // Offset: 0x9C

        float animatedSpinRotation; // Offset: 0xA0

        weaponFireMode_t weaponFireMode; // Offset: 0xA4

        bool masteredWeaponMod; // Offset: 0xA8

        bool masteredShotgunTripleBurst; // Offset: 0xA9

        bool hasShotgunTripleBurstExtraDamage; // Offset: 0xAA

        bool showSecondaryWeaknessIndicator; // Offset: 0xAB

        bool isMeleeAttacking; // Offset: 0xAC

        bool canDetonateProjectiles; // Offset: 0xAD

        // FIXME: Evan - gameTime_t
        long long lastFireTime; // Offset: 0xB0

        bool isChangingWeapon; // Offset: 0xB8

        bool isWeaponReadyToFire; // Offset: 0xB9

        bool showDemonFuel; // Offset: 0xBA

        // TEMP
        float demonFuelCurrent; // Offset: 0xBC

        // TEMP
        float demonFuelMax; // Offset: 0xC0

        // TEMP
        float demonFuelCostPerShot; // Offset: 0xC4

        long long hitStartTime; // Offset: 0xC8

        long long hitTime; // Offset: 0xD0

        bool hitCritical; // Offset: 0xD8

        bool isGloryKilling; // Offset: 0xD9

        float specialChargePercent; // Offset: 0xDC

        int specialChargeMilliseconds; // Offset: 0xE0

        float specialCooldownPercent; // Offset: 0xE4

        int specialCooldownMilliseconds; // Offset: 0xE8

        float specialHealthPercent; // Offset: 0xEC

        long long lastDamageAbsorbTime; // Offset: 0xF0

        float shieldChargePercent; // Offset: 0xF8

        // Used to represent a weapon specific count on the reticle
        int specialCount; // Offset: 0xFC

        int specialCountCrucible; // Offset: 0x100

        bool isBerserkActive; // Offset: 0x104

        // Reticle Focus Information. Text to use for focus display.
        int focusDisplayText; // Offset: 0x108

        // certain weapons/demons need to change their base reticle at certain times
        bool useSpecialReticle; // Offset: 0x10C

    }; // Size: 0x110

    // Weapon Reticle Data
    idHUDEvent_ReticleDataUpdate::idReticleData_t info; // Offset: 0x0

}; // Size: 0x110
