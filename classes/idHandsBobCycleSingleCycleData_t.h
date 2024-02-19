struct idHandsBobCycleSingleCycleData_t
{
    // disable the single cycle if the bob cycle doesn't actually have it
    bool enable; // Offset: 0x0

    // how many full bob cycles per second at full move speed
    float cyclesPerSec; // Offset: 0x4

    // minimum value of full bob cycles per second, considering proportional scaling
    float cyclesPerSecMin; // Offset: 0x8

    // additive blend weight for this bob cycle (0 to 1)
    float targetAlpha; // Offset: 0xC

    // transition rate of currentAlpha to targetAlpha
    float alphaRate; // Offset: 0x10

    // bias value for attack / relax blend
    float attackBias; // Offset: 0x14

    // name of 'right' state
    idStr state_right; // Offset: 0x18

    // name of 'left' state
    idStr state_left; // Offset: 0x48

    // state duration, in secs
    float state_secs; // Offset: 0x78

    // max player speed in this state {{ units = m / s }}
    float maxPlayerSpeed; // Offset: 0x7C

    // anim rate scale
    float animRate; // Offset: 0x80

    // bob type for this cycle data
    bobType_t bobType; // Offset: 0x84

}; // Size: 0x88
