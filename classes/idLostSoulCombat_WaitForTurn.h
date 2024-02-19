struct idLostSoulCombat_WaitForTurn : idAIState
{
    // center location of the shape {{ units = m }}
    idVec3 centerLoc; // Offset: 0x130

    // forward direction of the shape
    idVec3 forward; // Offset: 0x13C

    // horizontal offset range for the flight path shape {{ units = m }}
    idRange < float > horizontalOffsetRange; // Offset: 0x148

    // depth offset range for the flight path shape {{ units = m }}
    idRange < float > depthOffsetRange; // Offset: 0x150

    // vertical offset range for the flight path shape {{ units = m }}
    idRange < float > verticalOffsetRange; // Offset: 0x158

    // angle variation for the shape
    idTypesafeNumber < float , DegreesUnique_t > angleVariation; // Offset: 0x160

    // whether we've already started using the path shape
    bool pathStarted; // Offset: 0x164

    // move direction
    bool moveToLeft; // Offset: 0x165

    // true if it's ready to charge
    bool readyToCharge; // Offset: 0x166

}; // Size: 0x168
