struct idAnimSysNodeData_PlayAnimAbortable : idAnimSysNodeData_PlayAnim
{
    // External time direction controller (0-1)
    idAtomicString externalTimeDirectionRef; // Offset: 0xF0

    // At what time is the last abortable point
    float lastAbortPoint; // Offset: 0xF8

    // Timescale value for aborting the animation
    float abortTimeScale; // Offset: 0xFC

}; // Size: 0x100
