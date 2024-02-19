struct goreScreenShakeParms_t
{
    // screen shake by decl
    idDeclViewShake* viewShakeDecl; // Offset: 0x0

    // Advanced screen shake by decl. If this is specified, it will override all of the other screen shake parms.
    idDeclAdvancedViewShake* advancedShakeDecl; // Offset: 0x8

    // rumble decl for weapons
    idDeclRumble* controllerRumbleDecl; // Offset: 0x10

    // screen shake max angles
    idAngles maxAngles; // Offset: 0x18

    // screen shake max offset {{ units = m }}
    idVec3 maxOffset; // Offset: 0x24

    // screen shake magnitude
    float magnitude; // Offset: 0x30

    // start fading shake at this distance {{ units = m }}
    float viewShakeStartDistance; // Offset: 0x34

    // only players views within this distance will be effected (distance of -1 means always in range). Additionally, any effects which require distance fading will be fully faded at this distance {{ units = m }}
    float viewShakeDistance; // Offset: 0x38

}; // Size: 0x40
