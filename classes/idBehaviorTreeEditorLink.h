struct idBehaviorTreeEditorLink : idTypeInfoGraphLink
{
    // index in the children list of the source state
    int orderIndex; // Offset: 0x40

    // if true, link will draw "disabled" because a node somewhere up the hierarchy is disabled.
    bool disabled; // Offset: 0x44

}; // Size: 0x48
