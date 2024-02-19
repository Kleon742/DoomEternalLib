struct idTypeInfoGraphItem
{
    // displayed name of subItem
    idAtomicString name; // Offset: 0x8

    // name of implementing class this item belongs to, set upon creation and written out with typeinfo
    idAtomicString className; // Offset: 0x10

}; // Size: 0x18
