struct idAISnippet_Whiplash_WhipEvent : idAISnippet
{
    // which whip event to call
    whipEventType_t eventType; // Offset: 0x18

    // which whip hand to call this event on
    aiHand_t handIndex; // Offset: 0x1C

}; // Size: 0x20
