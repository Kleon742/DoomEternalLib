struct idAnimatedAttachment : idAnimatedEntity
{
    idAnimator_Channel baseAnimator; // Offset: 0x1B48

    idAnimationInfoHelper baseAnimationInfo; // Offset: 0x1C58

    // tracks frame numbers of anim blends to avoid blending twice in the same frame
    int lastAnimBlendFrame; // Offset: 0x1C90

}; // Size: 0x1C98
