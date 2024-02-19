struct idLogicNodeModelHordeTimerListener : idLogicNodeModel
{
    // horde event to listen to for if the timed challenge failed
    idGameChallenge_Horde::hordeEvent_t timedChallengeFailedEvent; // Offset: 0x10

    // horde event to listen to for if the timed challenge was completed
    idGameChallenge_Horde::hordeEvent_t timedChallengeCompletedEvent; // Offset: 0x14

}; // Size: 0x18
