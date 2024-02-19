struct idInteractable_Minigame : idInteractable_LootDrop
{
    enum minigameStates_t : int
    {
        MINIGAME_STATE_INVALID = 0,
        MINIGAME_STATE_IDLE = 1,
        MINIGAME_STATE_USING = 2,
        MINIGAME_STATE_COMPLETE = 3,
        MINIGAME_STATE_LOCKED = 4,
        NUM_MINIGAME_STATES = 5
    };

    // for breach minigame.
    idInteractable_Minigame::minigameStates_t minigameState; // Offset: 0x2C18

    // breach code and location pairs for displaying on gui.
    idStaticList < breachCodeInfo_t , 5 , false , TAG_IDLIST > guiBreachInfo; // Offset: 0x2C20

    // Where do we place the camera while doing this minigame.
    idAtomicString guiCameraTag; // Offset: 0x2D50

    // Screenshake decl to use
    idDeclViewShake* declScreenShake; // Offset: 0x2D58

    // minigame sound array
    idArray < idSoundEvent * , 32 > minigameSounds; // Offset: 0x2D60

}; // Size: 0x2E60
