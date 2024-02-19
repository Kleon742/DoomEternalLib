struct idDeclAbility_Ruin : idDeclInventory
{
    // "dramatic pause" (in secs) after weapon slams to ground
    float highlightAreaPauseSec; // Offset: 0x3F8

    // max distance (in front of player) where AI will be damaged {{ units = m }}
    float maxDamageDistance; // Offset: 0x3FC

    // AI outside of this angle will be ignored (if 45 degrees to each side, this should be 90)
    float fovDamageAngle; // Offset: 0x400

    // speed at which player drops to ground, before slamming weapon and activating ruin {{ units = m / s }}
    float dropToGroundVelocity; // Offset: 0x404

    // damage Ai receives when player lands on AI while dropping from air
    idDeclDamage* damageFromDroppingDecl; // Offset: 0x408

    // damage Ai receives when ruin is activated
    idDeclDamage* damageFromRuinDecl; // Offset: 0x410

}; // Size: 0x418
