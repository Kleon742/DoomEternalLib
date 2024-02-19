struct idTarget_LightController : idBloatedEntity
{
    // the list of commands to use
    idList < lightCommand_t , TAG_IDLIST , false > commandList; // Offset: 0xB88

    // Number of times to loop the commands. Specify -1 to loop infinitely.
    int loopCount; // Offset: 0xBA0

    // execute one command per activate call instead of relying on the command waits
    bool oneCMDPerActivate; // Offset: 0xBA4

    // initiate the commands on spawn
    bool activateOnSpawn; // Offset: 0xBA5

    int currentCmd; // Offset: 0xBA8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentCmdEndTime; // Offset: 0xBB0

    int timesActivated; // Offset: 0xBB8

}; // Size: 0xBC0
