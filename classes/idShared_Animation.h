struct idShared_Animation : idAIState
{
    // destination node name
    idAtomicString destinationNodeNameMemoryKey; // Offset: 0x130

    // via node name
    idAtomicString viaNodeNameMemoryKey; // Offset: 0x138

    // via node loop time
    idAtomicString viaNodeLoopTimeMemoryKey; // Offset: 0x140

    // memory holding the ref PT for delta correction
    idAtomicString refPTMemoryKey; // Offset: 0x148

    // destination node name
    idStr destinationNodeName; // Offset: 0x150

    // via node name
    idStr viaNodeName; // Offset: 0x180

    // destination node
    idAnimWebPath_Atomic destinationNode; // Offset: 0x1B0

    // __meta ( "properties { target = destinationNode; lock = true; }" ); via node
    idAnimWebPath_Atomic viaNode; // Offset: 0x1F0

    // animweb must be in one of these nodes to actually path through via node
    idList < idAnimWebPath_Atomic , TAG_AI_FSM , false > requiredNodes; // Offset: 0x230

    // list of random destination nodes
    idList < idAnimWebPath_Atomic , TAG_AI_FSM , false > randomDestinationNodes; // Offset: 0x248

    // this state will finish when this event is triggered by animweb
    awCmdBlendEvent_t completionEvent; // Offset: 0x260

    // if nonzero, how long to loop anim for
    idRange < float > loopTimeInSeconds; // Offset: 0x264

    // custom collision flags for this state
    aiCollisionFlags_t collisionFlags; // Offset: 0x26C

    // if nonzero, force
    int forceFrames; // Offset: 0x270

    // if true, focus on current action target
    bool focusOnActionTarget; // Offset: 0x274

    // if true, focus on potential target, don't set action target
    bool focusOnPotentialTarget; // Offset: 0x275

    // Whether or not to force the transition, even when no path is found
    bool force; // Offset: 0x276

    // whether to clear move destination
    bool stopsMovement; // Offset: 0x277

    // if true, loop the anim as an idle animation + stationary turns
    bool useAsIdleAction; // Offset: 0x278

    // if true, will do everything useAsIdleAction does + it will reset the idle anim back when this state exits
    bool useAsIdleActionResetOnExit; // Offset: 0x279

    // use this to force animweb to ignore via and do normal 'if already there' stuff
    bool skipViaIfAlreadyThere; // Offset: 0x27A

    // only used if useAsIdleActionResetOnExit is true
    idAnimWebState oldIdleState; // Offset: 0x280

}; // Size: 0x2A0
