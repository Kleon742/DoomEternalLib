struct idAnimator_Paused : idAnimator_Base
{
    // the leaf containing the pause animation that is merged into the blend tree
    idMD6LeafPause* leaf; // Offset: 0x40

    // the handle of the animation on our leaf
    idMD6Anim* anim; // Offset: 0x48

    priority_t stackPriority; // Offset: 0x50

}; // Size: 0x58
