struct idResourceSetup
{
    enum comp_t : int
    {
        COMP_NONE = 0,
        COMP_ANY = 1,
        COMP_LEGACY = 2,
        COMP_HIGH = 3,
        COMP_FAST = 4
    };

    enum versionWindow_t : int
    {
        VERWINDOW_NONE = 0,
        VERWINDOW_1 = 1,
        VERWINDOW_2 = 2
    };

    enum cookedSupport_t : int
    {
        COOKED_DISABLED = 0,
        COOKED_ENABLED = 1
    };

    enum flags_t : int
    {
        FLAG_NONE = 0,
        FLAG_UPDATE_TO_LATEST = 1,
        FLAG_UPDATE_TO_LATEST_MINUS_1 = 2,
        FLAG_UPDATE_TO_LATEST_MINUS_2 = 4,
        FLAG_UPDATE_TO_LATEST_MINUS_3 = 8,
        FLAG_UPDATE_DEFAULTED_TO_LATEST = 16,
        FLAG_COOKER_UPDATE_TO_LATEST = 32,
        FLAG_REMOTE = 64,
        FLAG_EXCLUDE_FROM_PACKAGES = 128,
        FLAG_PARALLEL_GENERATE = 256,
        FLAG_RELOAD_ON_FILE_CHANGE = 512,
        FLAG_NO_RELOAD_SIGNALS = 1024,
        FLAG_PATCH_STALE_CHECKS = 2048,
        FLAG_NO_INSTRUMENTED_DEPS = 4096
    };

    // current binary version
    unsigned int version; // Offset: 0x0

    // number of supported old versions
    unsigned int versionWindow; // Offset: 0x4

    // extension of generated binary containers and explicit resources
    char* binaryExt; // Offset: 0x8

    // wanted compression (COMP_ANY is currently zlib, fully managed by container system)
    idResourceSetup::comp_t compression; // Offset: 0x10

    // this resource type may be found in cooked
    idResourceSetup::cookedSupport_t cookedSupport; // Offset: 0x14

    // misc flags
    idResourceSetup::flags_t flags; // Offset: 0x18

    // Callbacks for RES_DEP_CALLBACK
    unsigned long long (**dependencyCallbacks)(const idResource * const resource , const uint32 payloadLength , const byte * const payload); // Offset: 0x20

}; // Size: 0x28
