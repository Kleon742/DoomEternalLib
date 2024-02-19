struct idDeclAIComponent_Attack : idDeclAIComponent
{
    struct attackExpansionInfo_t
    {
        // name for this set of expansion info
        idAtomicString name; // Offset: 0x0

        // origins to expand to {{ units = m }}
        idList < idVec3 , TAG_IDLIST , false > origins; // Offset: 0x8

        // distances to expand to {{ units = m }}
        idList < float , TAG_IDLIST , false > distances; // Offset: 0x20

        // angles to expand to
        idList < idAngles , TAG_IDLIST , false > angles; // Offset: 0x38

    }; // Size: 0x50

    // custom expansion information
    idList < idDeclAIComponent_Attack::attackExpansionInfo_t , TAG_IDLIST , false > attackExpansions; // Offset: 0x98

    // if true, only chain when an edge in attack graph exists between nodes
    bool useNewChainSystem; // Offset: 0xB0

}; // Size: 0xB8
