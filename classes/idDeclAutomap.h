struct idDeclAutomap : idGameDeclTypeInfo
{
    struct idAutomapRenderModel_t
    {
        // Rendermodel to use for objectives.
        idStrRenderModel rendermodel; // Offset: 0x0

        // Material to use for objectives.
        idMaterial2* material; // Offset: 0x8

    }; // Size: 0x10

    struct idAutomapPointLight_t
    {
        // Offset applied to the light's origin before being sent to the shader
        idVec3 originOffset; // Offset: 0x0

        // The color of the point light
        idColor lightColor; // Offset: 0xC

        // The radius of the point light
        float lightRadius; // Offset: 0x1C

        // How fast do we fluctuate if doesLightPulse is set to true
        float pulseSpeed; // Offset: 0x20

        // If true, the light will expand and contract based on a sin wave function
        bool doesLightPulse; // Offset: 0x24

        // If true, the map's offset is also added to the originOffset
        bool applyMapOffsetToOriginOffset; // Offset: 0x25

        idVec3 lightOrigin; // Offset: 0x28

    }; // Size: 0x34

    // offset for the map.
    idVec3 mapOffset; // Offset: 0x90

    // Rendermodel to use for objectives (TODO: should point to an automapProperties decl instead)
    idDeclAutomap::idAutomapRenderModel_t objectiveRendermodel; // Offset: 0xA0

    // automapProperties to use for fast travel icon
    idDeclAutomapProperties* fastTravelAutomapProperties; // Offset: 0xB0

    // color used with map material for when an area is revealed but not yet traversed
    idColor revealedAndNotTraversedColor; // Offset: 0xB8

    // color used with map material when an area is revealed and traversed
    idColor revealedAndTraversedColor; // Offset: 0xC8

    // Point light that follows the player around :: (Warning, to see changes to Automap lights you must reload map)
    idDeclAutomap::idAutomapPointLight_t playerPointLight; // Offset: 0xD8

    // Point light that follows the demon player around :: (Warning, to see changes to Automap lights you must reload map)
    idDeclAutomap::idAutomapPointLight_t demonPlayerPointLight; // Offset: 0x10C

    // When the camera is centered on the player, the camera's offset distance is set to this value. Note: be aware of the min/max zoom cvars!
    float cameraZoomForPlayerFocus; // Offset: 0x140

    // When the camera is centered on a map group or fast travel point, the camera's offset distance is set to this value.
    float cameraZoomForFastTravelFocus; // Offset: 0x144

    // When the Automap is opened, these are the initial desired angles
    idAngles desiredCameraAngleOnMapOpen; // Offset: 0x148

    // If m_usePlayerYawForCameraAngleYawOnMapOpen is true, then this offset is applied to the desired yaw
    float yawOffsetFromPlayerYaw; // Offset: 0x154

    // If true, the desired angle is overridden with the player's yaw
    bool usePlayerYawForCameraAngleYawOnMapOpen; // Offset: 0x158

    // If true, the map is initially completely revealed as not traversed
    bool revealWholeMapAsNotTraversed; // Offset: 0x159

    // Player Profile decl with player Automap related params
    idDeclAutomapPlayerProfile* automapPlayerProfile; // Offset: 0x160

    // Sound profile decl with sound events for the Automap
    idDeclAutomapSoundProfile* automapSoundProfile; // Offset: 0x168

    // List of Map Groups, which is a container for a collection of Map Sections
    idList < idAutomapMapGroupData , TAG_IDLIST , false > mapGroups; // Offset: 0x170

}; // Size: 0x188
