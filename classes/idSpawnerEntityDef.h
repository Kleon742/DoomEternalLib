struct idSpawnerEntityDef
{
    // entity name
    idStr name; // Offset: 0x0

    // entityDef text
    idStr text; // Offset: 0x30

    // bounds of the entity to spawn ( set by the entity's spawn function )
    idBounds bounds; // Offset: 0x60

    // cached run time resolved def so we don't constantly have to do name searches
    idDeclEntityDef* def; // Offset: 0x78

}; // Size: 0x80
