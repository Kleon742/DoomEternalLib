struct idStatusEffect_Onslaught : idStatusEffect
{
    bool removeRightLauncherOnExit; // Offset: 0x130

    int fpIndex; // Offset: 0x134

    // circular fireParms buffer
    idArray < idFireParms , 8 > fireParms; // Offset: 0x138

}; // Size: 0x1678
