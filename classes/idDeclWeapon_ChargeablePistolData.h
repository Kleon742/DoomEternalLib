struct idDeclWeapon_ChargeablePistolData : idDeclWeapon_Data
{
    // play this when firing the pistol with a low (non-zero) charge
    idSoundEvent* lowChargeFireSound; // Offset: 0x90

    // play this when firing the pistol with a medium charge
    idSoundEvent* mediumChargeFireSound; // Offset: 0x98

    // play this when firing the pistol with a high charge
    idSoundEvent* highChargeFireSound; // Offset: 0xA0

    // play this when firing the pistol fully charged
    idSoundEvent* fullChargeFireSound; // Offset: 0xA8

    // if > 0 then represents the threshold between low and medium charge
    float mediumChargeThreshold; // Offset: 0xB0

    // if > 0 then represents the threshold between medium and high charge
    float highChargeThreshold; // Offset: 0xB4

}; // Size: 0xB8
