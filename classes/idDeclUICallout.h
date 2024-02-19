struct idDeclUICallout : idGameDeclTypeInfo
{
    // tag joint this callout will be attached to on the md6
    idAtomicString tagJoint; // Offset: 0x90

    // name for entity
    idStrId displayName; // Offset: 0x98

    // date of recording
    idStrId date; // Offset: 0x9C

    // details string for recording
    idStrId details; // Offset: 0xA0

    // length in milliseconds for the playback
    idTypesafeTime < int , millisecondUnique_t , 1000 > runtime; // Offset: 0xA4

}; // Size: 0xA8
