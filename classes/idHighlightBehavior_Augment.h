struct idHighlightBehavior_Augment : idHighlightBehavior
{
    // Augment model to use for the highlight
    idRenderModel* highlightedModel; // Offset: 0x90

    // record the last time in view, for fade out LOS behavior
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimeInView; // Offset: 0x98

    // record the last time of flash, for timed fade out
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastFlashTime; // Offset: 0xA0

    // always flash at least once per new flash event
    bool newFlash; // Offset: 0xA8

    // Color ID of the augment outline color
    unsigned int augmentColorId; // Offset: 0xAC

    // Whether or not the augment outline has fill
    bool augmentHighlightFill; // Offset: 0xB0

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > supportEntities; // Offset: 0xB8

}; // Size: 0xD0
