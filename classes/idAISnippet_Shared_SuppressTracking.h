struct idAISnippet_Shared_SuppressTracking : idAISnippet
{
    // tracking type to suppress
    aiFoci_t trackingType; // Offset: 0x18

    // suppression flag (false to release suppression)
    bool suppress; // Offset: 0x1C

}; // Size: 0x20
