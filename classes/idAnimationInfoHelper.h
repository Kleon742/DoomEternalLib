struct idAnimationInfoHelper
{
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > curAliasHandle; // Offset: 0x0

    // duration in ms to play the anim, or -1 to ignore duration
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animDuration; // Offset: 0x8

    // queued anims to play in order of addition to the queue
    idList < idQueuedAnimationHelper , TAG_IDLIST , false > queuedAnims; // Offset: 0x10

    // a flag to signal to the animator to start blending out, or blend to the next anim
    bool startBlendOut; // Offset: 0x28

    // time this anim was started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x30

}; // Size: 0x38
