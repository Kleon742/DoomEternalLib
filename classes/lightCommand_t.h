struct lightCommand_t
{
    // list of additionalLights to target
    idList < idManagedClassPtr < idLight > , TAG_IDLIST , false > additionalLights; // Offset: 0x0

    // command to send to the lights
    lightCommandType_t commandType; // Offset: 0x18

    // the color to use in the command
    idColor color; // Offset: 0x1C

    // time in secs to use
    float fadeTimeSec; // Offset: 0x2C

    // the intensity to set the light to
    float intensity; // Offset: 0x30

    // radii along axis {{ units = m }}
    idVec3 radius; // Offset: 0x34

    // send command to the entity target list also
    bool useAdditionalLightsOnly; // Offset: 0x40

    // the light material to use
    idMaterial2* lightMaterial; // Offset: 0x48

    // time to wait before we trigger the next command
    float waitTimeSec; // Offset: 0x50

    // Specifies the next command in this command list to run after this command. Use -1 to continue to the next command in the list. This parameter is ignored if the controller has been reactivated by the next time this command is run.
    int nextCommandIndex; // Offset: 0x54

}; // Size: 0x58
