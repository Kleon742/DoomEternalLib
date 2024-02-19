struct idDeclCutsceneActor : idClass
{
    // Name of the actor
    idStr name; // Offset: 0x10

    // Model the actor uses
    idStr md6; // Offset: 0x40

    // Type of the actor ( model or camera )
    idDeclCutsceneActorType type; // Offset: 0x70

}; // Size: 0x78
