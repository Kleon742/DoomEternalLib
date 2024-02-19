struct idAnimatorParms_AnimWeb : idAnimatorParms_Base
{
    idDeclAnimWeb* webDecl; // Offset: 0x30

    // spawn id of the entity that owns this web
    idSpawnId ownerSpawnId; // Offset: 0x38

    idStr initialStateName; // Offset: 0x40

    idStr initialSubWebName; // Offset: 0x70

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > curTime; // Offset: 0xA0

    idList < idAtomicString , TAG_IDLIST , false > activeLayers; // Offset: 0xA8

}; // Size: 0xC0
