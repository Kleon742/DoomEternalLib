struct gameFrameReturn_t
{
    unsigned long long maxGameFrameTime; // Offset: 0x0

    unsigned long long gameFrameTime; // Offset: 0x8

    unsigned long long snapshotPrepTime; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > localTime; // Offset: 0x18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverTime; // Offset: 0x20

    int gameFrameCount; // Offset: 0x28

    float slowmotionScale; // Offset: 0x2C

    // toolFlag_t bit flags, calls common::InitTool( bit )
    unsigned int initTools; // Offset: 0x30

    // toolFlag_t bit flags, calls common::UpdateTool( bit )
    unsigned int updateTools; // Offset: 0x34

    idArray < gameReturnPlayer_t , 12 > players; // Offset: 0x40

    // this contains full screen debug guis like blend trees and ai guis
    idStaticList < idRenderModelGui * , 8 , false , TAG_IDLIST > debugGuis; // Offset: 0x7840

    renderView_t mainMenuView; // Offset: 0x78A0

    idRenderWorld* mainMenuRenderWorld; // Offset: 0x8210

    bool forceOneView; // Offset: 0x8218

    bool isPaused; // Offset: 0x8219

    idGrowableList < idSaveGameRequestParms , 2 , TAG_IDLIST > saveGameRequests; // Offset: 0x8220

    idGrowableList < idRenderModelGui * , 4 , TAG_IDLIST > fullscreenGuis; // Offset: 0x8318

}; // Size: 0x8350
