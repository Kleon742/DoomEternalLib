struct idAISnippet_Shared_PullWeaponTrigger : idAISnippet
{
    // slot to look for weapon
    equipSlot_t equipSlot; // Offset: 0x18

    // if true, use fire control to check if pulling weapon trigger is valid
    bool checkValid; // Offset: 0x1C

    // if checkValid is true, test using these validation tests
    fireControlValidationFlags_t validationFlags; // Offset: 0x20

}; // Size: 0x28
