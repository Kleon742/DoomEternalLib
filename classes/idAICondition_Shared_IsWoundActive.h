struct idAICondition_Shared_IsWoundActive : idAICondition
{
    // wound decls to check
    idList < idDeclGoreWound * , TAG_IDLIST , false > woundList; // Offset: 0x18

    // if true, require all wounds in list to validate for condition to be true
    bool requireAll; // Offset: 0x30

}; // Size: 0x38
