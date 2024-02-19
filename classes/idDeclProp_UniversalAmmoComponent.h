struct idDeclProp_UniversalAmmoComponent : idDeclProp_UseComponent
{
    struct ammoItem_t
    {
        // ammo type to add
        idDeclAmmo* ammoType; // Offset: 0x0

        // amount of ammo to add
        int count; // Offset: 0x8

        // amount of bonus ammo to add if player is allowed
        int bonusCount; // Offset: 0xC

    }; // Size: 0x10

    struct throwableItem_t
    {
        // throwable item to add
        idDeclThrowable* item; // Offset: 0x0

        // amount of item to add
        int count; // Offset: 0x8

        // amount of bonus item to add if player is allowed
        int bonusCount; // Offset: 0xC

    }; // Size: 0x10

    // All the ammo types this pickup can give
    idList < idDeclProp_UniversalAmmoComponent::ammoItem_t , TAG_IDLIST , false > ammoItems; // Offset: 0x130

    // All the throwable items this pickup can give
    idList < idDeclProp_UniversalAmmoComponent::throwableItem_t , TAG_IDLIST , false > throwableItems; // Offset: 0x148

}; // Size: 0x160
