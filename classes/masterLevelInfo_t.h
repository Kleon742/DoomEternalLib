struct masterLevelInfo_t
{
    idDeclMasterLevelInfo* levelInfo; // Offset: 0x0

    idDeclCampaign* campaign; // Offset: 0x8

    masterLevelStatus_t status; // Offset: 0x10

    // serialized to player profile
    masterLevelCompletionInfo_t completionInfo; // Offset: 0x14

}; // Size: 0x20
