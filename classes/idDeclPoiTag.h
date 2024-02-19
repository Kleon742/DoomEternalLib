struct idDeclPoiTag : idGameDeclTypeInfo
{
    // Type of entity we are tagging
    idEntityDefRef entityDef; // Offset: 0x90

    // Sound to play when tagged
    idSoundEvent* soundToPlayWhenTagged; // Offset: 0x98

}; // Size: 0xA0
