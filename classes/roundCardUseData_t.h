struct roundCardUseData_t
{
    idDeclDemonCard* cardDecl; // Offset: 0x0

    int numUses; // Offset: 0x8

    int indexVal; // Offset: 0xC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverLastUsedGT; // Offset: 0x10

}; // Size: 0x18
