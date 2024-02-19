struct engineTimeInfo_t
{
    unsigned long long time_spinning; // Offset: 0x0

    // total game logic time possible multiple frames
    unsigned long long time_gameFrame; // Offset: 0x8

    // previous frame's time_gameFrame, since that gets reset at the start of each frame
    unsigned long long time_prevGameFrame; // Offset: 0x10

    // maximum single frame game logic time
    unsigned long long time_maxGameFrame; // Offset: 0x18

    // render frame time
    unsigned long long time_renderFrame; // Offset: 0x20

    // GPU time - measure is only working on the consoles right now, see r_useGPUTimer XXX: This comment is out of date as of 2016/05/03 (if not earlier) - JJC
    unsigned long long time_GPUFrameTime; // Offset: 0x28

    // time spent waiting on the session to pump (handling snapshots, reliables, packets, lobbies, etc.)
    unsigned long long time_sessionPumpTime; // Offset: 0x30

    // total frame time
    unsigned long long time_frame; // Offset: 0x38

    // idle time spent synchronizing with GPU
    unsigned long long time_idleCPU; // Offset: 0x40

    // total CPU frame time, excluding GPU synchronization
    unsigned long long time_CPUFrameTime; // Offset: 0x48

    // used to calc average fps
    unsigned long long time_FrameCounter; // Offset: 0x50

    // used to calc average fps
    unsigned long long time_FPSTotal; // Offset: 0x58

    // fps
    int time_FPS; // Offset: 0x60

    // average fps over the lifetime of a map play session
    int time_AverageFPS; // Offset: 0x64

    // last map load time in ms
    idTypesafeTime < int , millisecondUnique_t , 1000 > time_mapLoadMS; // Offset: 0x68

    // total number of game frames that were run
    int count_numGameFrames; // Offset: 0x6C

}; // Size: 0x70
