struct goreFrameDamage_t
{
    // Total Damage this Frame.
    float totalDamage; // Offset: 0x0

    // Damage done to AI, not on a per wound basis.
    float instanceDamage; // Offset: 0x4

    // Position of the damage this frame. {{ units = m }}
    idVec3 pos; // Offset: 0x8

    // Impulse direction of the damage this frame.
    idVec3 impulse; // Offset: 0x14

    // Position of the damage this frame. {{ units = m }}
    idList < idVec3 , TAG_IDLIST , false > additionalPos; // Offset: 0x20

    // Damage Groups hit.
    int damageGroupIndices; // Offset: 0x38

    // which damage groups were hit.
    idList < int , TAG_IDLIST , false > damageGroupsHit; // Offset: 0x40

    // closest distance added so far.
    float closestDistance; // Offset: 0x58

    // Gore Behavior of the damage.
    idDeclGoreBehavior* goreBehavior; // Offset: 0x60

    // Damage Decl used.
    idDeclDamage* damageDecl; // Offset: 0x68

    // how far away the attacker was. {{ units = m }}
    float attackerDistance; // Offset: 0x70

    // which joint was hit.
    idIndex < short , invalidJointIndex_t , - 1 > jointHit; // Offset: 0x74

    // which group was hit.
    int damageGroupIndex; // Offset: 0x78

    // Was this Splash Damage.
    bool wasSplashDamage; // Offset: 0x7C

    // needed for RegisterWoundEnabled
    idManagedClassPtr < idEntity > attacker; // Offset: 0x80

    // needed for RegisterWoundEnabled
    idManagedClassPtr < idEntity > victim; // Offset: 0xA0

}; // Size: 0xC0
