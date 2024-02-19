struct idDeclProp_CoopBackpackComponent : idDeclProp_UseComponent
{
    // Ammo Component decl to use, ammo is given in packs
    idDeclProp_UniversalAmmoComponent* universalAmmoComponentDecl; // Offset: 0x130

    // Health
    idDeclProp_HealthComponent::healItem_t healthItem; // Offset: 0x138

    // Armor
    idDeclProp_HealthComponent::healItem_t armorItem; // Offset: 0x178

}; // Size: 0x1B8
