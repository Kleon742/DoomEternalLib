struct idInteractable_WorldCache : idInteractable_LootDrop
{
    bool isUsableTestsMaxUpgrades; // Offset: 0x2C18

    int maxUpgradesTextVisibleFrame; // Offset: 0x2C1C

    // codex to give on use.
    idDeclCodexEntry* useCodex; // Offset: 0x2C20

    // sound to play when player is at max upgrades and he tries using a cache
    idSoundEvent* playerAtMaxUpgradesSound; // Offset: 0x2C28

    // used for the special argent cache that needs to keep supressing the pause menu
    bool keepConsumeNonGuiInput; // Offset: 0x2C30

    // do not allow the use of this cache if the suit cheat is active
    bool disableUseOnSuitCheat; // Offset: 0x2C31

}; // Size: 0x2C38
