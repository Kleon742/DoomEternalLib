// idTree < idScoreSubsectionDataNode , TAG_IDLIST , false >
template <typename _type_>
struct idTree
{
    // The value stored by this tree node.
    _type_ value; // Offset: 0x0

    // A pointer to the parent tree node. Not dynamically allocated.
    idTree < _type_ , TAG_IDLIST , false >* parent; // Offset: 0x50

    // The list of children of this tree node.
    idList < idTree < _type_ , TAG_IDLIST , false > , TAG_IDLIST , false > children; // Offset: 0x58

    int rowIndex; // Offset: 0x70

}; // Size: 0x78
