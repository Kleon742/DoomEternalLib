struct idGoreEntity : idAnimatedEntity
{
    struct fadeRemovalParms_t
    {
        // fade the corpse after determined amount(ms), -1 indicates never fade
        idTypesafeTime < int , millisecondUnique_t , 1000 > fadeAfterMS; // Offset: 0x0

        // remove the corpse after determined amount(ms) when the fade starts
        idTypesafeTime < int , millisecondUnique_t , 1000 > removeAfterMS; // Offset: 0x4

        // fx Condition to start when time to fade/remove.
        fxCondition_t fxCondition; // Offset: 0x8

        // Actual Fade Time.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeTime; // Offset: 0x10

        // are fading.
        bool isFading; // Offset: 0x18

        idFadeHelper fade; // Offset: 0x20

    }; // Size: 0x40

    // Channel animation. ( Do we need web animator? )
    idAnimator_Channel channelAnimator; // Offset: 0x1B48

    // articulated figure animator and properties
    idAnimator_AF afProperties; // Offset: 0x1C58

    // gore component on this entity.
    idGoreComponent goreComponent; // Offset: 0x2120

    // Enable these wounds when we go to AF.
    idList < idStr , TAG_IDLIST , false > woundsEnabledOnAFStart; // Offset: 0x3068

    // Blend the animation with the AF.
    bool blendAFWithAnim; // Offset: 0x3080

    idGoreEntityPhysicsCallbacks gorePhysicsCallbacks; // Offset: 0x3088

    bool poolsCreated; // Offset: 0x30B8

    idHavokQueryId groundQuery; // Offset: 0x30C0

    // Properties related to fade and removal.
    idGoreEntity::fadeRemovalParms_t fadeAndRemoval; // Offset: 0x30C8

    // ragdoll contents before burnaway
    int originalRagdollContents; // Offset: 0x3108

}; // Size: 0x3110
