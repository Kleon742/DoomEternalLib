struct idTeamCapturePoint : idAnimatedEntity
{
    enum captureStrategy_t : int
    {
        SINGLE_NEUTRALIZE = 0,
        TUG_OF_WAR = 1,
        CAPTURESTRATEGY_MAX = 2
    };

    enum controlPointEventType_t : int
    {
        CPE_UNKNOWN = 0,
        CPE_IDLE = 1,
        CPE_RISING = 2,
        CPE_FALLING = 3,
        CPE_STALLED = 4,
        CPE_CAPPED = 5
    };

    enum captureState_t : int
    {
        CAPTURE_IDLE = 0,
        CAPTURE_ACTIVE = 1,
        CAPTURE_DECAYING = 2,
        CAPTURE_STALLED = 3,
        CAPTURE_MAX = 4
    };

    enum poiCenteringMode_t : int
    {
        POI_MODE_INSIDE_VOLUME = 0,
        POI_MODE_INSIDE_VOLUME_CONTESTED = 1
    };

    typedef idList < idManagedClassPtr < idSpawnNode > > SpawnNodeList;

    // Clip Volume definition
    idDeclEntityDef* volumeDef; // Offset: 0x1B48

    // how long will it take one player to capture the point (actually game ticks not MS)
    int captureTimeMS; // Offset: 0x1B50

    gameTeam_t fxTeam; // Offset: 0x1B54

    bool captureFeedbackSoundStarted; // Offset: 0x1B58

    // Spawn nodes influenced by this control point.
    idList < idManagedClassPtr < idSpawnNode > , TAG_IDLIST , false > spawnNodes; // Offset: 0x1B60

    idTeamCaptureCounter counter; // Offset: 0x1B78

    idWinding winding; // Offset: 0x1B90

    // should we show the HUD progress bar to those in the point?
    bool shouldShowProgressBar; // Offset: 0x1BB0

    // Feedback given when a point is taken
    idSoundEvent* captureFeedback; // Offset: 0x1BB8

    // Feedback given when a point is taken by an enemy
    idSoundEvent* enemyCaptureFeedback; // Offset: 0x1BC0

    // Feedback loop for when a point is currently being taken
    idSoundEvent* captureLoopFeedback; // Offset: 0x1BC8

    // Feedback loop for when a point is currently being taken by an enemy
    idSoundEvent* enemyCaptureLoopFeedback; // Offset: 0x1BD0

    // Feedback for when a point starts being taken
    idSoundEvent* captureStartFeedback; // Offset: 0x1BD8

    // Feedback for when a point starts being taken by an enemy
    idSoundEvent* enemyCaptureStartFeedback; // Offset: 0x1BE0

    // Feedback loop for when a point is currently returning to IDLE
    idSoundEvent* captureLoopFeedbackReturn; // Offset: 0x1BE8

    // Feedback loop for when a point is currently returning to IDLE from enemy control
    idSoundEvent* enemyCaptureLoopFeedbackReturn; // Offset: 0x1BF0

    // Feedback one-off when a point the local player is in starts being contested.
    idSoundEvent* captureContestedFeedback; // Offset: 0x1BF8

    // Feedback one-off when an enemy controlled point the local player is in starts being contested.
    idSoundEvent* enemyCaptureContestedFeedback; // Offset: 0x1C00

    // Feedback to give to nearby players when the point changes state to idle
    idSoundEvent* idleFeedback; // Offset: 0x1C08

    // Feedback to give to nearby players when an enemy controlled point changes state to idle
    idSoundEvent* enemyIdleFeedback; // Offset: 0x1C10

    // Should we start active (domination) or get activated later (artifact)
    bool startActive; // Offset: 0x1C18

    // Can demon contribute to the capture of this point
    bool demonCanCapture; // Offset: 0x1C19

    // Does demon count as 2 players for capturing contribution? (No effect if demon cannot capture)
    bool demonCountsDouble; // Offset: 0x1C1A

    // maximum amount of contribution the players on a given team can combine to capture a point.
    float maxContribution; // Offset: 0x1C1C

    // change to the capture rate for additional players on the point
    float contributorWeight; // Offset: 0x1C20

    // true if only the game challenge specific capture stat should be incremented on capture
    bool onlyIncrementCustomCaptureStat; // Offset: 0x1C24

    // How this capture point determines team progress
    idTeamCapturePoint::captureStrategy_t captureStrategy; // Offset: 0x1C28

    // Overrides volumeDef, will use this specific volume instead of spawning a new one from the specified def
    idManagedClassPtr < idVolume > volumeEntity; // Offset: 0x1C30

    idManagedClassPtr < idVolume > volume; // Offset: 0x1C50

    // Unit length percentage from 0.0 - 1.0
    float currentValue; // Offset: 0x1C70

    // current scaler affecting the counter's capture/decay rate
    float currentScale; // Offset: 0x1C74

    // currentl number of contributers affecting the counter's capture/decay rate
    int currentNumContributors; // Offset: 0x1C78

    // last Time the warning about this point being captured was sent out.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastWarningTime; // Offset: 0x1C80

    // team which currently has progress towards capturing the point
    gameTeam_t capturingTeam; // Offset: 0x1C88

    // our capture state
    idTeamCapturePoint::captureState_t captureState; // Offset: 0x1C8C

    idTeamCapturePoint::poiCenteringMode_t poiCenteringMode; // Offset: 0x1C90

    idStrId poiStrIdleDominated; // Offset: 0x1C94

    idStrId poiStrIdleDominant; // Offset: 0x1C98

    idStrId poiStrActiveCapturingNeutralDominated; // Offset: 0x1C9C

    idStrId poiStrActiveCapturingNeutralDominant; // Offset: 0x1CA0

    idStrId poiStrActiveCapturing; // Offset: 0x1CA4

    idStrId poiStrActiveLosing; // Offset: 0x1CA8

    idStrId poiStrDecayingCapturingNeutralDominated; // Offset: 0x1CAC

    idStrId poiStrDecayingCapturingNeutralDominant; // Offset: 0x1CB0

    idStrId poiStrDecayingCapturing; // Offset: 0x1CB4

    idStrId poiStrDecayingLosing; // Offset: 0x1CB8

    idStrId poiStrStalled; // Offset: 0x1CBC

    // handle to the influence system
    idHandle < int , invalidSpawnInfluencer_t , INVALID_INFLUENCER > influencerHandle; // Offset: 0x1CC0

    // is a player in the point and able to capture?
    bool playerIsCapping[12]; // Offset: 0x1CC4

}; // Size: 0x1CD0
