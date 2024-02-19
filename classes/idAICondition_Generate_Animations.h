struct idAICondition_Generate_Animations : idAICondition
{
    // color
    idColor debugColor_output; // Offset: 0x18

    // via node
    idAnimWebPath_Atomic viaNode; // Offset: 0x28

    // sample instances of animations in viaNode at these angle variations as well ( relative to anim delta )
    idList < idAngles , TAG_AI_FSM , false > angleVariations; // Offset: 0x68

    // sample instances of animations in viaNode at these distance variations as well ( relative to anim delta ) {{ units = m }}
    idList < float , TAG_AI_FSM , false > distanceVariations; // Offset: 0x80

    // sample instances of animations in viaNode at these endpoint variations as well {{ units = m }}
    idList < idVec3 , TAG_AI_FSM , false > endpointVariations; // Offset: 0x98

    // how long to lead target
    float leadTimeInSeconds; // Offset: 0xB0

    // if true, treat position variations as startpoints
    bool navigateToStartpoints; // Offset: 0xB4

    // if true, shuffle the animations before output
    bool randomize; // Offset: 0xB5

    // if true, selection will ignore base versions of anim
    bool useVariationsOnly; // Offset: 0xB6

    // if true, try to face action target during this animation ( influences queries )
    bool faceActionTarget; // Offset: 0xB7

    // if true, delta-correction is fed proper alignment so animation plays facing its goal
    bool alignAnimWithFacing; // Offset: 0xB8

    // if true, variations are applied to target position rather than animation delta
    bool applyVariationsToTargetPoints; // Offset: 0xB9

    // if true, target location is going to be used instead of anim displacement ( influences queries )
    bool useActionTargetInsteadOfAnimDisplacement; // Offset: 0xBA

    // skew animation endpoints and variations so current distance to target is maintained if possible
    bool maintainDistanceToTarget; // Offset: 0xBB

}; // Size: 0xC0
