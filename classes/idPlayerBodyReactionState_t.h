struct idPlayerBodyReactionState_t
{
    // the name of the state
    idAtomicString name; // Offset: 0x0

    // the destination animweb state for the third person body
    idAnimWebPath tpBodyDestPath; // Offset: 0x8

    // the via animweb state for the third person body
    idAnimWebPath tpBodyViaPath; // Offset: 0x38

    // the first person hands anim to play (or NONE to hide the fp hands)
    idHandsCustomAnimSelect fpHandsCustomAnim; // Offset: 0x68

}; // Size: 0x70
