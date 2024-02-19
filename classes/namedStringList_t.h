struct namedStringList_t
{
    // name of this list
    idAtomicString listName; // Offset: 0x0

    // whether this list is exclusive or inclusive
    bool exclude; // Offset: 0x8

    // list of bodies that are part of the list
    idList < idAtomicString , TAG_IDLIST , false > bodyNames; // Offset: 0x10

}; // Size: 0x28
