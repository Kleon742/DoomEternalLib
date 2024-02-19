struct idAISnippet_Shared_Suicide : idAISnippet
{
    // if NULL, AI will use what is defined in idDeclAIBehaviors::damageBehaviors::suicideDamage
    idDeclDamage* suicideDamage; // Offset: 0x18

    // if true, this suicide represents a bad thing, and should be warned/trapped by programmer
    bool warnAndTrap; // Offset: 0x20

}; // Size: 0x28
