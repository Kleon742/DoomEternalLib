struct idAnimRecorder
{
    enum blockType_t : int
    {
        RECORD_HEADER_BLOCK = 0,
        ANIM_STACK_BLOCK = 1,
        INVALID_BLOCK = 2
    };

    enum recordingFileMode_t : int
    {
        RECORDING_FILE_CLOSED = 0,
        RECORDING_FILE_READ = 1,
        RECORDING_FILE_WRITE = 2
    };

    idArray < unsigned char , 1406 > buffer; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cachedGameTime; // Offset: 0x588

    int cachedMessageSize; // Offset: 0x590

    long long dataStart; // Offset: 0x598

    idCompressor* compressor; // Offset: 0x5A0

    idFile* file; // Offset: 0x5A8

    idSerializer* activeSerializer; // Offset: 0x5B0

    idAnimStack* activeAnimStack; // Offset: 0x5B8

    idAnimRecorder::recordingFileMode_t recordingFileMode; // Offset: 0x5C0

    bool isPaused; // Offset: 0x5C4

}; // Size: 0x5C8
