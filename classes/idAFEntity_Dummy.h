struct idAFEntity_Dummy : idAnimatedEntity
{
    // articulated figure properties
    idAnimator_AF afProperties; // Offset: 0x1B48

    // idPhysics_Staticphys;
    idAnimator_Channel channelAnimator; // Offset: 0x2010

    // animation to play
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > idleAnimHandle; // Offset: 0x2120

    // animation to play on Damage
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > deathAnimHandle; // Offset: 0x2122

    // whether this can be killed or not.
    bool takesDamage; // Offset: 0x2124

    // true if this should be treated as an enemy (for stat tracking, etc)
    bool isEnemyOfPlayer; // Offset: 0x2125

    // if true, use sphere models instead of the monster bounding box when non-ragdolled
    bool useSphereModels; // Offset: 0x2126

    // true if played deathAnim
    bool playedDeathAnim; // Offset: 0x2127

    bool hasRagDolledYet; // Offset: 0x2128

    // names of joints to trace to for radius damage
    idList < idStr , TAG_IDLIST , false > radiusDamageJointNames; // Offset: 0x2130

    // number of hits it takes to activate the ragdoll
    int numHitsToKill; // Offset: 0x2148

    // does not die.
    bool noDeath; // Offset: 0x214C

    // gore component.
    idGoreComponent goreComponent; // Offset: 0x2150

    // animator for playing turret use animations
    idAnimator_TurretNxN < 3 > turretAnimator; // Offset: 0x3098

    // currently attached items
    idAttachmentCollection attachments; // Offset: 0x3260

}; // Size: 0x3280
