struct idInteractable_Rune : idInteractable_LootDrop
{
    // Where do we place the camera while doing this minigame.
    idAtomicString guiCameraTag; // Offset: 0x2C18

    // codex to give on use.
    idDeclCodexEntry* useCodex; // Offset: 0x2C20

    // Codex to give when a rune has been fully given.
    idDeclCodexEntry* runeCodex; // Offset: 0x2C28

    // Order that the modbot should appear in the mission screen.
    int dossierOrder; // Offset: 0x2C30

    // Is this for giving support runes ( false by default )
    bool supportRune; // Offset: 0x2C34

    // We had all runes, and we arent using this anymore.
    bool cannotUseAnymore; // Offset: 0x2C35

}; // Size: 0x2C38
