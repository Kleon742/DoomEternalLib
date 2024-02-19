struct idTarget_ModifyTraversalClass : idTarget
{
    enum modifyTraversalClassAction_t : int
    {
        ACTION_SET_CLASSES = 0,
        ACTION_ADD_CLASSES = 1,
        ACTION_REMOVE_CLASSES = 2
    };

    // Specify whether to add, remove, or set traversal classes
    idTarget_ModifyTraversalClass::modifyTraversalClassAction_t action; // Offset: 0xB88

    // Add or Remove class A if set to true, or Set value
    bool classA; // Offset: 0xB8C

    // Add or Remove class B if set to true, or Set value
    bool classB; // Offset: 0xB8D

    // Add or Remove class C if set to true, or Set value
    bool classC; // Offset: 0xB8E

    // Modify all active AI as well
    bool modifyActiveAI; // Offset: 0xB8F

}; // Size: 0xB90
