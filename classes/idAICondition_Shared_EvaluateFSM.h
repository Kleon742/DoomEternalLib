struct idAICondition_Shared_EvaluateFSM : idAICondition
{
    idFSMUser fsmUser; // Offset: 0x18

    // Name of FSM that FSM belongs to
    idAtomicString fsmLayerName; // Offset: 0x1398

    // Name of FSM to evaluate
    idAtomicString fsmName; // Offset: 0x13A0

}; // Size: 0x13A8
