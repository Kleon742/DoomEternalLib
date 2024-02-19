struct idTarget_EquipItem : idTarget
{
    // Item to be given
    idDeclInventory* itemToEquip; // Offset: 0xB88

    // if item is a weapon you can request this ammo for it.
    idDeclAmmo* ammoDecl; // Offset: 0xB90

}; // Size: 0xB98
