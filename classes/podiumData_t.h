struct podiumData_t
{
    // Entity to Spawn for model.
    idEntityDefRef modelEntityDef; // Offset: 0x0

    // The mastered version of this podium. When the user owns the mastered podium they don't see the base version anymore.
    idDeclWarehouseItem* masteredVersion; // Offset: 0x8

    // offset of the position of the model.
    idVec3 offset; // Offset: 0x10

    // Animations we can use for the model
    idList < podiumAnimationData_t , TAG_IDLIST , false > animations; // Offset: 0x20

}; // Size: 0x38
