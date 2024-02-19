struct idSWFWidget_SuperchargeWeapon : idSWFWidget
{
    idSWFSpriteInstance* cooldownSpr; // Offset: 0x180

    idSWFSpriteInstance* cooldownBarSpr; // Offset: 0x188

    idSWFSpriteInstance* superchargeMeterSpr; // Offset: 0x190

    idStr dynamincIconName; // Offset: 0x198

    idStr staticIconName; // Offset: 0x1C8

    int maxAmmo; // Offset: 0x1F8

    int currentAmmo; // Offset: 0x1FC

    swfNamedColors_t swfColor; // Offset: 0x200

    swfNamedColors_t iconSWFColor; // Offset: 0x204

    swfNamedColors_t swfColorSupercharge; // Offset: 0x208

    swfNamedColors_t swfColorGradient; // Offset: 0x20C

    float recharge; // Offset: 0x210

    bool rechargeChanged; // Offset: 0x214

    float superCharge; // Offset: 0x218

    bool superChargeChanged; // Offset: 0x21C

}; // Size: 0x220
