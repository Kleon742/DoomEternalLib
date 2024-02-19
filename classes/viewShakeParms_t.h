struct viewShakeParms_t
{
    struct shakeViewInfo_t
    {
        // the blend amount to contribute 0.0 - 1.0f to the overall blend, used to fine tune each axis contributions
        float blendingValue; // Offset: 0x0

        // the method (function) to shake the camera or blend with other modes
        viewShakeMode_t camShakeMode; // Offset: 0x4

        // whether we want to only shake towards the positive side of our shake mode
        bool shakePositive; // Offset: 0x8

        // whether we want to only shake towards the negative side of our shake mode
        bool shakeNegative; // Offset: 0x9

    }; // Size: 0xC

    // the information about how this screen shake is put together the max amount of shake the player can have(0.0f-1.0f), this is a scaling factor that is global across all axis and angles of shake
    float playerMaxShakeScale; // Offset: 0x0

    // the shake (pitch, roll, yaw) maximum angles that we are allowed to work within (0.0f-180.0f) for this shake, these are required if the shake is moving along angles
    idAngles maxShakeAngles; // Offset: 0x4

    // the shake position bounds we are allowed to have, the vector indicates a bounding box from which we can move within during the shake, these are position based {{ units = m }}
    idVec3 maxShakeOffset; // Offset: 0x10

    // the maximum power the shake can attain at the highest point of the shake decay equation ( 0.0f - 100.0f )
    float shakeScalePower; // Offset: 0x1C

    // the desired delay before shake begins ms
    idTypesafeTime < int , millisecondUnique_t , 1000 > shakeDelayMS; // Offset: 0x20

    // the desired duration of the camera shake in ms
    idTypesafeTime < int , millisecondUnique_t , 1000 > shakeDuration; // Offset: 0x24

    // the method (function) to decay (slow down) the shake over time, these can be considered ramps (up/down) that move towards the shake scale power at one point of the equation
    viewShakeMethod_t camShakeMethod; // Offset: 0x28

    // the list of camera movement types (information set) to blend in order to present the shake
    idList < viewShakeParms_t::shakeViewInfo_t , TAG_IDLIST , false > shakeViewInfoList; // Offset: 0x30

    // whether we want to modify the shake's intensity on the normalized magnitude provided with the decl (for example: based on distance from an effect)
    bool fadeIntensity; // Offset: 0x48

    // disable / enabled the sound event
    bool soundEnabled; // Offset: 0x49

    // the shake sound event for the camera shake
    idSoundEvent* soundEvent; // Offset: 0x50

    // the stop shake sound event for the camera shake
    idSoundEvent* soundEventStop; // Offset: 0x58

    // multiplier to the sound intensity
    float soundIntensityScale; // Offset: 0x60

    float shakePercentage; // Offset: 0x64

}; // Size: 0x68
