struct idSWFWidget_PVPMatchResults : idSWFWidget
{
    idHUDEvent_PVPMatchEndResult::info_t info; // Offset: 0x180

    int leftScore; // Offset: 0x19C

    int rightScore; // Offset: 0x1A0

    gameTeam_t victor; // Offset: 0x1A4

    int animState; // Offset: 0x1A8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animNextStateTime; // Offset: 0x1B0

    int pipToAnimate; // Offset: 0x1B8

    swfSoundType_t animationShowSound; // Offset: 0x1BC

    swfSoundType_t animationPipSound; // Offset: 0x1C0

    swfSoundType_t animationLeftVictorSound; // Offset: 0x1C4

    swfSoundType_t animationRightVictorSound; // Offset: 0x1C8

    swfSoundType_t animationHideSound; // Offset: 0x1CC

}; // Size: 0x1D0
