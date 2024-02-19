struct idLogicNodeModelPlayerSetInhibitFlags : idLogicNodeModel
{
    // optional: the player id for the player we are looking for, -1 == local player
    int playerId; // Offset: 0x10

    // Set or clear
    idLogicNodeSetInhibitType setType; // Offset: 0x14

    // flags to set/clear
    idUCmdTracker::inhibitFlags_t flags; // Offset: 0x18

}; // Size: 0x20
