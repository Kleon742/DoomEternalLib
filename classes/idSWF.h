struct idSWF
{
    enum inputState_t : int
    {
        ACCEPT_NONE = 0,
        ACCEPT_WHEN_PLAYER_INHIBITED = 1,
        ACCEPT_WHEN_PLAYER_UNINHIBITED = 2
    };

    enum spriteFlags_t : int
    {
        SPRITE_FLAG_HUD_BUTTON_CALLOUT = 1
    };

    enum swfManagedResourceType_t : int
    {
        SWF_RESOURCE_NONE = -1,
        SWF_RESOURCE_BINK = 0
    };

    struct idSWFScriptStaticFunction_Object : idSWFScriptFunction_Nested
    {
        idSWFScriptObject object; // Offset: 0xC0

    }; // Size: 0x180

    struct idSWFScriptStaticFunction_Array : idSWFScriptFunction_Nested
    {
        idSWFScriptObject_ArrayPrototype arr; // Offset: 0xC0

    }; // Size: 0x338

    struct playingSound_t
    {
        idSoundWwiseID handle; // Offset: 0x0

        int id; // Offset: 0x4

        bool pauseable; // Offset: 0x8

    }; // Size: 0xC

    struct idCachedSpriteList_t
    {
        int spriteHash; // Offset: 0x0

        idList < idSWFCachedSpriteInstance * , TAG_IDLIST , false > cachedInstances; // Offset: 0x8

    }; // Size: 0x20

    struct idCachedTextList_t
    {
        int textHash; // Offset: 0x0

        idList < idSWFCachedTextInstance * , TAG_IDLIST , false > cachedInstances; // Offset: 0x8

    }; // Size: 0x20

    struct queuedTween_t
    {
        // should be safe because queued tweens get cleaned up when the idSWFSpriteInstance destructs
        idSWFSpriteInstance* spriteInstance; // Offset: 0x0

        idAtomicString variable; // Offset: 0x8

        float (*function)(float t , float b , float c , float d); // Offset: 0x10

        float startValue; // Offset: 0x18

        float stopValue; // Offset: 0x1C

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x20

        // If looping, how much time to wait between phases, -1 if not looping
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseTime; // Offset: 0x28

        // instead of looping back we snap back and continue looping if pauseTime >= 0
        bool snapBack; // Offset: 0x30

    }; // Size: 0x38

    struct idSWFScriptStaticFunction_trace : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_getPlatform : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_getTruePlatform : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_strReplace : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_getLocalString : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_getCVarInteger : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_setCVarInteger : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_getCVarString : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_setCVarString : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_isAsian : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_isDebugBuild : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_acos : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_cos : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_sin : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_round : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_pow : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_sqrt : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_abs : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_rand : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_floor : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_ceil : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_toUpper : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptStaticFunction_precacheSound : idSWFScriptFunction_Nested
    {
    }; // Size: 0xC0

    struct idSWFScriptFunction_shortcutKeys_clear : idSWFScriptFunction_Nested
    {
        idSWF* pThis; // Offset: 0xC0

    }; // Size: 0xC8

    struct idSWFScriptFunction_deactivate : idSWFScriptFunction_Nested
    {
        idSWF* pThis; // Offset: 0xC0

    }; // Size: 0xC8

    struct idSWFScriptFunction_inhibitControl : idSWFScriptFunction_Nested
    {
        idSWF* pThis; // Offset: 0xC0

    }; // Size: 0xC8

    struct idSWFScriptFunction_useInhibit : idSWFScriptFunction_Nested
    {
        idSWF* pThis; // Offset: 0xC0

    }; // Size: 0xC8

    struct idSWFScriptFunction_precacheFontFXMaterial : idSWFScriptFunction_Nested
    {
        idSWF* pThis; // Offset: 0xC0

    }; // Size: 0xC8

    struct idSWFScriptFunction_playSound : idSWFScriptFunction_Nested
    {
        idSWF* pThis; // Offset: 0xC0

    }; // Size: 0xC8

    struct idSWFScriptFunction_stopSounds : idSWFScriptFunction_Nested
    {
        idSWF* pThis; // Offset: 0xC0

    }; // Size: 0xC8

    struct idSWFScriptNativeStaticVarReadOnly_platform : idSWFScriptNativeStaticVariable_Nested
    {
    }; // Size: 0x8

    struct idSWFScriptNativeVar_blackbars : idSWFScriptNativeVariable_Nested < idSWF >
    {
    }; // Size: 0x10

    struct swfNineSliceInfo_t
    {
        bool hasNineSlice; // Offset: 0x0

        swfRect_t nineSliceRect; // Offset: 0x4

        idVec2 nineSliceScale; // Offset: 0x14

    }; // Size: 0x1C

    idDeclSWF* resourceDecl; // Offset: 0x0

    idSWFResource* resourceSWF; // Offset: 0x8

    idSWFScriptObject* scriptObject; // Offset: 0x10

    idSWFSpriteInstance* mainspriteInstance; // Offset: 0x18

    idSWFTextInstance* focusWindow; // Offset: 0x20

    idSWF::inputState_t inputState; // Offset: 0x28

    bool isActive; // Offset: 0x2C

    bool useInhibitControl; // Offset: 0x2D

    bool alwaysHandleEvents; // Offset: 0x2E

    bool triggerResume; // Offset: 0x2F

    // certain screens need to be rendered when the pause menu is up so if this flag is set on the gui we will allow it to render at a paused state;
    bool pausedRender; // Offset: 0x30

    bool degamma; // Offset: 0x31

    float renderBorder; // Offset: 0x34

    float swfScale; // Offset: 0x38

    float swfRenderScale; // Offset: 0x3C

    float rootAlphaMultiplier; // Offset: 0x40

    idDeclUIAnchor* anchorDecl; // Offset: 0x48

    cursorParms_t cursorParms; // Offset: 0x50

    int mouseX; // Offset: 0x70

    int mouseY; // Offset: 0x74

    // the device number of the user that owns and uses this SWF
    int userDeviceNumber; // Offset: 0x78

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastRenderTime; // Offset: 0x80

    int lastRender_vertsUsed; // Offset: 0x88

    int lastRender_indicesUsed; // Offset: 0x8C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastRender_time; // Offset: 0x90

    bool cursorOverObject; // Offset: 0x98

    idSWFScriptObject* mouseObject; // Offset: 0xA0

    idSWFScriptObject* hoverObject; // Offset: 0xA8

    idVec2 cursorPos; // Offset: 0xB0

    bool blackbars; // Offset: 0xB8

    bool paused; // Offset: 0xB9

    bool playOnResume; // Offset: 0xBA

    bool hasHitObject; // Offset: 0xBB

    bool queuedDeactivate; // Offset: 0xBC

    int fontEffects[210]; // Offset: 0xC0

    idSWFScriptObject* shortcutKeys; // Offset: 0x408

    idSWFScriptObject* buttonProxies; // Offset: 0x410

    // {{ units = m }}
    idVec3 soundOrigin; // Offset: 0x418

    idMat3 soundAxis; // Offset: 0x424

    idStaticList < idSWF::playingSound_t , 16 , false , TAG_IDLIST > playingSounds; // Offset: 0x448

    idMaterial2* atlasMaterial; // Offset: 0x520

    idSWFScriptFunction* onJoyCallback; // Offset: 0x528

    idSWFScriptFunction* onMouseMoveCallback; // Offset: 0x530

    // Set to true in idCommonLocal::PrepareForMapChange(). Used to identify SWF files that weren't destroyed when exiting a level. TODO: Maybe set as SWF constructor parameter? The general idea is detecting global vs. map specific/in-game SWFs.
    bool createdBeforeMapLoad; // Offset: 0x538

    bool createdInMapHeap; // Offset: 0x539

    idHashTableT < int , idSWFSpriteInstance * , 4 > spriteInstancesHashTable; // Offset: 0x540

    idHashTableT < int , idSWFTextInstance * , 4 > textInstancesHashTable; // Offset: 0x560

    idHashTableT < int , idSWF::idCachedSpriteList_t * , 4 > cachedSpriteInstancesHashTable; // Offset: 0x580

    idHashTableT < int , idSWF::idCachedTextList_t * , 4 > cachedTextInstancesHashTable; // Offset: 0x5A0

    idList < idSWF::queuedTween_t , TAG_SWF , false > queuedTweens; // Offset: 0x5C0

    idDeferredFuncList deferredFunctions; // Offset: 0x5D8

    idSWF::idSWFScriptFunction_shortcutKeys_clear scriptFunction_shortcutKeys_clear; // Offset: 0x620

    idSWF::idSWFScriptFunction_deactivate scriptFunction_deactivate; // Offset: 0x6E8

    idSWF::idSWFScriptFunction_inhibitControl scriptFunction_inhibitControl; // Offset: 0x7B0

    idSWF::idSWFScriptFunction_useInhibit scriptFunction_useInhibit; // Offset: 0x878

    idSWF::idSWFScriptFunction_precacheFontFXMaterial scriptFunction_precacheFontFXMaterial; // Offset: 0x940

    idSWF::idSWFScriptFunction_playSound scriptFunction_playSound; // Offset: 0xA08

    idSWF::idSWFScriptFunction_stopSounds scriptFunction_stopSounds; // Offset: 0xAD0

    idSWF::idSWFScriptNativeVar_blackbars swfScriptVar_blackbars; // Offset: 0xB98

    idMaterial2* guiSolid; // Offset: 0xBA8

    idList < const idMaterial2 * , TAG_SWF , false > fontFXMaterials; // Offset: 0xBB0

    // feel free to add a public interface to set this, right now it's not needed
    idArray < bool , 36 > disallowDuringNavSounds; // Offset: 0xBC8

    bool dimEnabled; // Offset: 0x0

    bool shadowEnabled; // Offset: 0x0

    idVec2 prevFrame; // Offset: 0xBF0

    float dimAmount; // Offset: 0xBF8

    idVec2 shadowOffset; // Offset: 0xBFC

    swfColorRGBA_t shadowColor; // Offset: 0xC04

    swfPlatform_t cachedPlatform; // Offset: 0xC08

    int platformCacheFrame; // Offset: 0xC0C

    int lastAnchorProfile; // Offset: 0xC10

    idSWF::swfNineSliceInfo_t nineSliceInfo; // Offset: 0xC14

    idList < idSWFSpriteInstance * , TAG_SWF , false > orphanedSprites; // Offset: 0xC30

    idList < idSWFTextInstance * , TAG_SWF , false > orphanedTexts; // Offset: 0xC48

    idSWFScriptObject_SpriteInstancePrototype spriteInstanceScriptObjectPrototype; // Offset: 0xC60

    idSWFScriptObject_TextInstancePrototype textInstanceScriptObjectPrototype; // Offset: 0x1CB0

    bool imagesCached; // Offset: 0x21F0

}; // Size: 0x21F8
