struct idTypeInfoNode
{
    idStr type; // Offset: 0x0

    idStr ops; // Offset: 0x30

    idStr name; // Offset: 0x60

    idStr value; // Offset: 0x90

    idStr comment; // Offset: 0xC0

    idTypeInfoNode* next; // Offset: 0xF0

    idTypeInfoNode* children; // Offset: 0xF8

    idTypeInfoNode* parent; // Offset: 0x100

    // place an exclamation mark to skip this object
    bool skip; // Offset: 0x108

    // set if this node is different
    bool diff; // Offset: 0x109

    idStr oldValue; // Offset: 0x110

}; // Size: 0x140
