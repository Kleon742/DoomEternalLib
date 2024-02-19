struct idDeclAIFSMGraphDecorator : idDeclTypeInfoGraphDecorator
{
    // typeinfo specifying the default class type for new states
    idTypeInfoObjectPtr < idAIState > defaultStateType; // Offset: 0x10

    // typeinfo specifying the default class type for new transitions
    idTypeInfoObjectPtr < idAIStateTransition > defaultTransitionType; // Offset: 0x20

}; // Size: 0x30
