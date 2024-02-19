struct idDeclAIComponent_PositionAwareness : idDeclAIComponent
{
    struct infoSet_t
    {
        // for move offsets, use this as idle anim
        idAnimWebPath_Atomic idleAnim; // Offset: 0x0

        // action animations in these nodes are available for the AI to use
        idList < idAnimWebPath_Atomic , TAG_IDLIST , false > actionAnims; // Offset: 0x40

        // offsets from the origin to consider for repositioning {{ units = m }}
        idList < idVec3 , TAG_IDLIST , false > moveOffsets; // Offset: 0x58

        // quick floating point scalar so defining move offsets isn't as tedious
        float moveOffsetScale; // Offset: 0x70

        // if true, calculate moveOffsets relative to target origin instead of AI origin (actionAnims are unchanged)
        bool moveOffsetFromTarget; // Offset: 0x74

        // name of this set
        idAtomicString name; // Offset: 0x78

    }; // Size: 0x80

    // all available sets of poses/positions that the AI can use
    idList < idDeclAIComponent_PositionAwareness::infoSet_t , TAG_IDLIST , false > infoSets; // Offset: 0x98

    // use if info sets have an empty strings in the idle anim
    idAnimWebPath_Atomic defaultCombatIdleState; // Offset: 0xB0

}; // Size: 0xF0
