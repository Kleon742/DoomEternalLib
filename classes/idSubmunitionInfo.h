struct idSubmunitionInfo
{
    // if 0, just explodes, otherwise it explodes into multiple smaller sub-munitions
    int numSubMunitions; // Offset: 0x0

    // projectile def list for sub-munitions from which to select numSubMunitions randomly (not used if numSubMunitions <= 0)
    idList < const idDeclProjectile * , TAG_IDLIST , false > subMunitionProjectileList; // Offset: 0x8

    // the direction the submunition uses.
    idVec3 submunitionDirection; // Offset: 0x20

    // max deviation velocity angle for sub munitions around the direction
    float subMunitionMaxAngleNorm; // Offset: 0x2C

    // min deviation velocity angle around the direction
    float minAngleNorm; // Offset: 0x30

    // max deviation velocity angle for sub munitions around the perpendicular dir
    float subMunitionMaxAnglePerp; // Offset: 0x34

    // min deviation velocity angle around the perpendicular
    float minAnglePerp; // Offset: 0x38

    // min perp distance from direction vector to start submunition
    float minStartPerpDist; // Offset: 0x3C

    // max perp distance from direction vector to start submunition
    float maxStartPerpDist; // Offset: 0x40

    // gravity scalar to apply to the submunitions
    float gravityScalar; // Offset: 0x44

    // evenly distribute the projectiles around the cone angle ( still applies angle to perpendicular )
    bool fixedDistribution; // Offset: 0x48

    // for achieving a specific orientation of fixed distribution submunitions
    float distributionStartDegs; // Offset: 0x4C

    // select numSubMunitions from subMunitionProjectileList randomly instead of sequentially
    bool randomSubMunitions; // Offset: 0x50

    // each pair of sub munitions launch in opposite directions
    bool pairedSubMunitionVels; // Offset: 0x51

    // if this is a sub munition then spawn normally
    bool isSubMunition; // Offset: 0x52

    // Only deploys submunition on alt fire.
    bool subMunitionOnlyOnAlt; // Offset: 0x53

    // use the submunition's start speed
    bool useStartSpeed; // Offset: 0x54

}; // Size: 0x58
