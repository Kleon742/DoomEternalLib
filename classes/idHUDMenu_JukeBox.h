struct idHUDMenu_JukeBox : idHUDElement
{
    idSWFWidget_List* selectionList; // Offset: 0xF8

    idSWFWidget_CommandBar* commandBar; // Offset: 0x100

    idHUDEvent_JukeboxInfo::jukeboxInfo_t jukeInfo; // Offset: 0x108

    idHUDEvent_JukeboxInfo::jukeboxInfo_t::jukeboxAlbum_t* currentAlbum; // Offset: 0x3C28

    bool showingAlbums; // Offset: 0x3C30

}; // Size: 0x3C38
