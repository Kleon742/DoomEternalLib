struct idAIDamageState_LinkCondition_DamageGroupHit : idAIDamageState_LinkCondition
{
    // Damage group name(s) to check. Condition passes if at least one group was hit
    idList < idAtomicString , TAG_IDLIST , false > damageGroups; // Offset: 0x20

}; // Size: 0x38
