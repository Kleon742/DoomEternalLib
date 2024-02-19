struct idPlayerBreadCrumbing
{
    // Spline path for the ribbon.
    idDeclEntityDef* ribbonSplinePath; // Offset: 0x0

    // Ribbon to use for the barricade.
    idDeclRibbon2* ribbonEffect; // Offset: 0x8

    // Number of spline Samples.
    int ribbonSamples; // Offset: 0x10

    // How far off the floor we want to be. {{ units = m }}
    float ribbonInitialHeight; // Offset: 0x14

    // How far til the ribbon disapears. {{ units = m }}
    float ribbonViewDistance; // Offset: 0x18

    // How long it takes the ribbon to reach the end.
    idTypesafeTime < int , millisecondUnique_t , 1000 > ribbonSpeed; // Offset: 0x1C

    idRibbon2 ribbon; // Offset: 0x20

    idManagedClassPtr < idSplinePath > ribbonSpline; // Offset: 0x138

    // the owning player.
    idManagedClassPtr < idPlayer > owner; // Offset: 0x158

    // The goal point of the bread crumb. {{ units = m }}
    idVec3 bcGoal; // Offset: 0x178

    // is the system enabled or disabled?
    bool enabled; // Offset: 0x184

    // How long we've been moving.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ribbonTimer; // Offset: 0x188

    // time when ribbon was shown
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x190

    // time to fully hide the ribbon
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x198

    // The Current path to our goal. {{ ___ts = m }}
    idCurve_Spline < idVec3 >* currentPath; // Offset: 0x1A0

}; // Size: 0x1A8
