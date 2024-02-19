struct idLogicNodeTutorial
{
    enum logicIds_t : int
    {
        INPUT_TUTORIAL = 0,
        OUTPUT_NONE = 1,
        OUTPUT_TUTORIAL = 2
    };

    logicNodeReference_t node; // Offset: 0x0

    idDeclTutorialEvent* tutorialDecl; // Offset: 0x8

    // cache this so we can unregister from events
    uint16 playerBroadcastSystemId; // Offset: 0x10

    bool hasBeenTriggered; // Offset: 0x12

    unsigned int hashedNodeValue; // Offset: 0x14

    bool oneActivationPerProfile; // Offset: 0x18

}; // Size: 0x20
