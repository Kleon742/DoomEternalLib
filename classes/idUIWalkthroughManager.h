struct idUIWalkthroughManager : idEventReceiver
{
    struct SWFWidgetEventComparisonHelper_t
    {
        idSWFWidgetEvent* pointerToEvent; // Offset: 0x0

        idSWFWidgetEvent myEvent; // Offset: 0x8

    }; // Size: 0x140

    struct uiWalkthroughTutorials_t
    {
        // The battlemode lobby tutorial decl
        idDeclUIWalkthroughMenuBase* battlemodeLobbyTutorial; // Offset: 0x0

        // The battlemode lobby tutorial decl ( part 2: electric boogaloo )
        idDeclUIWalkthroughMenuBase* battlemodeLobbyTutorialPart2; // Offset: 0x8

        // The battlemode lobby tutorial decl ( part 3: the third 1 )
        idDeclUIWalkthroughMenuBase* battlemodeLobbyTutorialPart3; // Offset: 0x10

        // The arsenal tutorial decl
        idDeclUIWalkthroughMenuBase* arsenalTutorial; // Offset: 0x18

        // The praetor suit tutorial decl
        idDeclUIWalkthroughMenuBase* praetorSuitTutorial; // Offset: 0x20

        // The mod bot walkthrough tutorial
        idDeclUIWalkthroughMenuBase* modBotTutorial; // Offset: 0x28

        // The argent cell walkthrough tutorial
        idDeclUIWalkthroughMenuBase* argentCellTutorial; // Offset: 0x30

        // The rune walkthrough tutorial
        idDeclUIWalkthroughMenuBase* runeTutorial; // Offset: 0x38

        // The interact state that the rune interact has to enter to trigger the rune tutorial
        idStr runeTutorialInteractState; // Offset: 0x40

        // The support rune walkthrough tutorial
        idDeclUIWalkthroughMenuBase* supportRuneTutorial; // Offset: 0x70

    }; // Size: 0x78

    idUIWalkthroughManager::SWFWidgetEventComparisonHelper_t lastApprovedEvent; // Offset: 0x38

    idList < idUIWalkthroughInstance * , TAG_IDLIST , false > walkthroughInstances; // Offset: 0x178

    idList < const idDeclUIWalkthroughMenuBase * , TAG_IDLIST , false > finishedWalkthroughs; // Offset: 0x190

    uint16 ownerBroadcastSystem; // Offset: 0x1A8

    idManagedClassPtr < idEntity > runeInteractEntity; // Offset: 0x1B0

    // private because CopyTypeInfo complains about protected A set of walkthrough tutorials
    idUIWalkthroughManager::uiWalkthroughTutorials_t walkthroughTutorials; // Offset: 0x1D0

}; // Size: 0x248
