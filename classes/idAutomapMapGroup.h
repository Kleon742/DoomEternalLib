struct idAutomapMapGroup
{
    // The group ID of the Automap Map Group
    automapMapGroupId_t mapGroupId; // Offset: 0x0

    // The name associated with the Automap Map Group
    idStr mapGroupName; // Offset: 0x8

    // Readable/localized version of the name
    idStrId readableName; // Offset: 0x38

    // The image used with the map group in displays
    idMaterial2* mapGroupImage; // Offset: 0x40

    // Map sections. These are map LWOs
    idList < idAutoMapObject , TAG_IDLIST , false > mapSections; // Offset: 0x48

    // Fog of war related Job handle for fog of war reveals
    jobHandle_t jobFogOfWarReveals; // Offset: 0x60

    // The Fog of war system.
    idAutomapFogOfWar fogOfWar; // Offset: 0x68

    // Map group bounds. Differs from fog-of-war bounds since fog-of-war bounds may be modified to meet minimum tile size.
    idBounds bounds; // Offset: 0xD0

    // Entity name of fast travel point to center camera on when previewing the group
    idStr focusFastTravelPoint; // Offset: 0xE8

    // Ping-pong buffer for fog reveal requests (add requests to curr while requests are processed from prev, swap each frame)
    idList < idAutomapFogOfWar_Reveal , TAG_IDLIST , false >* fogRevealRequestsCurr; // Offset: 0x118

    idList < idAutomapFogOfWar_Reveal , TAG_IDLIST , false >* fogRevealRequestsPrev; // Offset: 0x120

    idList < idAutomapFogOfWar_Reveal , TAG_IDLIST , false > fogRevealRequestsBuffer0; // Offset: 0x128

    idList < idAutomapFogOfWar_Reveal , TAG_IDLIST , false > fogRevealRequestsBuffer1; // Offset: 0x140

    // If True, the player has discovered this map group and it is available for Fast Travel
    bool mapGroupHasBeenDiscoveredByPlayer; // Offset: 0x158

}; // Size: 0x160
