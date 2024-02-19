struct idSWFBatchRenderer
{
    enum status_t : int
    {
        BATCH_OPEN = 0,
        BATCH_CLOSED = 1,
        BATCH_WORKING = 2
    };

    jobHandle_t jobHdl; // Offset: 0x0

    SWFRenderJobParms_t* jobParms; // Offset: 0x8

    unsigned int numJobs; // Offset: 0x10

    idGrowableList < SWFRenderCommitContext_t * , 8 , TAG_SWF > commitContexts; // Offset: 0x18

    unsigned int numCommitContexts; // Offset: 0x70

    idSWFBatchRenderer::status_t status; // Offset: 0x74

    idSysMutex mutex; // Offset: 0x78

}; // Size: 0xA0
