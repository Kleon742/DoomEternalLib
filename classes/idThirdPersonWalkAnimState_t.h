struct idThirdPersonWalkAnimState_t
{
    // name of the anim state this data matches
    idAtomicString stateName; // Offset: 0x0

    // name of the SubWeb that contains the state this data matches
    idAtomicString subWebName; // Offset: 0x8

    // number of frames in the walk animation of this state
    int numWalkFrames; // Offset: 0x10

    // distance moved during a single loop of the walk anim {{ units = m }}
    float totalWalkDistance; // Offset: 0x14

    // number of frames in the run animation of this state
    int numRunFrames; // Offset: 0x18

    // distance moved during a single loop of the run anim {{ units = m }}
    float totalRunDistance; // Offset: 0x1C

    // number of frames in the sprint animation of this state
    int numSprintFrames; // Offset: 0x20

    // distance moved during a single loop of the sprint anim {{ units = m }}
    float totalSprintDistance; // Offset: 0x24

}; // Size: 0x28
