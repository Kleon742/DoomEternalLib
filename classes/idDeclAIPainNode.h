struct idDeclAIPainNode : idTypeInfoGraphNode
{
    // list of anims
    idList < aiPainAnimInfo_t , TAG_IDLIST , false > anims; // Offset: 0x30

    // direction of AI motion, if any
    idAtomicString motionDir; // Offset: 0x48

    // flags applied to all anims within this node
    actorPainFlags_t painFlags; // Offset: 0x50

    // ai context flags that apply to all anims in this node
    aiContextFlags_t contextFlags; // Offset: 0x54

    // if true, the context flags specified in this node must be an exact match with all flags currently set on the AI. If false, will pass if the flags are set, even if the AI has additional flags set.
    bool contextFlagsExplicit; // Offset: 0x58

    // if true, then this node will only pass if the context flags are not set on the AI
    bool contextFlagsInverseLogic; // Offset: 0x59

    // number of damage directions represented in node
    aiDamageDirNum_t numDamageDirs; // Offset: 0x5C

    // Skip the AAS tests for translation.
    bool ignoreAnimTranslation; // Offset: 0x60

    // whether any attack from this node is valid or not
    bool enabled; // Offset: 0x0

    // if true, this node is merely a proxy for the subgraph -- treat any inbound or outbound links as such
    bool subgraphProxy; // Offset: 0x0

    // if true, this node can't be entered except as a fallback from another node in the same subgraph
    bool fallbackOnly; // Offset: 0x0

    // debug flags
    aiGraphDebugFlags_t debugFlags; // Offset: 0x64

}; // Size: 0x68
