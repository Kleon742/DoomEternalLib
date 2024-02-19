struct jobExecutor_t
{
    void (*execute)(jobWorkerState_t * workerState , void * executorWorkerState , jobRef_t ref); // Offset: 0x0

    unsigned int executorWorkerStateSize; // Offset: 0x8

    void (*initWorkerState)(void * parm , void * executorWorkerState); // Offset: 0x10

    void* initWorkerStateParm; // Offset: 0x18

}; // Size: 0x20
