struct idMD6Skel : idResource
{
    enum enum_C300 : int
    {
        EXTRA_JOINTS_VERSION = 0
    };

    enum md6SkelDependencyCallbacks_t : int
    {
        DEP_CALLBACK_RIGDECL = 0,
        DEP_CALLBACK_NUM = 1
    };

    // default animation for this skeleton
    idMD6Anim* defaultAnim; // Offset: 0x58

    // everything the blend jobs need to know about this skeleton
    idMD6SkelData* data; // Offset: 0x60

}; // Size: 0x68
