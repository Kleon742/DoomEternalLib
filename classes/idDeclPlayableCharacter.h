struct idDeclPlayableCharacter : idGameDeclTypeInfo
{
    // Name of the character
    idStrId displayName; // Offset: 0x90

    // Icon to use in menus
    idMaterial2* icon; // Offset: 0x98

    // The entity def that is used in-game
    idEntityDefRef inGameEntityDef; // Offset: 0xA0

    // The simplified entity def that is used out-of-game (in the menus)
    idEntityDefRef outOfGameEntityDef; // Offset: 0xA8

    // Third person cinematic character
    idEntityDefRef cinematicEntityDef; // Offset: 0xB0

    // Photo Mode stand-in entity for poses.
    idEntityDefRef standInEntityDef; // Offset: 0xB8

    // These are the only demon decks that can be used by this character
    idList < idDeclDemonCardDeckRef , TAG_IDLIST , false > allowedDemonDecks; // Offset: 0xC0

    // These are the list of ui info for display in the UI
    idList < characterAbilityUIInfo , TAG_IDLIST , false > abilityUIInfo; // Offset: 0xD8

    // These are the list of ui info for display in the UI
    idList < characterAbilityUIInfo , TAG_IDLIST , false > actionUIInfo; // Offset: 0xF0

    // FX that are propigated as soon as this character is visible
    idEntityDefRef arrivalFX; // Offset: 0x108

    // How long to delay the show of character for.
    idTypesafeTime < int , millisecondUnique_t , 1000 > podiumShowDelayTime; // Offset: 0x110

    // Does this character use weapon skins for customization
    bool usesWeaponSkins; // Offset: 0x114

}; // Size: 0x118
