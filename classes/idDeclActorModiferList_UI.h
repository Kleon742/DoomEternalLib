struct idDeclActorModiferList_UI : idGameDeclTypeInfo
{
    struct modifierToUiData_t
    {
        // Reference to the actor modifier decl
        idDeclActorModifierRef actorModifier; // Offset: 0x0

        // All demons have the same binds, but we want to show them differently per demon. E.g. If this is set to '_revenant' then the string lookup for the '_jump' action is "#str_bind_demon_jump_revenant"
        idStr bindingAppend; // Offset: 0x8

        // Slot for display in the UI.
        idDeclActorModifier::ActorModifierUISlot_t uiSlot; // Offset: 0x38

        // human-readable name for the item (player may see this)
        idStrId displayName; // Offset: 0x3C

        // the bindset to use while controlling this demon (must match what is in the demon player's entity def)
        bindSet_t demonInputBindSet; // Offset: 0x40

    }; // Size: 0x48

    // list of actor modifiers available for use
    idList < idDeclActorModiferList_UI::modifierToUiData_t , TAG_IDLIST , false > actorModifiers; // Offset: 0x90

}; // Size: 0xA8
