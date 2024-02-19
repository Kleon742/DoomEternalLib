struct idSysThread
{
    idStr name; // Offset: 0x8

    uintptr_t threadHandle; // Offset: 0x38

    bool isWorker; // Offset: 0x40

    bool isRunning; // Offset: 0x41

    bool isTerminating; // Offset: 0x42

    bool moreWorkToDo; // Offset: 0x43

    idSysSignal signalWorkerDone; // Offset: 0x48

    idSysSignal signalMoreWorkToDo; // Offset: 0x50

    idSysMutex signalMutex; // Offset: 0x58

}; // Size: 0x80
