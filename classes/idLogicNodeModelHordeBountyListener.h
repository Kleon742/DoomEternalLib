struct idLogicNodeModelHordeBountyListener : idLogicNodeModel
{
    // horde event to listen to for if the bounty failed
    idGameChallenge_Horde::hordeEvent_t bountyFailedEvent; // Offset: 0x10

    // horde event to listen to for if the bounty was completed
    idGameChallenge_Horde::hordeEvent_t bountyCompletedEvent; // Offset: 0x14

}; // Size: 0x18
