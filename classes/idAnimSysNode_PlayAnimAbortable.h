struct idAnimSysNode_PlayAnimAbortable : idAnimSysNode_PlayAnim
{
    float* externalTimeDirectionPtr; // Offset: 0xF8

    // 0 = Not done, -1 = Abort complete at start, 1 = aborted but completed, 2 = finished
    float abortableStatus; // Offset: 0x100

    float lastAbortPoint; // Offset: 0x104

    float abortTimeScale; // Offset: 0x108

}; // Size: 0x110
