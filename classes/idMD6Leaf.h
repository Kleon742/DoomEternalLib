struct idMD6Leaf : idMD6Node
{
    enum wrapMode_t : int
    {
        WRAP_CLAMP = 0,
        WRAP_REPEAT = 1,
        WRAP_MAX = 2
    };

    // the animation played at the leaf
    idMD6Anim* anim; // Offset: 0x10

    // the total weight of this leaf in the overall tree, on the last frame a blend command was built for
    float lastTotalWeight; // Offset: 0x18

    // the weight group used to blend this leaf, if any
    unsigned char weightGroup; // Offset: 0x1C

    unsigned char wrapMode; // Offset: 0x1D

    // tracks how many times an anim has been inited or restarted
    unsigned char initCounter; // Offset: 0x1E

    // this is used by idMD6AnimEventHandler to distinguish anims  that has been restarted from those that have not been restarted NOTE: this really belongs on idMD6LeafPlay, but it's crammed in  here instead to save memory since idMD6Leaf has free pad bytes if set to > 0 and this is a CLAMP leaf, the leaf won't be freed at the end of the animation
    unsigned char maintainAlive; // Offset: 0x1F

    unsigned char pad[2]; // Offset: 0x20

}; // Size: 0x28
