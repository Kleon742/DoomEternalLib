struct pvpProgressionItem_t
{
    // the descriptor for the item we are about to give out
    pvpProgressItem_t pvpProgressItem; // Offset: 0x0

    // runes, weapon upgrades
    idDeclPerk* progressPerk; // Offset: 0x8

    // demons to unlock
    idDeclActorModifier* progressDemon; // Offset: 0x10

    // demon deck to unlock
    idDeclDemonCardDeck* progressionDeck; // Offset: 0x18

    // the specific demon card to unlock, these are the button X/Y abilities
    idDeclDemonCard* progressionCard; // Offset: 0x20

}; // Size: 0x28
