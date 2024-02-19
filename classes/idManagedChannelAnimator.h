struct idManagedChannelAnimator : idAnimator_Channel
{
    struct queuedAnim_t
    {
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > animAlias; // Offset: 0x0

        bool loop; // Offset: 0x2

        float targetAlpha; // Offset: 0x4

        float alphaRate; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x10

        idBlendParms blendParms; // Offset: 0x18

        bool maintainAlive; // Offset: 0x40

    }; // Size: 0x48

    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > curAliasHandle; // Offset: 0x110

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animEndTime; // Offset: 0x118

    // queued anims to play in order of addition to the queue
    idList < idManagedChannelAnimator::queuedAnim_t , TAG_IDLIST , false > queuedAnims; // Offset: 0x120

    bool startBlendOut; // Offset: 0x138

    // time this anim was started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x140

}; // Size: 0x148
