struct idTarget_InteractionAction : idTarget
{
    // What action to send my targets.
    idInteractionAction_t action; // Offset: 0xB88

    // Limits set of actions that can be chosen
    idDeclStringTable* actionFilter; // Offset: 0xB90

}; // Size: 0xB98
