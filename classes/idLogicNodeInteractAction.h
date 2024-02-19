struct idLogicNodeInteractAction : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ENTITY = 0,
        INPUT_ACTIVATE = 1,
        OUTPUT_ACTIVATE = 2
    };

    idInteractionAction_t interactionAction; // Offset: 0x38

}; // Size: 0x40
