struct idDamageableAttachment : idBloatedEntity
{
    // Simple health
    float baseHealth; // Offset: 0xB88

    // Component list
    idList < idTypeInfoObjectPtr < idEntityComponent > , TAG_IDLIST , false > entityComponents; // Offset: 0xB90

}; // Size: 0xBA8
