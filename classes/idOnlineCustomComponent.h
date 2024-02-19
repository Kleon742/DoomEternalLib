struct idOnlineCustomComponent : idUseableComponent
{
    // the data for this class
    idDeclProp_OnlineCustomComponent* componentData; // Offset: 0x30

    // each players unique loadout prop
    idStaticList < idUseableComponent * , 12 , false , TAG_IDLIST > onlinePlayersUseComponents; // Offset: 0x38

}; // Size: 0xB0
