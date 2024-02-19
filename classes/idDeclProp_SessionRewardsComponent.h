struct idDeclProp_SessionRewardsComponent : idDeclProp_UseComponent
{
    // Determines if the reward can be picked up if the player won't gain from it.
    bool canBePickedUpIfNoEffect; // Offset: 0x130

    // Num rewards to give
    int rewardAmount; // Offset: 0x134

    // Most rewards to give up to, or 0 for no limit
    int rewardLimit; // Offset: 0x138

    // the user-friendly name for this component
    idStrId componentName; // Offset: 0x13C

}; // Size: 0x140
