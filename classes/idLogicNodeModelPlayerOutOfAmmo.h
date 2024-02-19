struct idLogicNodeModelPlayerOutOfAmmo : idLogicNodeModel
{
    // Ammo type inclusion list
    idList < const idDeclAmmo * , TAG_IDLIST , false > ammoTypes; // Offset: 0x10

}; // Size: 0x28
