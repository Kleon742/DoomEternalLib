struct deferredAIEvent_t
{
    idStaticList < idEventArg , 8 , false , TAG_IDLIST > args; // Offset: 0x0

    idEventReceiver* receiver; // Offset: 0xD8

    idEventDef* eventPtr; // Offset: 0xE0

    idTypesafeTime < int , millisecondUnique_t , 1000 > ms; // Offset: 0xE8

}; // Size: 0xF0
