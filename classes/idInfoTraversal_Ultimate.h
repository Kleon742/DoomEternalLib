struct idInfoTraversal_Ultimate : idInfo_TraversalBase
{
    struct info_t
    {
        // blah
        idVec3 start; // Offset: 0x0

        // blah
        idVec3 end; // Offset: 0xC

        // blah
        idAnimWebPath anim; // Offset: 0x18

        // traversal monster type for this traversal chain
        traversalMonsterType_t monsterType; // Offset: 0x48

        // flags that dictate who can use this traversal
        traversalEnums_t::classFlags_t classFlags; // Offset: 0x4C

        // flags that dictate various traversal properties
        traversalEnums_t::traversalFlags_t traversalFlags; // Offset: 0x50

        // blah
        bool snapToGround; // Offset: 0x54

        // blah
        bool showAnim; // Offset: 0x55

        // blah
        bool showLine; // Offset: 0x56

    }; // Size: 0x58

    // blah
    idList < idInfoTraversal_Ultimate::info_t , TAG_IDLIST , false > infos; // Offset: 0xB90

}; // Size: 0xBA8
