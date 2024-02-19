struct idSWFWidget_AmmoWeapon : idSWFWidget
{
    idStr dynamincIconName; // Offset: 0x180

    idStr staticIconName; // Offset: 0x1B0

    int maxAmmo; // Offset: 0x1E0

    int currentAmmo; // Offset: 0x1E4

    swfNamedColors_t swfColor; // Offset: 0x1E8

    swfNamedColors_t iconSWFColor; // Offset: 0x1EC

    int numAmmoBars; // Offset: 0x1F0

    float ammoCountValue; // Offset: 0x1F4

    bool ammoBarsNumChanged; // Offset: 0x1F8

    idSWFSpriteInstance* ammoCountSpr; // Offset: 0x200

    idSWFSpriteInstance* ammoCountBarSpr; // Offset: 0x208

    idSWFSpriteInstance* ammoCountReadySpr; // Offset: 0x210

}; // Size: 0x218
