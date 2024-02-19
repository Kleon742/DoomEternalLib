struct idEvent : idClass
{
    idEventDef* eventdef; // Offset: 0x10

    idEventArg args[9]; // Offset: 0x18

    // only used for strings
    idHeapArray < unsigned char , TAG_HEAP_ARRAY > data; // Offset: 0xF0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > time; // Offset: 0x108

    idEventReceiver* object; // Offset: 0x110

}; // Size: 0x118
