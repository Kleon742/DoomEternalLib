struct idTrigger_VisibilityController : idTrigger
{
    // ======================================== Private members ========================================
    bool inTrigger; // Offset: 0xC90

    // If enabled, activate all targets when the player enters or leaves the radius of the controller.
    bool activateTargets; // Offset: 0xC91

    // If enabled, only check if the player is in range when activated.
    bool onlyOnActivate; // Offset: 0xC92

    // If enabled, turn the targets off when in range, and on when out of range.
    bool invertToggle; // Offset: 0xC93

    // If enabled, delay toggling the visibility until the model is off screen. Prevents the models from popping in/out of view.
    bool toggleOffScreen; // Offset: 0xC94

    // If enabled, the target models will only be toggled once.
    bool toggleOnce; // Offset: 0xC95

    // If enabled, only one of these triggers can be activated/touched at one time
    bool isExclusiveTrigger; // Offset: 0xC96

    // When toggleOffScreen is enabled, if the player is closer than this distance to a target that is still on screen, the target will be forced to toggle its visible state. If zero, targets will never be forced to toggle. {{ units = m }}
    float forceToggleDistance; // Offset: 0xC98

    // Padding that will be added to the bounding box surrounding all target models. {{ units = m }}
    idVec3 targetBoundsPadding; // Offset: 0xC9C

    // triggers this specific layerchange entity when the player ENTERs the visibility controller volume
    idManagedClassPtr < idTarget_LayerStateChange > onActivateLayerChangeTarget; // Offset: 0xCA8

    // triggers this specific layerchange entity when the player LEAVES the visibility controller volume
    idManagedClassPtr < idTarget_LayerStateChange > onDeactivateLayerChangeTarget; // Offset: 0xCC8

    // Triggers that i'm able to get to from this trigger.
    idList < idManagedClassPtr < idTrigger_VisibilityController > , TAG_IDLIST , false > adjacentVisibilityControllers; // Offset: 0xCE8

    // True if the player was within the radius last activate or think.
    bool wasInsideTrigger; // Offset: 0xD00

    // Stores whether or not the this controller has toggled its targets at least once.
    bool hasToggledTargets; // Offset: 0xD01

    // Stores whether or not this controller has recalculated the bounds after the bounds were zero.
    bool hasRecalculatedBounds; // Offset: 0xD02

    // The bounds surrounding each of the target models.
    idBounds collectiveTargetBounds; // Offset: 0xD04

}; // Size: 0xD20
