struct perkDemonCardInfo_t
{
    // Index of card to upgrade/activate, if -1 all cards of a certain type will be upgraded
    int cardIndex; // Offset: 0x0

    // Will turn on card if it is inactive
    bool activateCard; // Offset: 0x4

    // All cards with this category will be upgraded
    idDeclDemonCard::demonCardCategory_t category; // Offset: 0x8

    // Will match all categories EXCEPT the one listed
    bool inverseCategoryMatch; // Offset: 0xC

    // All cards with this payload will be upgraded
    idDeclDemonCard::payloadCommand_t payload; // Offset: 0x10

    // Will match all payloads EXCEPT the one listed
    bool inversePayloadMatch; // Offset: 0x14

    // Upgrade level
    int upgradeIndex; // Offset: 0x18

}; // Size: 0x1C
