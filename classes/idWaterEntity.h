struct idWaterEntity : idEnvironmentalDamage_Hurt_Trigger
{
    // 0.004 = water, higher numbers are more dense (causing more things to float) {{ units = kg / ( m * m * m ) }}
    float density; // Offset: 0xD78

    // 1.0f = water, higher numbers are thicker (causing things to move more slowly)
    float viscosity; // Offset: 0xD7C

    // modify the jump dist for the place
    float jumpModifier; // Offset: 0xD80

    // modify the dash by a multiplier for buoyancy calculation
    float dashModifier; // Offset: 0xD84

    // dash movement table for this volume
    idDeclTable* dashMoveTable; // Offset: 0xD88

    // scale for gravity in this volume
    float gravityScale; // Offset: 0xD90

    // Current (as in river) direction / magnitude {{ units = kg * m / ( s * s ) }}
    idVec3 current; // Offset: 0xD94

    // How much damage to do to the player / second
    idDeclDamage* damage; // Offset: 0xDA0

    // Post-effects environment decl for this water volume
    idDeclEnv* envWaterEffects; // Offset: 0xDA8

    // override surftype used for determining which effects to play while in the water
    surfTypes_t surfTypeOverride; // Offset: 0xDB0

    // the scale of the environmental damage
    float envDamageScale; // Offset: 0xDB4

    // the scale of the environmental damage
    bool fromWaterDampening; // Offset: 0xDB8

    // damage decl to apply
    idDeclDamage* damageDecl; // Offset: 0xDC0

    idBuoyancy buoyancy; // Offset: 0xDC8

}; // Size: 0x11E0
