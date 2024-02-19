struct overrideWebInfo_t
{
    // type of the sub-web for the override
    aiSubWeb_t subWeb; // Offset: 0x0

    // name of the state for the override
    char* stateName; // Offset: 0x8

    // sub-web we want to end up in after playing the override anim
    aiSubWeb_t destSubWeb; // Offset: 0x10

    // name of the state we want to end up in after playing the override anim
    char* destStateName; // Offset: 0x18

}; // Size: 0x20
