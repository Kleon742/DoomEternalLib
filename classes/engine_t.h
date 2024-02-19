struct engine_t
{
    asyncio::idExecutor* asyncIoExecutor; // Offset: 0x0

    idBroadcastManager* broadcastManager; // Offset: 0x8

    idBuildVersionInfo* buildVersionInfo; // Offset: 0x10

    idConsole* console; // Offset: 0x18

    idConsoleHistory* consoleHistory; // Offset: 0x20

    idCloud* cloud; // Offset: 0x28

    idDeclManager* declManager; // Offset: 0x30

    idDeclTracking* declTracking; // Offset: 0x38

    idEngineVersionInfo* engineVersionInfo; // Offset: 0x40

    idHttpManager* httpManager; // Offset: 0x48

    idImGuiHost* imguiHost; // Offset: 0x50

    idJobProcessor* jobProcessor; // Offset: 0x58

    idWatchdogTimer* watchdogTimer; // Offset: 0x60

    idThreadCallbackManager* mainThreadCallback; // Offset: 0x68

    idPlayerProfileInterface* playerProfileManager; // Offset: 0x70

    idPsnLegacyWebApiManager* psnLegacyWebApiManager; // Offset: 0x78

    idPsnWebApi2Manager* psnWebApi2Manager; // Offset: 0x80

    idRemoteMonitor* remoteMonitor; // Offset: 0x88

    idResourceCompression* resourceCompression; // Offset: 0x90

    idResourceMetaDataObjectFactory* resourceMetaDataObjectFactory; // Offset: 0x98

    idResourceStorageInterface* resourceStorageInterface; // Offset: 0xA0

    idResourceStorageGeneratorInterface* resourceStorageGeneratorInterface; // Offset: 0xA8

    idResourceStreamFileSpec* resourceStreamFileSpec; // Offset: 0xB0

    idResourceStreamFileTracker* resourceStreamFileTracker; // Offset: 0xB8

    idResourceTracking* resourceTracking; // Offset: 0xC0

    idRSSimpleExplicitBuilderFactory* rSSimpleExplicitBuilderFactory; // Offset: 0xC8

    idRuntimeConfiguration* runtimeConfiguration; // Offset: 0xD0

    idEncryptedFileCache* encryptedFileCache; // Offset: 0xD8

    idSoundSystem* soundSystem; // Offset: 0xE0

    idStreamDecoder* streamDecoder; // Offset: 0xE8

    idStreamingInstallManager* streamingInstallManager; // Offset: 0xF0

    idStreamIo* streamIo; // Offset: 0xF8

    idSystemInterface* systemInterface; // Offset: 0x100

    idTimeManager* timeManager; // Offset: 0x108

    idClockManager* clockManager; // Offset: 0x110

    idStopWatchManager* stopWatchManager; // Offset: 0x118

    idTypeInfoTools* typeInfoTools; // Offset: 0x120

    idAnimation* animation; // Offset: 0x128

    idBinaryVirtualCache* binaryVirtualCache; // Offset: 0x130

    idEditorInterface* editorInterface; // Offset: 0x138

    idDeclGlobalFontTable* globalFontTable; // Offset: 0x140

    idGlobalTextureManager* globalTextureManager; // Offset: 0x148

    idLightmapManager* lightmapManager; // Offset: 0x150

    idRenderLayerManager* renderLayerManager; // Offset: 0x158

    idRenderSystem* renderSystem; // Offset: 0x160

    idResolutionScale* resolutionScale; // Offset: 0x168

    idStaticModelManager* staticModelManager; // Offset: 0x170

    idWorldGeometryManager* worldGeometryManager; // Offset: 0x178

    idCloudAssets* cloudAssets; // Offset: 0x180

    libGlobals_t* idlibGlobals; // Offset: 0x188

    libInterface_t* libInterface; // Offset: 0x190

    idInput* input; // Offset: 0x198

    idImageManager* globalImages; // Offset: 0x1A0

    idSnapshotTemplateManager* snapshotTemplateManager; // Offset: 0x1A8

    idSnapshotMetrics* snapshotMetrics; // Offset: 0x1B0

    idEventDefInterface* eventDefInterface; // Offset: 0x1B8

    idForgeCrashReporter* forgeCrashReporter; // Offset: 0x1C0

    idReportData* reportData; // Offset: 0x1C8

    idTIVExport* tivExport; // Offset: 0x1D0

    idDebugHUD* debugHUD; // Offset: 0x1D8

    idCollisionModelManager* collisionModelManager; // Offset: 0x1E0

    idRadPreview* lightmapPreview; // Offset: 0x1E8

    idRecast* autoNav; // Offset: 0x1F0

    idRenderManager* renderManager; // Offset: 0x1F8

    engineTimeInfo_t* engineTimeInfo; // Offset: 0x200

    idGeomCacheStreamer* geomCacheStreamer; // Offset: 0x208

    idGeometryStreamer* geometryStreamer; // Offset: 0x210

    idLightProbeStreamer* lightProbeStreamer; // Offset: 0x218

    idGlobalParmStateManager* globalParmStateManager; // Offset: 0x220

    idCompileStatusHandler* compileStatusHandler; // Offset: 0x228

    Win32Vars_t* win32; // Offset: 0x230

    idImageStreamer* imageStreamer; // Offset: 0x238

    idStreamerDatabaseIo* streamerDatabaseIo; // Offset: 0x240

    idLogicEnvironment* logicEnvironment; // Offset: 0x248

    idUsercmdGen* usercmdGen; // Offset: 0x250

    idExternalDeclEditor* externalDeclEditor; // Offset: 0x258

    idFlightNavCompiler* flightNavCompiler; // Offset: 0x260

    idSignInManager* signInManager; // Offset: 0x268

    idAchievementSystem* achievementSystem; // Offset: 0x270

    idActivitiesSystem* activitiesSystem; // Offset: 0x278

    idOnlineSessionInviteManager* onlineSessionInviteManager; // Offset: 0x280

    idCursor* cursor; // Offset: 0x288

    idFirstPartyPlatform* firstparty; // Offset: 0x290

    // The following members are just within this struct to transfer the values for the shared globals to the game. Since the ownership of those instances might change, we just implement them here for the time being.
    idMem* memorySystemForTransfer; // Offset: 0x298

    idCVarSystem* cvarSystemForTransfer; // Offset: 0x2A0

    idCmdSystem* cmdSystemForTransfer; // Offset: 0x2A8

    idFileSystem* fileSystemForTransfer; // Offset: 0x2B0

    idProfileManager* profileManagerForTransfer; // Offset: 0x2B8

}; // Size: 0x2C8
