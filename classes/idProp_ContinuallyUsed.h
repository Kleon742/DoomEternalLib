struct idProp_ContinuallyUsed : idProp_Usable
{
    enum useState_t : int
    {
        INACTIVE = 0,
        PROGRESSING = 1,
        REGRESSING = 2,
        DONE = 3
    };

    idActor* user; // Offset: 0x1B68

    float usedState; // Offset: 0x1B70

    // speed per second at which we move toward 100% (1.0) while being used
    float rateOfIncrease; // Offset: 0x1B74

    // speed per second at which our acculumated amount declines.
    float rateOfDecrease; // Offset: 0x1B78

    // if true, sets to 'done' state at 1.0. Otherwise, will always descend back toward 0
    bool finishes; // Offset: 0x1B7C

    // applied at our max use state. Allows a wheel to spin, etc.
    idAngles useRotation; // Offset: 0x1B80

    // Played when we're progressing toward the end.
    idSoundEvent* soundProgressing; // Offset: 0x1B90

    // Played when we're at the end.
    idSoundEvent* soundFinished; // Offset: 0x1B98

    // Played as we regress back to our start.
    idSoundEvent* soundRegressing; // Offset: 0x1BA0

    // Played when we're back to our zero.
    idSoundEvent* soundReset; // Offset: 0x1BA8

    idProp_ContinuallyUsed::useState_t enumUseState; // Offset: 0x1BB0

}; // Size: 0x1BB8
