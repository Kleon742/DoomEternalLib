struct idTarget_Award_RushAttack : idTarget
{
    // the list of rush attacks that are availble to unlock
    idList < const idDeclInventory * , TAG_IDLIST , false > rushAttacksToUnlock; // Offset: 0xB88

    // if set to true we don't show the rush selection gui but auto give rushes
    bool automatic; // Offset: 0xBA0

    // whether to also fill the adrenaline meter all the way up
    bool fillMeter; // Offset: 0xBA1

}; // Size: 0xBA8
