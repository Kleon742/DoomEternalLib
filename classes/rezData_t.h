struct rezData_t
{
    // entitydef for the character this proxy should spawn
    idDeclEntityDef* characterDef; // Offset: 0x0

    // entitydef for the portal this proxy should use, if required
    idDeclEntityDef* portalDef; // Offset: 0x8

    // optional entity in map to use as template for characterDef
    idManagedClassPtr < idEntity > archetype; // Offset: 0x10

    // fx decl for things that happen before character actually spawns
    idDeclFX* fxDecl; // Offset: 0x30

}; // Size: 0x38
