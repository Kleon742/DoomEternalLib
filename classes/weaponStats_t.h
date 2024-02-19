struct weaponStats_t
{
    // decl that's causing this (either a weapon or a projectile)
    idDecl* decl; // Offset: 0x0

    // display name of the weapon
    idStrId displayName; // Offset: 0x8

    // # shots fired
    int fired; // Offset: 0xC

    // # hits, for calc'ing accuracy
    int accHits; // Offset: 0x10

    // # projectiles that hit enemy
    int hitEnemy; // Offset: 0x14

    // # enemy killed
    int killedEnemy; // Offset: 0x18

    // amount of damage to enemy
    float damageEnemy; // Offset: 0x1C

    // # enemy headshot hits
    int headshotEnemy; // Offset: 0x20

    // # enemy headshot kills
    int headshotEnemyKills; // Offset: 0x24

    // # projectiles that hit friends
    int hitFriendly; // Offset: 0x28

    // # friendly killed
    int killedFriendly; // Offset: 0x2C

    // amount of damage to friendly
    float damageFriendly; // Offset: 0x30

    // # friendly headshot hits
    int headshotFriendly; // Offset: 0x34

    // # friendly headshot kills
    int headshotFriendlyKills; // Offset: 0x38

    // any idActor
    int actorsKilled; // Offset: 0x3C

    // # breakables destroyed
    int breakablesDestroyed; // Offset: 0x40

    // direct hit from weapon / projectile
    int directHit; // Offset: 0x44

    // # projectiles that hit a valid, non-living object
    int hitObject; // Offset: 0x48

    // amount of damage to general objects
    int damageGeneral; // Offset: 0x4C

}; // Size: 0x50
