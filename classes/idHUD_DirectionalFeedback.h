struct idHUD_DirectionalFeedback : idHUDElement
{
    struct damageDirectionalFeedbackInfo_t
    {
        idVec3 damageSourcePos; // Offset: 0x0

        float damageIntensity; // Offset: 0xC

        bool inUse; // Offset: 0x10

    }; // Size: 0x14

    idHUD_DirectionalFeedback::damageDirectionalFeedbackInfo_t damageInfo[3]; // Offset: 0xF8

}; // Size: 0x138
