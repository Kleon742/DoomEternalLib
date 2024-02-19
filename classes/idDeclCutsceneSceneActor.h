struct idDeclCutsceneSceneActor : idClass
{
    // Name of a actor in the cutscene
    idStr actorName; // Offset: 0x10

    // Animation keys for the actor this scene.
    idList < idDeclCutsceneKey , TAG_IDLIST , false > keys; // Offset: 0x40

}; // Size: 0x58
