struct idHUDEvent_UpdateInvasionMenu
{
    struct demonSelectionInfo_t
    {
        int playerNum; // Offset: 0x0

        idDeclActorModifier* actorModifierDecl; // Offset: 0x8

    }; // Size: 0x10

    struct updateInvasionMenuData_t
    {
        idHUDEvent_UpdateInvasionMenu::demonSelectionInfo_t demonSelected[2]; // Offset: 0x0

        int localPlayerNum; // Offset: 0x20

        int numPlayers; // Offset: 0x24

    }; // Size: 0x28

    idHUDEvent_UpdateInvasionMenu::updateInvasionMenuData_t info; // Offset: 0x0

}; // Size: 0x28
