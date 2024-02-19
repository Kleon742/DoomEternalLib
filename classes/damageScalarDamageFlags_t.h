struct damageScalarDamageFlags_t
{
    // hitting this spot counts as a critical hit
    bool criticalHit; // Offset: 0x0

    // if hitting this constitutes hitting the demon's weak spot
    bool demonWeakSpot; // Offset: 0x0

    // hitting this spot counts as a headshot
    bool headShot; // Offset: 0x0

    // hit armor
    bool hitArmor; // Offset: 0x0

    // hit spot was a weak point
    bool weakPoint; // Offset: 0x0

}; // Size: 0x1
