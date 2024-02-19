struct idDeclTutorialEvent : idGameDeclTypeInfo
{
    enum tutorialType_t : int
    {
        TUTORIAL_DEFAULT = 0,
        TUTORIAL_SIMPLE = 1
    };

    enum tutorialSpecialType_t : int
    {
        TUTORIAL_SPECIAL_NONE = 0,
        TUTORIAL_SPECIAL_CROUCH = 1,
        TUTORIAL_SPECIAL_QUICKSELECTOR = 2,
        TUTORIAL_PROGRESSION_WEAPON_POINTS = 3,
        TUTORIAL_PROGRESSION_PRAETOR_POINTS = 4,
        TUTORIAL_PROGRESSION_MODBOTS = 5,
        TUTORIAL_PROGRESSION_MODBOTS_PRAETOR_POINTS = 6,
        TUTORIAL_PROGRESSION_WEAPON_AND_PRAETOR = 7
    };

    enum tutorialSpeedType_t : int
    {
        TUTORIAL_SPEED_NORMAL = 0,
        TUTORIAL_SPEED_SLOWMO = 1,
        TUTORIAL_SPEED_STOPTIME = 2
    };

    enum tutorialQuickLaunch_t : int
    {
        TUTORIAL_QUICKLAUNCH_NONE = -1,
        TUTORIAL_QUICKLAUNCH_DOSSIER_MISSION = 0,
        TUTORIAL_QUICKLAUNCH_DOSSIER_ARSENAL = 1,
        TUTORIAL_QUICKLAUNCH_DOSSIER_SUIT = 2,
        TUTORIAL_QUICKLAUNCH_DOSSIER_CODEX = 3,
        TUTORIAL_QUICKLAUNCH_DOSSIER_RESEARCH = 4,
        TUTORIAL_QUICKLAUNCH_DOSSIER_CODEX_PAGE = 5,
        TUTORIAL_QUICKLAUNCH_DOSSIER_CODEX_TUTORIAL = 6
    };

    enum tutorialPromptType_t : int
    {
        TUTORIAL_PROMPT_NONE = 0,
        TUTORIAL_PROMPT_OK = 1,
        TUTORIAL_PROMPT_ACCEPT = 2,
        TUTORIAL_PROMPT_YES = 3
    };

    struct tutorialObjective_t
    {
        // Are we waiting for any of these button presses
        usercmdButton_t inputButton; // Offset: 0x0

        // The text for the task the player is to perform
        idStrId objectiveText; // Offset: 0x8

        // Continuously play complete state on input or do it only the first time pressed
        bool fireOnlyOnce; // Offset: 0xC

        // The input button should be displayed in the string
        bool displayInput; // Offset: 0xD

        // This will listen for a damage type of this kind to come from the idLogicNodeDamageListener
        idList < idDeclDamage * , TAG_IDLIST , false > damageType; // Offset: 0x10

    }; // Size: 0x28

    // heading text for the tutorial if one
    idStrId headingText; // Offset: 0x90

    // body text for the tutorial
    idStrId bodyText; // Offset: 0x94

    // List of images to show with the tutorial. Max supported is 3 (as of 04/01/2019).
    idList < const idMaterial2 * , TAG_IDLIST , false > tutorialImages; // Offset: 0x98

    // A video to show. This is only used if 'tutorialImages` is empty.
    idMaterial2* tutorialVideo; // Offset: 0xB0

    // type of tutorial information
    idDeclTutorialEvent::tutorialType_t type; // Offset: 0xB8

    // special type of tutorial
    idDeclTutorialEvent::tutorialSpecialType_t special; // Offset: 0xBC

    // speed type of tutorial: Normal = doesn't change game speed, Slow-Mo = puts the game into slow motion, StopTime = stops time and inhibits player controls
    idDeclTutorialEvent::tutorialSpeedType_t speed; // Offset: 0xC0

    // Do we have a quick launch option.
    idDeclTutorialEvent::tutorialQuickLaunch_t quicklaunch; // Offset: 0xC4

    // bindset used if actions are present in tutorial
    int bindset; // Offset: 0xC8

    // action if one to wait on.
    idStr action; // Offset: 0xD0

    // actions that aren't what we're waiting on, but will cancel if they happen
    idList < idStr , TAG_IDLIST , false > cancelActions; // Offset: 0x100

    // if not null player must not have this gamestateint. will set it when the target fires.
    idDeclGameStateInt* gameStateInt; // Offset: 0x118

    // currently used to determine whether or not to show the engineering screen after the lockgrinder tutorial
    idDeclInventory* inventoryDecl; // Offset: 0x120

    // if true and there is a current tutorial shown without this, then don't show this.
    bool lowPriorityTutorial; // Offset: 0x128

    // don't pause if this is set
    bool skipPause; // Offset: 0x129

    // how much time to wait before showing the tutorial
    idTypesafeTime < int , millisecondUnique_t , 1000 > startDelayMS; // Offset: 0x12C

    // if skipPause is true and this is > 0, remove this tutorial after this amount of time.
    idTypesafeTime < int , millisecondUnique_t , 1000 > removeAfterMS; // Offset: 0x130

    // scale of the tutorial render Model. Set this when showInPlace is used
    float scale; // Offset: 0x134

    // highest difficulty that the tutorial will show
    gameDifficulty_t maximumDifficulty; // Offset: 0x138

    // If enabled this tutorial will show even if the player has turned off tutorials in the game settings
    bool ignoreSettings; // Offset: 0x13C

    // How fast Slowmotion is.
    float slowmotionScale; // Offset: 0x140

    // the list of strings to be displayed in the body text if this is a sequence
    idList < idStrId , TAG_IDLIST , false > bodyTextList; // Offset: 0x148

    // the time to display each string if this is a sequence
    idList < idTypesafeTime < int , millisecondUnique_t , 1000 > , TAG_IDLIST , false > displayTimeList; // Offset: 0x160

    // Can this tutorial be dismissed by pushing B?
    bool dismissible; // Offset: 0x178

    // is this tutorial used in multiplayer?
    bool isMultiplayer; // Offset: 0x179

    // is this tutorial to be drawn while in the dossier or other full screen gui is up?
    bool drawAboveGUIS; // Offset: 0x17A

    // trigger a mod swap on tutorial dismiss
    bool triggerModSwap; // Offset: 0x17B

    // the type of button prompts to show
    idDeclTutorialEvent::tutorialPromptType_t promptType; // Offset: 0x17C

    // keyNum button for dismissing the tutorial
    keyNum_t dismissButton; // Offset: 0x180

    // keyNum button for dismissing the tutorial
    keyNum_t dismissButtonPC; // Offset: 0x184

    // bind to press to dismiss tutorial
    cmdGenButton_t dismissCommand; // Offset: 0x188

    // body text for the tutorial
    idStrId dismissText; // Offset: 0x18C

    // The hud event fired
    hudEventID_t hudEvent; // Offset: 0x190

    // menu id to show on dismiss
    hudMenuID_t menuToShowOnDismiss; // Offset: 0x194

    // dossier page to force you to
    dossierPage_t desiredDossierPage; // Offset: 0x198

    // codex entry to force-open when showing the dossier
    idDeclCodexEntry* desiredDossierCodexEntry; // Offset: 0x1A0

    // the menu event to broadcast on dismissal (for the shell)
    menuEventID_t menuEventOnDismiss; // Offset: 0x1A8

    // sound to play when activating (showing) this tutorial
    idSoundEvent* activateSound; // Offset: 0x1B0

    // list of maps to prevent showing this tutorial on
    idList < idStrMapName , TAG_IDLIST , false > mapExclusions; // Offset: 0x1B8

    // exclude this tutorial for master levels
    bool excludeFromMasterLevels; // Offset: 0x1D0

    // the option objective set used in the tutorial hud. the objectives that this tutorial requires ( if any )
    idList < idDeclTutorialEvent::tutorialObjective_t , TAG_IDLIST , false > activeObjectives; // Offset: 0x1D8

}; // Size: 0x1F0
