struct idScoreSubsectionDataNode
{
    struct trackedScoreTypeData_t
    {
        idDeclScoringItem::scoreEventType_t scoreType; // Offset: 0x0

        unsigned int score; // Offset: 0x4

        unsigned int count; // Offset: 0x8

    }; // Size: 0xC

    idStr sectionName; // Offset: 0x0

    int sectionIndex; // Offset: 0x30

    int scoreTotal; // Offset: 0x34

    idList < idScoreSubsectionDataNode::trackedScoreTypeData_t , TAG_IDLIST , false > stats; // Offset: 0x38

}; // Size: 0x50
