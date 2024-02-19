struct idTouchComponent : idClass
{
    idSysMutex genericMutex; // Offset: 0x10

    // saved off trigger query for deferred clip gathering.
    idHavokGatherQueryId touchTriggersQuery; // Offset: 0x38

    // saved off list of all the trigger ents we are touching.
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > currentlyTouchingList; // Offset: 0x40

    // list of all player focus entities we are touching
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > playerFocusList; // Offset: 0x58

    int frameId; // Offset: 0x70

    // Entities can specifically turn off the touch component so that it is not updated.
    bool isEnabled; // Offset: 0x74

}; // Size: 0x78
