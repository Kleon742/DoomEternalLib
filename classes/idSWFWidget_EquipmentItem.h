struct idSWFWidget_EquipmentItem : idSWFWidget
{
    idStr dynamincIconName; // Offset: 0x180

    idStr staticIconName; // Offset: 0x1B0

    int numCooldownBars; // Offset: 0x1E0

    float cooldownValue; // Offset: 0x1E4

    swfNamedColors_t swfColor; // Offset: 0x1E8

    swfNamedColors_t iconSWFColor; // Offset: 0x1EC

    idSWFSpriteInstance* ctaSpr; // Offset: 0x1F0

    idSWFSpriteInstance* cooldownSpr; // Offset: 0x1F8

    idSWFSpriteInstance* cooldownBarSpr; // Offset: 0x200

    idSWFSpriteInstance* cooldownReadySpr; // Offset: 0x208

    bool cooldownBarsNumChanged; // Offset: 0x210

}; // Size: 0x218
