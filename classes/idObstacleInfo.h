struct idObstacleInfo
{
    // first obstacle in our path
    idSpawnId firstObstacle; // Offset: 0x0

    // obstacle we started inside of
    idSpawnId startObstacle; // Offset: 0x4

    // obstacle destination is inside of
    idSpawnId endObstacle; // Offset: 0x8

    // ------------------------ stored parameters used for the last movement test so that failed movements can be retested exactly. ------------------------ position move test started from {{ units = m }}
    idVec3 startPos; // Offset: 0xC

    // destination for move test {{ units = m }}
    idVec3 endPos; // Offset: 0x18

    // we need to update once before wall corners update
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > updatedTime; // Offset: 0x28

    // adjusted destination after test {{ units = m }}
    idVec3 newDest; // Offset: 0x30

    // length of the path {{ units = m }}
    float length; // Offset: 0x3C

    // entity that was ignored for the test
    idSpawnId ignore; // Offset: 0x40

    // ------------------------ info about current state of obstacles to allow ai's be become frustrated and/or glare at annoying entities. ------------------------ which wall corners will ai pass next ignoring ai's {{ units = m }}
    idVec3 wallCorners[2]; // Offset: 0x44

    // entity who is most 'cutting off' this entity
    idSpawnId obstacleEntity; // Offset: 0x5C

    // how much is the above entity cutting this ai off?
    float obstacleEntityThreshold; // Offset: 0x60

    // how frustrated is this ai with it's movement path?
    float moveFrustrationThreshold; // Offset: 0x64

    // when can this ai stop being frustrated?
    int minFrustratedTime; // Offset: 0x68

    // when MUST this ai stop being frustrated?
    int maxFrustratedTime; // Offset: 0x6C

    // when can this ai stop again due to frustration?
    int nextFrustratedAllowTime; // Offset: 0x70

    // increases priority because ai was just frustrated
    int frustrationOverTime; // Offset: 0x74

}; // Size: 0x78
