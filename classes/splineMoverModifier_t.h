struct splineMoverModifier_t
{
    struct splineMoverModifierOrientation_t
    {
        // the orientation command we are trying to execute
        splineAxisCmd_t splineAxisCmd; // Offset: 0x0

        // automatically set by idMoverModifierEntity's rotation. You do not need to manually set this.
        idAngles newOrientation; // Offset: 0x4

    }; // Size: 0x10

    struct splineMoverModifierSpeed_t
    {
        // if true then we will adjust the move speed of the mover based on either moveTime or moveSpeed. If false, these fields will be ignored.
        bool setNewMoveSpeed; // Offset: 0x0

        // The time in seconds that it takes to get to this node from the PREVIOUS modifier with setNewMoveSpeed=true.
        float moveTime; // Offset: 0x4

        // Speed, in units/sec, that we will be moving when we reach this node {{ units = m / s }}
        float moveSpeed; // Offset: 0x8

    }; // Size: 0xC

    struct splineMoverModifierOffset_t
    {
        // should we set new offset
        bool setNewOffset; // Offset: 0x0

        // new offset {{ units = m }}
        idVec3 newOffset; // Offset: 0x4

        // new scale
        bool setNewOffsetScale; // Offset: 0x10

        // new offset scale
        idVec3 newOffsetScale; // Offset: 0x14

    }; // Size: 0x20

    struct splineMoverModifierOscillation_t
    {
        // set new oscillation
        bool setNewOscillation; // Offset: 0x0

        // z axis points towards local origin instead of up
        bool zAxisPointsToLocalOrigin; // Offset: 0x1

        // range of the oscillation: we will oscillate from -range -> 0 -> range {{ units = m }}
        idVec3 range; // Offset: 0x4

        // independent phase shifts in sec of each vector component
        idVec3 phaseShift; // Offset: 0x10

        // independent periods in sec of each vector component
        idVec3 period; // Offset: 0x1C

        // random components to be added to range. {{ units = m }}
        idVec3 rangeRand; // Offset: 0x28

        // random components to be added to period.
        idVec3 periodRand; // Offset: 0x34

        // phase shift each component by this random amount (0-phaseShiftrnd). Each component is randomized
        idVec3 phaseShiftRnd; // Offset: 0x40

        // uniformly phase shift each component by this random amount. One random value is added to each component.
        float phaseShiftRndUni; // Offset: 0x4C

    }; // Size: 0x50

    struct splineMoverModifierPause_t
    {
        // we'll pause for this many seconds at this node
        float pauseTime; // Offset: 0x0

    }; // Size: 0x4

    struct splineMoverModifierSpline_t
    {
        // attach to new spline path. We will keep our current speed and orientation to make a smooth transition.
        idManagedClassPtr < idSplinePath > splinePath; // Offset: 0x0

        // if true we will reset our current speed. It will be as if the mover attached to the spline for the first time.
        bool resetSpeed; // Offset: 0x20

    }; // Size: 0x28

    struct splineMoverModifierTargets_t
    {
        // the copied list of targets from the moverModifier entity
        idList < idEntityDefRef , TAG_IDLIST , false > targets; // Offset: 0x0

    }; // Size: 0x18

    struct splineMoverModifierReverse_t
    {
        // reverse direction when we get here
        bool reverse; // Offset: 0x0

    }; // Size: 0x1

    struct splineMoverModifierSound_t
    {
        struct splineMoverModifierSound_SoundInfo_t
        {
            // optional target emitter. if NULL we will use the mover itself to play the sounds.
            idEntityDefRef targetEmitter; // Offset: 0x0

            // sound to start playing
            idSoundEvent* sound; // Offset: 0x8

        }; // Size: 0x10

        struct splineMoverModifierSound_StopSoundInfo_t
        {
            // optional target emitter. if NULL we will use the mover itself to play the sounds.
            idEntityDefRef targetEmitter; // Offset: 0x0

            // sound that started playing that matches this stop sound
            idSoundEvent* matchingStartSound; // Offset: 0x8

            // sound to start playing
            idSoundEvent* sound; // Offset: 0x10

        }; // Size: 0x18

        // New Sound Modifier
        idList < splineMoverModifier_t::splineMoverModifierSound_t::splineMoverModifierSound_SoundInfo_t , TAG_IDLIST , false > newSounds; // Offset: 0x0

        // Stop Sound Modifier
        idList < splineMoverModifier_t::splineMoverModifierSound_t::splineMoverModifierSound_StopSoundInfo_t , TAG_IDLIST , false > stopSounds; // Offset: 0x18

    }; // Size: 0x30

    // where on the curve this happens. This is automatically updated by moving the modifier entity {{ units = m }}
    float length; // Offset: 0x0

    // {{ units = m }}
    idVec3 modifierOrigin; // Offset: 0x4

    idMat3 modifierAxis; // Offset: 0x10

    // ================================================ splineMoverModifierOrientation_t Modifying orientation at a point on the spline ================================================ properties to modify orientation on the spline
    splineMoverModifier_t::splineMoverModifierOrientation_t Orientation; // Offset: 0x34

    // ================================================ splineMoverModifierSpeed_t Modifying speed at a point on the spline ================================================ properties to modify how fast we move on the spline
    splineMoverModifier_t::splineMoverModifierSpeed_t Speed; // Offset: 0x44

    // ================================================ splineMoverModifierSpeed_t Modifying speed at a point on the spline ================================================ properties to modify where we live off the spline
    splineMoverModifier_t::splineMoverModifierOffset_t Offset; // Offset: 0x50

    // ================================================ splineMoverModifierOscillation_t Modifying oscillation at a point on the spline ================================================ oscillation
    splineMoverModifier_t::splineMoverModifierOscillation_t Oscillation; // Offset: 0x70

    // ================================================ splineMoverModifierPause_t pause and delay actions at a point on the spline ================================================ properties for pausing
    splineMoverModifier_t::splineMoverModifierPause_t Pause; // Offset: 0xC0

    // ================================================ splineMoverModifierSpline_t attach to a new spline path at a point on the spline ================================================ spline
    splineMoverModifier_t::splineMoverModifierSpline_t Spline; // Offset: 0xC8

    // ================================================ splineMoverModifierTargets_t Activate a list of targets at a point on the spline ================================================ targets
    splineMoverModifier_t::splineMoverModifierTargets_t Targets; // Offset: 0xF0

    // ================================================ splineMoverModifierReverse_t reverse direction at a point on the spline ================================================ reverse
    splineMoverModifier_t::splineMoverModifierReverse_t Reverse; // Offset: 0x108

    // ================================================ splineMoverModifierSound_t Play/Stop/Pitch/Volume a sound at a point on the spline ================================================ Sound editing
    splineMoverModifier_t::splineMoverModifierSound_t Sound; // Offset: 0x110

}; // Size: 0x140
