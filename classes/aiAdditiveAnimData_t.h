struct aiAdditiveAnimData_t
{
    // cross-reference this with an entry in the additiveAnimInfos array
    idAtomicString additiveAnimKey; // Offset: 0x0

    // additive anim plays whenever ai is in any of these web nodes ( or exclude )
    idList < aiAdditiveAnimPerNodeData_t , TAG_IDLIST , false > nodes; // Offset: 0x8

}; // Size: 0x20
