struct idActorModifierComponent : idEventReceiver
{
    idManagedClassPtr < idActor > parent; // Offset: 0x38

    // TypeInfo doesn't like this when it is a reference.
    idInventoryCollection* inventory; // Offset: 0x58

    idList < idActorModifierItem * , TAG_IDLIST , false > items; // Offset: 0x60

    // Notes: convert to static list of 8 or 16? (16 seems fairly reasonable, 8 might be too small)
    idArray < idActorModifier , 3 > modifiers; // Offset: 0x78

    // Increments each time a modifier is added to the inventory.
    unsigned int modifierUIDCounter; // Offset: 0xC90

    // This is used as a unique identifier for each instance of a modifier.
    idArray < idActorModifierVar , 12 > modValues; // Offset: 0xC98

}; // Size: 0xE78
