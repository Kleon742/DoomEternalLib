struct idBotTargetListSelector
{
    enum targetSelectorType_t : int
    {
        TARGET_SELECTOR_TYPE_CLOSEST_VISIBLE_TARGET = 0,
        TARGET_SELECTOR_TYPE_ESCORT_COMBAT_TARGET = 1,
        TARGET_SELECTOR_TYPE_DOMINATION_COMBAT_TARGET = 2
    };

    // the index of the "best" target in the bots targetRecords list.
    int bestTargetIndex; // Offset: 0x8

    // the entity that is the "best" target.
    idManagedClassPtr < idEntity > bestTarget; // Offset: 0x10

    // a list of all the entities that match this filters requirements
    idList < targetListElement_t , TAG_BOT , false > targetsList; // Offset: 0x30

}; // Size: 0x48
