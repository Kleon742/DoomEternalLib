struct idTarget_Intro : idTarget
{
    // damage def to use
    idDeclDamage* damageDecl; // Offset: 0xB88

    // Damage all the AI with damage Decl.
    bool damageAllAI; // Offset: 0xB90

    // Behead all AI.
    bool decapitateAI; // Offset: 0xB91

}; // Size: 0xB98
