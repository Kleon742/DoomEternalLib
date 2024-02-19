struct idVolume_SecretHint : idVolume
{
    // Type of Hint level.
    secretHintType_t type; // Offset: 0xC20

    // if true the entity active state will be saved between checkpoints
    bool saveActiveState; // Offset: 0xC24

    bool firstTouch; // Offset: 0xC25

}; // Size: 0xC28
