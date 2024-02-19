struct idDeclThrowable : idDeclInventory
{
    // type of projectile this throwable becomes
    idDeclProjectile* projectileDecl; // Offset: 0x3F8

    // type of projectile this becomes if the player has boost armor.
    idDeclProjectile* boostProjectileDecl; // Offset: 0x400

    // amount of pitch added to the fire axis when thrown by the player
    float pitchOffsetForPlayer; // Offset: 0x408

    // the index into the animWeb Animation array for the throw animation
    float animIndex; // Offset: 0x40C

    // fx system
    idDeclFX* fxDecl; // Offset: 0x410

    // how much energy does this use.
    float energyUsed; // Offset: 0x418

    // Show we only explode when player asks for it?
    bool explodeOnOverride; // Offset: 0x41C

}; // Size: 0x420
