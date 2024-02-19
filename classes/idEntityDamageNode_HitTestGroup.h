struct idEntityDamageNode_HitTestGroup : idEntityDamage_NodeDecorator
{
    // name of hit test group
    idAtomicString name; // Offset: 0x10

    // hit test group mapping
    hitTestNameMapping_t mapping; // Offset: 0x18

}; // Size: 0x50
