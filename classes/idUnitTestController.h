struct idUnitTestController : idBloatedEntity
{
    // don't start test until this many seconds after spawning, when playing back
    idTypesafeTime < float , secondUnique_t , 1 > executionDelay; // Offset: 0xB88

    // how long test should last, set to -1 for manual control via input recording
    idTypesafeTime < float , secondUnique_t , 1 > testDuration; // Offset: 0xB8C

    // overrides com_timescale
    float timescale; // Offset: 0xB90

    // set player to notarget
    bool notarget; // Offset: 0xB94

    // ddjflkdj
    bool noPlayerDeath; // Offset: 0xB95

    // dfklsafld
    bool infiniteAmmo; // Offset: 0xB96

    // kdaslfkjas
    float damageScaleToAI; // Offset: 0xB98

    // if true, drive player physics with recorded event file instead of raw joystick input
    bool readPlayerPhysics; // Offset: 0xB9C

    // actual name of unit test, usually set by syscmds or chainloads
    idStr testName; // Offset: 0xBA0

    // specifies how test comparisons should be made
    idStr criteriaFileName; // Offset: 0xBD0

    // file name for input recording of player ... use empty string for map
    idStr inputRecordingFileName; // Offset: 0xC00

    // file name for dev history ... use empty string for map
    idStr devHistoryFileName; // Offset: 0xC30

    // append this to end of file names ( typically the layer name associated with this entity, etc )
    idStr fileNamePostfix; // Offset: 0xC60

    // for syscmd
    idStr extraFilenamePostfix; // Offset: 0xC90

    // decrementing count to let input recording play necessary amount before AI are spawned, to match recording
    int drainPlaybackFrames; // Offset: 0xCC0

    bool active; // Offset: 0xCC4

    bool recordingInput; // Offset: 0xCC5

    bool recordingBehavior; // Offset: 0xCC6

}; // Size: 0xCC8
