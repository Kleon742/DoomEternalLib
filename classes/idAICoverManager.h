struct idAICoverManager
{
    enum majorPositionTestFlags_t : int
    {
        MPT_NONE = 0,
        MPT_FORWARD_PATH = 2,
        MPT_REVERSE_PATH = 4,
        MPT_PATH_COLLISIONS = 8,
        MPT_MINOR_COLLISIONS = 16,
        MPT_INLINES = 32,
        MPT_NEAREST_SAME_AI_TYPE = 64
    };

    // known cover points
    idBlockList < idAICover , 16 , 64 > knownCover; // Offset: 0x0

    // Valid cover volumes will limit the cover points available to the AI
    idBlockList < idEncounterVolume_ValidCover * , 32 , 32 > validCoverVolumes; // Offset: 0x228

    // Group name of the valid cover volume when assigned to the AI. If empty, this was assigned as a default to all groups.
    idStr coverVolumeGroupName; // Offset: 0x350

    // we want to force an update if this goes stale
    idEntityPtr_ThreadSafe < idEntity > currentVisibilityTarget; // Offset: 0x380

    // info about major positions ai can go to
    idBlockList < aiMajorPosition_t , 16 , 64 > majorPositions; // Offset: 0x398

    idBlockList < aiMinorPositionCollection_t , 16 , 64 > minorPositions; // Offset: 0x5C0

    int lastMajorPositionIndex; // Offset: 0x7E8

    idBlockList < int , 8 , 32 > activeTestIndices; // Offset: 0x7F0

    // time when cover was last updated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTime; // Offset: 0x918

    // AI's travel flags when cover was last updated
    int lastTravelFlags; // Offset: 0x920

    // position of AI when cover was last updated {{ units = m }}
    idVec3 lastUpdatePos; // Offset: 0x924

    // force next potential update
    bool forceUpdate; // Offset: 0x930

    // last eye offset that was fed into area vis system {{ units = m }}
    idVec3 lastEyeOffset; // Offset: 0x934

    idAI2* ai; // Offset: 0x940

    // list of temporary positions, for dynamic behavior {{ units = m }}
    idBlockList < idVec3 , 4 , 8 > temporaryPositions; // Offset: 0x948

    // set to true if AI must reject all hangout cover nodes.
    bool rejectHangouts; // Offset: 0x9B0

}; // Size: 0x9B8
