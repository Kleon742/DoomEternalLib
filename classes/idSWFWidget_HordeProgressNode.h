struct idSWFWidget_HordeProgressNode : idSWFWidget
{
    bool isFinalNode; // Offset: 0x180

    bool hasBonusPath; // Offset: 0x181

    short roundNumber; // Offset: 0x182

    idDeclUICustomData_Widget_HordeProgress::nodeInfo_t nodeData; // Offset: 0x188

    idSWFWidget_ArenaWaves* waveWidget; // Offset: 0x1A8

}; // Size: 0x1B0
