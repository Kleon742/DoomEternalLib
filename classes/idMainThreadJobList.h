struct idMainThreadJobList
{
    enum executePolicy_t : int
    {
        EP_JOB_ENTRY = 0,
        EP_LOCAL_IMMEDIATE = 1
    };

    enum enum_E01 : int
    {
        MAX_TASKS = 256,
        MAX_BARRIERS = 1024,
        MAX_STACK = 32,
        MAX_PARAMETER_BLOCK = 2048
    };

    struct task_t
    {
        jobScalarEntrypointRef_t descriptor; // Offset: 0x0

        void* parm; // Offset: 0x8

        int firstBarrierIdx; // Offset: 0x10

        int numBarriers; // Offset: 0x14

    }; // Size: 0x18

    struct parameter_t
    {
        void (*destructor)(parameter_t *); // Offset: 0x0

        idMainThreadJobList::parameter_t* previous; // Offset: 0x8

    }; // Size: 0x10

    typedef void (*destructor_t)(parameter_t *);

    idMainThreadJobList* previousTopFrame; // Offset: 0x0

    uintptr_t previousMainThreadId; // Offset: 0x8

    idMainThreadJobList::task_t tasks[256]; // Offset: 0x10

    jobHandle_t barriers[1024]; // Offset: 0x1810

    char* parameterBlock; // Offset: 0x3810

    idMainThreadJobList::parameter_t* lastParameter; // Offset: 0x3818

    int taskEnd; // Offset: 0x3820

    int pendingBarrierIdx; // Offset: 0x3824

    int numBarriers; // Offset: 0x3828

    int parameterBlockEnd; // Offset: 0x382C

    idMainThreadJobList::executePolicy_t executePolicy; // Offset: 0x3830

    bool hasQueuedWork; // Offset: 0x3834

}; // Size: 0x3838
