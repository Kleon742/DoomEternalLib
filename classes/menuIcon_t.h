struct menuIcon_t
{
    // Base Icon material
    idMaterial2* icon; // Offset: 0x0

    // Base Icon SWF color
    swfNamedColors_t iconColor; // Offset: 0x8

    // Icon Glow material
    idMaterial2* iconGlow; // Offset: 0x10

    // Icon Glow SWF color
    swfNamedColors_t iconGlowColor; // Offset: 0x18

    // The lookup string that code will use (optional)
    idStr lookup; // Offset: 0x20

}; // Size: 0x50
