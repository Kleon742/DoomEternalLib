struct idMapChangeListener
{
    enum mapChange_t : int
    {
        MAPCHANGE_NEW = 0,
        MAPCHANGE_DELETE = 1,
        MAPCHANGE_FREED = 2,
        MAPCHANGE_ENTITY_ADDED = 3,
        MAPCHANGE_ENTITY_REMOVED = 4,
        MAPCHANGE_ENTITY_EDITED_DO = 5,
        MAPCHANGE_ENTITY_EDITED_UNDO = 6,
        MAPCHANGE_ENTITY_EDITED_REDO = 7,
        MAPCHANGE_REFMAP_ADDED = 8
    };

}; // Size: 0x8
