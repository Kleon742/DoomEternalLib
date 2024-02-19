struct idUseableSpawnerComponent : idUseableComponent
{
    idDeclProp_SpawnerComponent* componentDecl; // Offset: 0x30

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTimeOutGT; // Offset: 0x38

    int uses; // Offset: 0x40

    // How many have we dropped so far.
    int numDroppedItems; // Offset: 0x44

}; // Size: 0x48
