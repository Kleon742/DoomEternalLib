struct idRibbon2Emitter : idDynamicEntity
{
    struct ribbonSpline_t
    {
        // spline to build ribbon from
        idManagedClassPtr < idSplinePath > splinePath; // Offset: 0x0

        // number of times to sample the spline
        int numSplineSamples; // Offset: 0x20

    }; // Size: 0x28

    bool hidden; // Offset: 0xCF8

    // true to start off
    bool startOff; // Offset: 0xCF9

    // turn off and on with sequential triggerings
    bool cycleTrigger; // Offset: 0xCFA

    // ribbon decl
    idDeclRibbon2* declRibbon; // Offset: 0xD00

    // list of splines that this ribbon may use
    idList < idRibbon2Emitter::ribbonSpline_t , TAG_IDLIST , false > splineList; // Offset: 0xD08

    // The first point in the ribbon {{ units = m }}
    idVec3 startingOrigin; // Offset: 0xD20

    // ribbon manager
    idRibbon2 ribbon; // Offset: 0xD30

}; // Size: 0xE48
