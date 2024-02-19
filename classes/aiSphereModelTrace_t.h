struct aiSphereModelTrace_t
{
    enum traceState_t : int
    {
        TRACESTATE_NOT_TRACING = 0,
        TRACESTATE_TRACING_FIRST_FRAME = 1,
        TRACESTATE_TRACING = 2,
        TRACESTATE_WAITING_FOR_LAST_RESULTS = 3,
        TRACESTATE_DONE = 4
    };

    // info about each sphere involved in the trace
    idStaticList < aiSphereModelInfo_t , 64 , false , TAG_IDLIST > mSphereInfos; // Offset: 0x0

    idStaticList < idSpawnId , 32 , false , TAG_IDLIST > hitEntities; // Offset: 0xE18

    // state we're in
    aiSphereModelTrace_t::traceState_t mTraceState; // Offset: 0xEB0

    // anim web node index that this sphere belongs too
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > mNodeIndex; // Offset: 0xEB4

    // the damage decl for this trace
    idDeclDamage* mDamageDecl; // Offset: 0xEB8

    // lifetime
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > mLifeTime; // Offset: 0xEC0

    // mask to use when tracing
    int mCollisionMask; // Offset: 0xEC8

    // true if tracing should stop on the first hit
    bool mStopFirstHit; // Offset: 0xECC

    // entity our collision traces should ignore
    idEntityPtr_ThreadSafe < idEntity > mPassEntity; // Offset: 0xED0

    // last joint group handle we initialized with
    idJointGroup* mJointGroup; // Offset: 0xEE8

    // name of joint group
    idAtomicString mJointGroupName; // Offset: 0xEF0

    // name of this trace, can be the same as joint group name
    idAtomicString mName; // Offset: 0xEF8

    // the weapon decl for this attack.
    idDeclWeapon* mWeaponDecl; // Offset: 0xF00

    // ai event to play, if any
    idDeclAiEvent* mAIEventDecl; // Offset: 0xF08

    // impact effect to play
    idDeclImpactEffect* mImpactEffect; // Offset: 0xF10

    float mDamageScale; // Offset: 0xF18

}; // Size: 0xF20
