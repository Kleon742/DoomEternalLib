struct syncAnimationInfo_t
{
    // the subweb name to use in the animweb
    idAtomicString subwebName; // Offset: 0x0

    // the state name to use in the animweb
    idAtomicString stateName; // Offset: 0x8

    // slow motion time scale table to use when slow-Mo'n this interaction.
    idDeclTable* slomotionTable; // Offset: 0x10

    // will always use slowmo table when played.
    bool alwaysSlowMo; // Offset: 0x18

    // For picking anims on BESTHEIGHTFIT, what is the desired initial height delta (positive means target above instigator) between instigator and target? {{ units = m }}
    float desiredHeightDelta; // Offset: 0x1C

    // This could be computed from anims, but that would seem to be a waste of processing time. animweb this anim will be using.
    idDeclAnimWeb* animWeb; // Offset: 0x20

    // animweb node this anim will be using.
    idDeclAnimWebNode* animNode; // Offset: 0x28

}; // Size: 0x30
