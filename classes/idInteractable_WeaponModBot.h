struct idInteractable_WeaponModBot : idInteractable_LootDrop
{
    // Where do we place the camera while doing this minigame.
    idAtomicString guiCameraTag; // Offset: 0x2C18

    // codex to give on use.
    idDeclCodexEntry* useCodex; // Offset: 0x2C20

    // Codex to give when a weapon has been fully modded.
    idDeclCodexEntry* finishWeaponCodex; // Offset: 0x2C28

    // sound we play when enter, 2d
    idSoundEvent* enterSound; // Offset: 0x2C30

    // Order that the modbot should appear in the mission screen.
    int dossierOrder; // Offset: 0x2C38

}; // Size: 0x2C40
