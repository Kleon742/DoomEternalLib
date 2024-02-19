struct idAutomapMapSection
{
    // Rendermodel to use for rendering the map section
    idStrRenderModel automapSectionRenderModel; // Offset: 0x0

    // What encounters are associated with this map section?
    idList < idAutomapSectionEncounterAssociation , TAG_IDLIST , false > encounterAssociations; // Offset: 0x8

}; // Size: 0x20
