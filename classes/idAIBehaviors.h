struct idAIBehaviors : idClass
{
    // the behavior typeinfo decl this behavior uses.
    idDeclAIBehavior* decl; // Offset: 0x10

    // AI events
    idDeclAIBehaviorEvents* declBehaviorEvents; // Offset: 0x18

    // available attacks
    idDeclAttackGraph* attackGraph; // Offset: 0x20

    // if true, AI should react to social percepts when not in combat
    bool useAmbientSocialBehavior; // Offset: 0x28

}; // Size: 0x30
