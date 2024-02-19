struct idProjectile_Auger : idProjectile_Grenade
{
    // max height for a valid ledge
    float maxLedgeHeight; // Offset: 0x32A0

    // max angle auger will slide along without considering it a ledge
    float validSlideAngle; // Offset: 0x32A4

    // if auger travel direction deviates from horizontal plane by more than this, explode (90 means no restriction, 0 means dead flat)
    float maxTravelAngle; // Offset: 0x32A8

    // how often to apply damage
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageRate; // Offset: 0x32AC

    // projectile entity that will be exploded as auger moves forward
    idDeclEntityDef* explodeEntityDef; // Offset: 0x32B0

    // screen shake params used when player hits AI during dash
    idDeclAdvancedViewShake* screenShakeOnExplosionDecl; // Offset: 0x32B8

    // if true, auger will follow surface normals. if false, auger will move forward but follow surface height
    bool canTurn; // Offset: 0x32C0

    // max number of victims damaged by this auger ( -1 == unlimited )
    int maxNumVictims; // Offset: 0x32C4

    float maxDistFromFloor; // Offset: 0x32C8

    // min dist for detecting a valid ledge to move up to
    float minLedgeDist; // Offset: 0x32CC

    // min dist down to determine auger is on the ground
    float minFloordDist; // Offset: 0x32D0

    // next time to do damage!
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextDamageTime; // Offset: 0x32D8

    bool damageOnCollision; // Offset: 0x32E0

    // based on auger orientation
    idAugerTrace fullUpTrace; // Offset: 0x32E8

    idAugerTrace upTrace; // Offset: 0x33B0

    idAugerTrace upForwardTrace; // Offset: 0x3478

    idAugerTrace upForwardDownTrace; // Offset: 0x3540

    idAugerTrace downTrace; // Offset: 0x3608

    idAugerTrace forwardTrace; // Offset: 0x36D0

    // world down trace
    idAugerTrace worldDownTrace; // Offset: 0x3798

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > damageList; // Offset: 0x3860

    float speed; // Offset: 0x3878

    idVec3 moveDir; // Offset: 0x387C

    idVec3 moveRightDir; // Offset: 0x3888

    idVec3 lastSurfaceNormal; // Offset: 0x3894

    // goal to move to while moving up a surface (used to determine direction of movement, from current pos)
    idVec3 movingUpGoalPos; // Offset: 0x38A0

    // once movingUpGoalPos has been reached, move the auger here
    idVec3 movingUpEndPos; // Offset: 0x38AC

}; // Size: 0x38B8
