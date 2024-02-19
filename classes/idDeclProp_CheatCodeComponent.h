struct idDeclProp_CheatCodeComponent : idDeclProp_UseComponent
{
    // inventory item associated with this cheat
    idDeclInventory* inventoryDecl; // Offset: 0x130

    // The type of cheat code associated with this prop
    idCheatCodeManager::idCheatCodesTypes_t cheatCodeType; // Offset: 0x138

    // The Display String of the Cheat Code ( Shown on the HUD notification )
    idStrId cheatCodeDiscoveredDisplayString; // Offset: 0x13C

    // icon displayed in the Cheat Code acquired notification
    idMaterial2* cheatCodeDiscoveredIcon; // Offset: 0x140

    // codex entry to give with this cheat code
    idDeclCodexEntry* codexEntry; // Offset: 0x148

}; // Size: 0x150
