struct idDeclRumble : idDeclTypeInfo
{
    // loop when finished
    bool looping; // Offset: 0x88

    // rumble is interruptable
    bool interruptable; // Offset: 0x89

    // duration of rumble (in sec)
    float durationSec; // Offset: 0x8C

    // priority of rumble (higher number has higher priority) ( 0 priority is normal )
    int priority; // Offset: 0x90

    // fully defined intensity is played within this distance from rumble {{ units = m }}
    float innerRadius; // Offset: 0x94

    // intensity is fully muted outside at this radius. (intensity scaled from mInnerRadius -> mOuterRadius) {{ units = m }}
    float outerRadius; // Offset: 0x98

    // low rumble motor
    idDeclTable* rumbleLow; // Offset: 0xA0

    // high rumble motor
    idDeclTable* rumbleHigh; // Offset: 0xA8

    // ps4 left trigger motor
    idDeclTable* rumbleLeftTrigger; // Offset: 0xB0

    // ps4 right trigger motor
    idDeclTable* rumbleRightTrigger; // Offset: 0xB8

}; // Size: 0xC0
