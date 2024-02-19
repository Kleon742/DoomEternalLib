struct idPhysics
{
    enum motionType_t : int
    {
        STATIC = 0,
        DYNAMIC = 1,
        KEYFRAMED = 2
    };

    enum networkMode_t : int
    {
        NETWORK_MODE_NONE = 0,
        NETWORK_MODE_FAST = 1,
        NETWORK_MODE_NORMAL = 2
    };

    enum residency_t : int
    {
        RESIDENCY_NOT_TESTED = 0,
        RESIDENCY_YES = 1,
        RESIDENCY_NO = 2
    };

    enum quality_t : int
    {
        DEFAULT = 0,
        DEBRIS = 1,
        CRITICAL = 2,
        GRENADE = 3,
        PROJECTILE = 4,
        VEHICLE = 5,
        CHARACTER = 6
    };

    enum addToWorld_t : int
    {
        ADD_TO_WORLD_IMMEDIATE = 0,
        ADD_TO_WORLD_DEFERRED = 1
    };

    enum activationMode_t : int
    {
        ACTIVATE = 0,
        DONT_ACTIVATE = 1
    };

    struct createParms_t
    {
        idHavokShapePointer shape; // Offset: 0x0

        idPhysicsCallbacks* callbacks; // Offset: 0x8

        idHavokPhysics_WaterValues* waterLevels; // Offset: 0x10

        idVec3 origin; // Offset: 0x18

        idQuat orientation; // Offset: 0x24

        idMassProperties massProperties; // Offset: 0x34

        motionProperties_t motionProperties; // Offset: 0x3C

        float collisionLookAheadDistance; // Offset: 0x54

        idPhysics::motionType_t motionType; // Offset: 0x58

        idPhysics::quality_t quality; // Offset: 0x5C

        idSpawnId spawnId; // Offset: 0x60

        int overrideContents; // Offset: 0x64

        int clipMask; // Offset: 0x68

        idGameTimeManager* gameTimeManager; // Offset: 0x70

        bool addToWorld; // Offset: 0x78

        bool activate; // Offset: 0x79

        bool immediate; // Offset: 0x7A

        bool clothCollidable; // Offset: 0x7B

        bool raiseManifoldEvents; // Offset: 0x7C

        bool raiseContactImpulseEvents; // Offset: 0x7D

        bool dontCollide; // Offset: 0x7E

        bool disableJump; // Offset: 0x7F

        bool disableDash; // Offset: 0x80

    }; // Size: 0x88

    idAngles anglesHackNotUsed; // Offset: 0x8

    physicsType_t type; // Offset: 0x14

    idPhysics::residency_t collisionResidency; // Offset: 0x18

    idPhysicsProperties properties; // Offset: 0x20

    idMapInstance* mapInstance; // Offset: 0x70

    // next physics object in the hash table
    idPhysics* nextInHash; // Offset: 0x78

}; // Size: 0x80
