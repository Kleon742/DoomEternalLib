struct idPlayerDamageReceivedHistory
{
    damageReceivedNode_t* damageEventsHead; // Offset: 0x8

    idListMap < resourceID_t , const idDeclDamage * > damageDeclMap; // Offset: 0x10

    idListSet < resourceID_t > slayerUnmaskedDamageDecl; // Offset: 0x40

}; // Size: 0x58
