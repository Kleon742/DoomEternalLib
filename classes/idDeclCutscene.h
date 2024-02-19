struct idDeclCutscene : idDeclTypeInfo
{
    // Name of the cutscene
    idStr cutsceneName; // Offset: 0x88

    // Map the cutscene takes place on
    idStr map; // Offset: 0xB8

    // FPS of the cutscene (default: 30)
    int fps; // Offset: 0xE8

    // Actors (entities) taking part in the cutscene
    idList < idDeclCutsceneActor , TAG_IDLIST , false > actors; // Offset: 0xF0

    // Scenes of the cutscene.
    idList < idDeclCutsceneScene , TAG_IDLIST , false > scenes; // Offset: 0x108

}; // Size: 0x120
