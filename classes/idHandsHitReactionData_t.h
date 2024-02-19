struct idHandsHitReactionData_t
{
    // animweb decl
    idDeclAnimWeb* animWebDecl; // Offset: 0x0

    // default animweb subweb
    idAtomicString defaultAnimWebSubWeb; // Offset: 0x8

    // default animweb state
    idAtomicString defaultAnimWebState; // Offset: 0x10

    // list of hit reactions
    idList < idHandsHitReaction_t , TAG_IDLIST , false > reactions; // Offset: 0x18

}; // Size: 0x30
