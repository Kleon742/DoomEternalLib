struct idDeclWeapon_RailGunData : idDeclWeapon_Data
{
    struct secondaryFire_t
    {
        struct ballistaParms_t
        {
            // advanced view shake to play while hovering
            idDeclAdvancedViewShake* hoverAdvViewShake; // Offset: 0x0

            // sound to play when hover starts
            idSoundEvent* hoverStartSound; // Offset: 0x8

            // sound to play when hover ends
            idSoundEvent* hoverStopSound; // Offset: 0x10

            bool hovering; // Offset: 0x18

        }; // Size: 0x20

        // how long to charge to maximum in MS
        milliToGameTime_t chargeTimeMS; // Offset: 0x0

        // the projectile to use for secondary fire targets
        idDeclProjectile* fullyChargedProjectileDecl; // Offset: 0x10

        // sound to play when starting a secondary fire charge / lock
        idSoundEvent* startSound; // Offset: 0x18

        // looping charge sound that uses variable pitch according to fire lock data
        idSoundEvent* chargeSound; // Offset: 0x20

        // pitch of the charged sound
        float chargeSoundPitch; // Offset: 0x28

        // how many secs to change to this pitch
        float chargeSoundPitchChangeSecs; // Offset: 0x2C

        // sound to play when weapon discharges because charge was held too long
        idSoundEvent* dischargeSound; // Offset: 0x30

        // secondary fire charge scale table
        idDeclTable* chargeDamageScaleTable; // Offset: 0x38

        // how much ammo is used at max charge
        int ammoUsedAtMaxCharge; // Offset: 0x40

        // additive animation to expand the muzzle
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > muzzleAnim; // Offset: 0x44

        // how many MS to transition from fully open to fully closed
        int muzzleContractMS; // Offset: 0x48

        // sound to play when the gun's energy is fully charged
        idSoundEvent* fullyChargedSound; // Offset: 0x50

        // can't fire unless fully charged
        bool requiresFullChargeToFire; // Offset: 0x58

        // show debug charge bar
        bool showChargeBar; // Offset: 0x59

        // can only charge when zoomed
        bool chargeRequiresZoom; // Offset: 0x5A

        // ballista parms
        idDeclWeapon_RailGunData::secondaryFire_t::ballistaParms_t ballistaParms; // Offset: 0x60

    }; // Size: 0x80

    // use base weapon charge behavior
    bool useBaseChargeBehavior; // Offset: 0x90

    // can charge with insufficient ammo to fire
    bool canChargeWithInsufficientAmmo; // Offset: 0x91

    // how long to wait to charge after firing.
    milliToGameTime_t afterFireChargeDelay; // Offset: 0x98

    // secondary fire parms
    idDeclWeapon_RailGunData::secondaryFire_t secondaryFire; // Offset: 0xA8

    // material to use for friendly laser beams
    idMaterial2* friendlyLaserBeamMtr; // Offset: 0x128

    // material to use for friendly laser dots
    idMaterial2* friendlyLaserDotMtr; // Offset: 0x130

    // color to use on the friendly laser beam.
    idColor friendlyLaserBeamColor; // Offset: 0x138

    // has pre-charge anim that raises weapon to shoulder
    bool weaponTransitionsToShoulder; // Offset: 0x148

}; // Size: 0x150
