struct idVolume_PlayerUseProxy : idVolume
{
    struct idUsableProps
    {
        // distance this prop is usable from {{ units = m }}
        float usableDistance; // Offset: 0x0

        // distance this prop will display a usable crosshair {{ units = m }}
        float crosshairDistance; // Offset: 0x4

        // is the prop usable at the moment?
        bool isCurrentlyUsable; // Offset: 0x0

        // if true, deactivate after use
        bool deactivateOnUse; // Offset: 0x0

    }; // Size: 0xC

    // When set, volume must be triggered before it will work
    bool triggerFirst; // Offset: 0xC20

    // parameters for usability
    idVolume_PlayerUseProxy::idUsableProps usableProps; // Offset: 0xC24

    // idTarget_Inventory check to use to test for use conditions
    idManagedClassPtr < idTarget_InventoryCheck > inventoryTest; // Offset: 0xC30

    // idTarget_CurrencyCheck to use to test for use conditions
    idManagedClassPtr < idTarget_CurrencyCheck > currencyTest; // Offset: 0xC50

}; // Size: 0xC70
