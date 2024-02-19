struct cpuDesc_t
{
    int numLogicalCPUCores; // Offset: 0x0

    int numPhysicalCPUCores; // Offset: 0x4

    int numCPUPackages; // Offset: 0x8

    int numProcessorGroups; // Offset: 0xC

    int numLogicalCPUCoresPerGroup[16]; // Offset: 0x10

    int numPhysicalCPUCoresPerGroup[16]; // Offset: 0x50

}; // Size: 0x90
