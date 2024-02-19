struct idInteractable_LootCrate : idInteractable_LootDrop
{
    // health loot decl
    idDeclLootDrop* healthLootDecl; // Offset: 0x2C18

    // armor loot decl
    idDeclLootDrop* armorLootDecl; // Offset: 0x2C20

    // ammo loot decl
    idDeclLootDrop* ammoLootDecl; // Offset: 0x2C28

    // how much health to drop
    int healthAmountToDrop; // Offset: 0x2C30

    // how much armor to drop
    int armorAmountToDrop; // Offset: 0x2C34

    // how much armor to drop
    int ammoAmountToDrop; // Offset: 0x2C38

    // offset of loot drop origin
    idVec3 lootSpawnOffset; // Offset: 0x2C3C

}; // Size: 0x2C48
