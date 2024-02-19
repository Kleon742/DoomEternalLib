struct idFSMLogEntry
{
    enum fsmLogEntry_t : int
    {
        LOGENTRY_NONE = 0,
        LOGENTRY_TRANSITION = 1,
        LOGENTRY_RESTART = 2,
        LOGENTRY_ERROR = 3,
        LOGENTRY_MAX = 4
    };

    // type of log entry
    idFSMLogEntry::fsmLogEntry_t type; // Offset: 0x0

    // time for this entry
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > time; // Offset: 0x8

    // the finite state machine name the log came from
    idAtomicString fsmName; // Offset: 0x10

    // the reason the fsm transitioned
    idStr reason; // Offset: 0x18

    // the current state when this entry was made
    idHandle < int , invalidFSMState_t , INVALID_FSMSTATE > curStateHandle; // Offset: 0x48

    // the next state when this entry was made (if relevant)
    idHandle < int , invalidFSMState_t , INVALID_FSMSTATE > nextStateHandle; // Offset: 0x4C

    // the transition when this entry was made (if relevant)
    idTypeInfo* transitionType; // Offset: 0x50

    // the transition code (if relevant)
    int transCode; // Offset: 0x58

    // the transition group (if relevant)
    int transGroup; // Offset: 0x5C

}; // Size: 0x60
