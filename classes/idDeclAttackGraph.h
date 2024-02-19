struct idDeclAttackGraph : idDeclAttackTemplate < idDeclAttackSubGraph , idDeclAttackNode , idDeclAttackLink >
{
    // apply this sync to any damage done by this character ( even non-attacks )
    idDeclSyncInteraction* syncHit; // Offset: 0xF8

    // allow any attacks in this graph
    bool allowRevalidation; // Offset: 0x0

    // allow optimization ranges to early-out attack checks
    bool allowOptimizations; // Offset: 0x0

}; // Size: 0x108
