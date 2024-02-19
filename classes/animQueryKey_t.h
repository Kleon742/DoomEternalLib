struct animQueryKey_t
{
    idAIFiniteStateMachine* fsm; // Offset: 0x0

    idAIStateTransition* transition; // Offset: 0x8

    idAtomicString queryName; // Offset: 0x10

    idIndex < int , invalidAIDataID_t , - 1 > ID; // Offset: 0x18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x20

}; // Size: 0x28
