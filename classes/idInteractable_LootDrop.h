struct idInteractable_LootDrop : idInteractable
{
    // loot component
    idLootDropComponent lootDropComponent; // Offset: 0x2B50

    // Does this entity drop loot on use ( or from animevent )
    bool dropLootOnUse; // Offset: 0x2BE8

    idManagedClassPtr < idPlayer > playerActivator; // Offset: 0x2BF0

    // How many times we can use the lootbox.
    int numberOfUses; // Offset: 0x2C10

    // How many times they've used the lootbox.
    int uses; // Offset: 0x2C14

}; // Size: 0x2C18
