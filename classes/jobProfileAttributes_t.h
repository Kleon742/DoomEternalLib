struct jobProfileAttributes_t
{
    jobProfileLabel_t label; // Offset: 0x0

    jobProfileLabel_t priorityLabels[5]; // Offset: 0x10

    jobClass_t jobClass; // Offset: 0x70

}; // Size: 0x78
