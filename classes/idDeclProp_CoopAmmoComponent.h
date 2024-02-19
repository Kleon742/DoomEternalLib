struct idDeclProp_CoopAmmoComponent : idDeclProp_UseComponent
{
    // Ammo Component decl to use for BFG, ammo is given in single bullets
    idDeclProp_UniversalAmmoComponent* bfgAmmoComponentDecl; // Offset: 0x130

    // Ammo Component decl to use for Bullets, ammo is given in single bullets
    idDeclProp_UniversalAmmoComponent* bulletsAmmoComponentDecl; // Offset: 0x138

    // Ammo Component decl to use Cells, ammo is given in single bullets
    idDeclProp_UniversalAmmoComponent* cellsAmmoComponentDecl; // Offset: 0x140

    // Ammo Component decl to use Fuels, ammo is given in single bullets
    idDeclProp_UniversalAmmoComponent* fuelAmmoComponentDecl; // Offset: 0x148

    // Ammo Component decl to use Rockets, ammo is given in single bullets
    idDeclProp_UniversalAmmoComponent* rocketsAmmoComponentDecl; // Offset: 0x150

    // Ammo Component decl to use Shells, ammo is given in single bullets
    idDeclProp_UniversalAmmoComponent* shellsAmmoComponentDecl; // Offset: 0x158

    // Ammo Component decl, ammo is given in single bullets
    idDeclProp_UniversalAmmoComponent* allAmmoComponentDecl; // Offset: 0x160

}; // Size: 0x168
