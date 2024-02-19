struct idSWFWidget_Seasons_XP_Counter : idSWFWidget
{
    int previousXP; // Offset: 0x180

    int currentXP; // Offset: 0x184

    int animationDurationMS; // Offset: 0x188

    bool animateOnShow; // Offset: 0x18C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animationStartTime; // Offset: 0x190

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animationEndTime; // Offset: 0x198

    int animationFrames; // Offset: 0x1A0

    int animationFrameStep; // Offset: 0x1A4

    idSoundEvent* animationLoopSound; // Offset: 0x1A8

    idSoundEvent* animationEndSound; // Offset: 0x1B0

}; // Size: 0x1B8
