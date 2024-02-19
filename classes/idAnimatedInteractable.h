struct idAnimatedInteractable : idAnimatedEntity
{
    // the entity that activated this interactable
    idManagedClassPtr < idEntity > usedByEntity; // Offset: 0x1B48

    idAnimator_Channel interactableAnimator; // Offset: 0x1B68

    // animation to play when activated;
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > onAnim; // Offset: 0x1C78

    // animation to play when deactivated;
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > offAnim; // Offset: 0x1C7A

    // text we display when entity has focus
    idStrId displayText; // Offset: 0x1C7C

    // true if the interactable is activated;
    bool isOn; // Offset: 0x1C80

    // true if the animation is playing
    bool playing; // Offset: 0x1C81

}; // Size: 0x1C88
