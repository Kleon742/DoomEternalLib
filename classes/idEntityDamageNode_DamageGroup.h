struct idEntityDamageNode_DamageGroup : idEntityDamage_NodeDecorator
{
    // name of damage group
    idAtomicString name; // Offset: 0x10

    // damage group info
    idDamageGroup damageGroup; // Offset: 0x18

}; // Size: 0x178
