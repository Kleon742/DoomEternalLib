struct idPerfectPlacementComponent
{
    enum mode_t : int
    {
        MODE_INVALID = -1,
        MODE_PERFECTDESTINATION = 0,
        MODE_PERFECTORIGIN = 1,
        MODE_BLENDOUT = 2,
        MOVE_STOPPED_NO_EXIT = 3
    };

    enum coordMode_t : int
    {
        WORLDPOS = 0,
        NAVLOCAL = 1
    };

    struct perfectPlacementVolatile_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > stopTime; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > blendTime; // Offset: 0x10

        // idNavPointm_referenceNavPoint; TODO : MERGE - navmesh {{ units = m }}
        idVec3 referenceNavPointWorldPos; // Offset: 0x18

        // {{ units = m }}
        idVec3 navPointOffset; // Offset: 0x24

        // {{ units = m }}
        idVec3 referenceOrigin; // Offset: 0x30

        idQuat referenceOrientation; // Offset: 0x3C

        // {{ units = m }}
        idVec3 activationOrigin; // Offset: 0x4C

        idQuat activationOrientation; // Offset: 0x58

        // {{ units = m }}
        idVec3 currentOrigin; // Offset: 0x68

        idQuat currentOrientation; // Offset: 0x74

        idPerfectPlacementComponent::mode_t currentMode; // Offset: 0x84

        idPerfectPlacementComponent::coordMode_t currentCoordMode; // Offset: 0x88

        int minUpdateCount; // Offset: 0x8C

        int curUpdateCount; // Offset: 0x90

        bool usesDeferredOrigin; // Offset: 0x94

        bool useDeferredOrigin; // Offset: 0x95

        bool useWithmidnight; // Offset: 0x96

        bool teleportAtEnd; // Offset: 0x97

        bool noExitAtEnd; // Offset: 0x98

    }; // Size: 0xA0

    idEntity* owner; // Offset: 0x0

    idPerfectPlacementComponent::perfectPlacementVolatile_t volatile; // Offset: 0x8

}; // Size: 0xA8
