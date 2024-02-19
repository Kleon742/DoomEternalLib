struct idProfileManager
{
    typedef void (*connectionChangeNotification_t)(void * const param , const uint32 profileSourceMask);

    typedef void (*buildVersionInfoStringCallback_t)(void * const param , idStr & buildInfoStr);

}; // Size: 0x8
