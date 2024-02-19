struct idTarget_POI : idTarget
{
    // Type of POI to show.
    idDeclPOI* decl; // Offset: 0xB88

    // Type of POI to show if mainObjective is true.
    idDeclPOI* mainObjectiveDecl; // Offset: 0xB90

    // flag for playing the poi sound
    bool playSound; // Offset: 0xB98

    // flag to specify if the poi is the main objective otherwise it will be considered a sub objective
    bool mainObjective; // Offset: 0xB99

    // identifier for the poi that links to this target
    int poiUid; // Offset: 0xB9C

    // The current POI is active
    bool activated; // Offset: 0xBA0

}; // Size: 0xBA8
