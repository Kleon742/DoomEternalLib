struct idHUDEvent_SuitManagerUpdate
{
    struct suitFamilyInfo_t
    {
        // Display name of the Package.
        idStrId display; // Offset: 0x0

        // Description of the Package.
        idStrId description; // Offset: 0x4

        // Description of how to unlock the Package
        idStrId unlockDescription; // Offset: 0x8

        // Icon of the Package.
        idMaterial2* iconMaterial; // Offset: 0x10

        idDeclPerk* suitUpgrades[4]; // Offset: 0x18

        // How many have we gotten.
        int acquiredSuitUpgrades; // Offset: 0x38

        int categoryIndex; // Offset: 0x3C

        bool categoryUnlocked; // Offset: 0x40

        swfNamedColors_t color; // Offset: 0x44

    }; // Size: 0x48

    idHUDEvent_SuitManagerUpdate::suitFamilyInfo_t info; // Offset: 0x0

}; // Size: 0x48
