struct idDeclWeapon_MancubusGland : idDeclWeapon_Data
{
    // How long before it explodes in the player's hand. ( -1 is never )
    milliToGameTime_t explodeInHandTime; // Offset: 0x90

    // The Damage we cause to the player.
    idDeclDamage* explosionDamage; // Offset: 0xA0

}; // Size: 0xA8
