struct idSpawnLocation
{
    // {{ units = m }}
    idVec3 pos; // Offset: 0x0

    idAngles facing; // Offset: 0xC

    // Allows spawn nodes to adjust weighting of spawn locations.
    float valueModifier; // Offset: 0x18

    // The node that generated this location.
    idManagedClassPtr < idSpawnNode > sourceNode; // Offset: 0x20

    // Used by sourceNode to identify location. Unique only to sourceNode.
    int locationID; // Offset: 0x40

    // Used to sort locations.
    float sortValue; // Offset: 0x44

    // Breakdown of influences, if the spawn influencers are used.
    idArray < float , 11 > influenceScores; // Offset: 0x48

    // team sort value. very hacky at the moment.
    float teamSortValue; // Offset: 0x74

    // This spawn node is in the line of sight of an enemy player
    bool inLineOfSight; // Offset: 0x78

    // This spawn node is in the line of sight of a friendly player
    bool inFriendlyLineOfSight; // Offset: 0x79

}; // Size: 0x80
