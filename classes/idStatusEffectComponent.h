struct idStatusEffectComponent
{
    // The entity owner.
    idManagedClassPtr < idEntity > owner; // Offset: 0x0

    // List of currently active effects.
    idStaticList < idStatusEffect * , 10 , false , TAG_IDLIST > activeStatusEffects; // Offset: 0x20

}; // Size: 0x88
