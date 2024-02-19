struct idResourceList
{
    struct queuedCopyToCooked_t
    {
        resourceList_t* resourceList; // Offset: 0x0

        idStr resourceName; // Offset: 0x8

        idStr filename; // Offset: 0x38

        idResourceVariation variation; // Offset: 0x68

    }; // Size: 0x70

    resourceList_t* resourceList; // Offset: 0x8

    char* typeName; // Offset: 0x10

    char* className; // Offset: 0x18

    idResourceList* next; // Offset: 0x20

    void (*postInitCallback)(idResourceList * const resourceList); // Offset: 0x28

}; // Size: 0x30
