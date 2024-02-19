struct idAICondition_Generate_MinorPositions_Radius : idAICondition
{
    // if nonzero, generate grid of points in this distance
    idRange < float > distance; // Offset: 0x18

    // if true, generate grid around target instead of me
    bool targetRelative; // Offset: 0x20

    // blah
    idColor debugColor; // Offset: 0x24

}; // Size: 0x38
