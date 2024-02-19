struct idLogicNodeHordeTimerListener
{
    enum logicIds_t : int
    {
        INPUT_EVENT_ACTIVATE = 0,
        OUTPUT_EVENT_COMPLETED = 1,
        OUTPUT_EVENT_FAILED = 2
    };

    logicNodeReference_t node; // Offset: 0x0

    // horde event to listen to for if the timed challenge failed
    idGameChallenge_Horde::hordeEvent_t timedChallengeFailedEvent; // Offset: 0x8

    // horde event to listen to for if the timed challenge was completed
    idGameChallenge_Horde::hordeEvent_t timedChallengeCompletedEvent; // Offset: 0xC

    // cache this so we can unregister from events
    uint16 hordeBroadcastSystemId; // Offset: 0x10

}; // Size: 0x14
