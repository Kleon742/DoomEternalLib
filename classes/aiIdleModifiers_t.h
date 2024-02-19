struct aiIdleModifiers_t
{
    // explicit move cycle to play during this stage
    idAnimWebPath_Atomic overrideCycle; // Offset: 0x0

    // whether we should straf facing action target
    bool faceActionTarget; // Offset: 0x40

    // whether we should aim at action target
    bool aimAtActionTarget; // Offset: 0x41

    // whether we should look at action target
    bool lookAtActionTarget; // Offset: 0x42

}; // Size: 0x48
