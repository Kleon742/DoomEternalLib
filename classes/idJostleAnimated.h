struct idJostleAnimated : idAnimatedEntity
{
    struct jostleAnimationInfo_t
    {
        enum incomingHitDirection_t : int
        {
            HIT_FROM_LEFT = 0,
            HIT_FROM_RIGHT = 1,
            HIT_FROM_TOP = 2,
            HIT_FROM_FRONT = 3,
            HIT_FROM_BACK = 4,
            HIT_FROM_ANYWHERE = 5
        };

        // animation handle
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > animationHandle; // Offset: 0x0

        // hit direction
        idJostleAnimated::jostleAnimationInfo_t::incomingHitDirection_t incomingHitDirection; // Offset: 0x4

        // the type of damage that activates this animation
        idDamageParms::damageSource_t damageType; // Offset: 0x8

    }; // Size: 0x10

    // jostle information
    idList < idJostleAnimated::jostleAnimationInfo_t , TAG_IDLIST , false > jostleAnimationInfo; // Offset: 0x1B48

    // channel animator for playing MD6 animations
    idAnimator_Channel channelAnimator; // Offset: 0x1B60

    idHavokGatherQueryId gatherQuery; // Offset: 0x1C70

    idManagedClassPtr < idEntity > lastEntityToTouchUs; // Offset: 0x1C78

}; // Size: 0x1C98
