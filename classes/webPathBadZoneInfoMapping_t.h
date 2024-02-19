struct webPathBadZoneInfoMapping_t
{
    // apply this set of bad zone infos when AI is in these web nodes
    idList < idAnimWebPath , TAG_AI_UNIT , false > webNodes; // Offset: 0x0

    // for quicker lookup
    idList < idIndex < idAnimWeb::NodeIndexType , idAnimWeb::invalidNodeIndex_t > , TAG_AI_UNIT , false > webNodes_indices; // Offset: 0x18

    // zones to stay out of
    idList < bodyMoveAngleBadZoneInfo_t , TAG_AI_UNIT , false > badZones; // Offset: 0x30

    // use this scalar for yaw in animweb node, defaults to bodyMoveAngle if empty
    idAtomicString yawScalarName; // Offset: 0x48

}; // Size: 0x50
