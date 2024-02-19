struct idAudioLogComponent : idClass
{
    // Owner of the component.
    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x10

    // The list of stories the component keeps track of.
    idList < const idDeclAudioLogStory * , TAG_IDLIST , false > stories; // Offset: 0x30

    // list of how many we've collected.
    idList < int , TAG_IDLIST , false > collected; // Offset: 0x48

}; // Size: 0x60
