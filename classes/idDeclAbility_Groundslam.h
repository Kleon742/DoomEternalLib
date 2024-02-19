struct idDeclAbility_Groundslam : idDeclInventory
{
    // projectile to launch (auger projectile)
    idDeclProjectile* projectileDecl; // Offset: 0x3F8

    // delay between uses
    idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime; // Offset: 0x400

}; // Size: 0x408
