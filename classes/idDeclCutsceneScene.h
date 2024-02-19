struct idDeclCutsceneScene : idClass
{
    // Name of the scene
    idStr name; // Offset: 0x10

    // Start time of the scene
    unsigned int begin; // Offset: 0x40

    // End time of the scene
    unsigned int end; // Offset: 0x44

    // Actors taking part in this scene.
    idList < idDeclCutsceneSceneActor , TAG_IDLIST , false > sceneActors; // Offset: 0x48

}; // Size: 0x60
