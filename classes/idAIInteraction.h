struct idAIInteraction : idBloatedEntity
{
    // the interaction decl used for this interaction
    idDeclAIInteraction* interactionDecl; // Offset: 0xB88

    // game time when interaction started ( < 0 means interaction hasn't started yet or is done )
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0xB90

    // index of next event that will play
    int nextEvent; // Offset: 0xB98

    // the entity that activated the interaction
    idManagedClassPtr < idEntity > activator; // Offset: 0xBA0

}; // Size: 0xBC0
