struct idResource
{
    enum loadStatus_t : int
    {
        LOADSTATUS_OK = 0,
        LOADSTATUS_INSUFFICIENT_SPACE = 1,
        LOADSTATUS_SYSTEM_ERROR = 2,
        LOADSTATUS_OK_BINARY_MAX = 3,
        LOADSTATUS_CORRUPT = 4,
        LOADSTATUS_FATAL_OTHER = 5
    };

    // Ideally this should become a const, with it passed in as a required parameter to the constructor, because changing it would invalidate the position on the hash chain.
    idAtomicString name; // Offset: 0x8

    // When a resource is added to a list, this is set, so it can be removed on destruction. The destructor can't call the virtual GetResourceList() function, because the subclass destructor has already been called by this point.
    resourceList_t* resourceListPtr; // Offset: 0x10

    // This will be NULL if the resource was loaded as expected, otherwise it will have a description of why a default resource was set up.
    char* resourceError; // Offset: 0x18

    // resource storage
    resourceStorage_t* container; // Offset: 0x20

    unsigned long long generateHash; // Offset: 0x28

    idResourceVariation variation; // Offset: 0x30

    unsigned int globalLastLoadIndex; // Offset: 0x34

    // Resource ID This is guaranteed to be unique across all resources of this type
    unsigned long long resourceID; // Offset: 0x38

    // Don't ever free, because system code holds a pointer to it.
    resourceDomain_t resourceDomain; // Offset: 0x40

    // The current depot for the stored asset
    resourceDepot_t depot; // Offset: 0x44

    // this count must match or exceed idResourceList::staleCount for a resource to be allowed to do a stale check. This allows the stale check to only be done once per map load.
    int staleCount; // Offset: 0x48

    // How many times the resource was loaded
    interlockedInt_t referenceCount; // Offset: 0x4C

    // Many resources reference other resources, but it is generally a Bad Thing to get a loop formed, because a resource will have to be returned that isn't completely loaded. Also used as a signal that the resource is fully defined in batch generate and load
    bool insideRecursiveLoad; // Offset: 0x50

    // This will be true if the resource was instantiated through the idResourceList::Load() path, and false if it was dynamically created by code.
    bool loadedResource; // Offset: 0x0

    // Some resources have circular links, so it is not possible to find a resource order that always has all referenced entities already loaded. We get around this by allowing a resource to be created but not initialized if it is recursively loaded while in production mode. The deferred resource should be loaded next, but if the first resource actually tries to use it during it's LoadResourceInternal(), we will probably explode.  Static code resources are also allocated without loading, allowing them to be filled in by a BuildGame file or the normal development loading.
    bool loadDeferred; // Offset: 0x0

    // true if this resource was defaulted during load
    bool isDefaulted; // Offset: 0x0

    // true if this is identified as possibly taking a long time to load
    bool isVeryLargeFile; // Offset: 0x0

}; // Size: 0x58
