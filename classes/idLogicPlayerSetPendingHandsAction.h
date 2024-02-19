struct idLogicPlayerSetPendingHandsAction
{
    enum logicIds_t : int
    {
        INPUT_SET_PENDING_HANDS_ACTION = 0,
        OUTPUT_NONE = 1
    };

    idHands::handsAction_t pendingAction; // Offset: 0x0

}; // Size: 0x4
