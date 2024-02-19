struct idTarget_VisibilityController : idBloatedEntity
{
    // ======================================== Private members ======================================== The distance the player has to be from this entity to toggle the targets. {{ units = m }}
    float radius; // Offset: 0xB88

    // If enabled, activate all targets when the player enters or leaves the radius of the controller.
    bool activateTargets; // Offset: 0xB8C

    // If enabled, only check if the player is in range when activated.
    bool onlyOnActivate; // Offset: 0xB8D

    // If enabled, turn the targets off when in range, and on when out of range.
    bool invertToggle; // Offset: 0xB8E

    // If enabled, delay toggling the visibility until the model is off screen. Prevents the models from popping in/out of view.
    bool toggleOffScreen; // Offset: 0xB8F

    // If enabled, the target models will only be toggled once.
    bool toggleOnce; // Offset: 0xB90

    // When toggleOffScreen is enabled, if the player is closer than this distance to a target that is still on screen, the target will be forced to toggle its visible state. If zero, targets will never be forced to toggle. {{ units = m }}
    float forceToggleDistance; // Offset: 0xB94

    // Padding that will be added to the bounding box surrounding all target models. {{ units = m }}
    idVec3 targetBoundsPadding; // Offset: 0xB98

    // triggers this specific layerchange entity when the player ENTERs the visibility controller volume
    idManagedClassPtr < idTarget_LayerStateChange > onActivateLayerChangeTarget; // Offset: 0xBA8

    // triggers this specific layerchange entity when the player LEAVES the visibility controller volume
    idManagedClassPtr < idTarget_LayerStateChange > onDeactivateLayerChangeTarget; // Offset: 0xBC8

    // True if the player was within the radius last activate or think.
    bool playerWasInsideRadius; // Offset: 0xBE8

    // Stores whether or not the this controller has toggled its targets at least once.
    bool hasToggledTargets; // Offset: 0xBE9

    // Stores whether or not this controller has recalculated the bounds after the bounds were zero.
    bool hasRecalculatedBounds; // Offset: 0xBEA

    // stores whether we were manually activated
    bool active; // Offset: 0xBEB

    // The bounds surrounding each of the target models.
    idBounds collectiveTargetBounds; // Offset: 0xBEC

}; // Size: 0xC08
