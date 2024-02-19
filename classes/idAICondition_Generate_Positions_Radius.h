struct idAICondition_Generate_Positions_Radius : idAICondition
{
    // if nonzero, generate grid of points in this distance
    idRange < float > distance; // Offset: 0x18

    // grid of points is this size
    float gridSize; // Offset: 0x20

    // if true, generate grid around target instead of me
    bool targetRelative; // Offset: 0x24

    // blah
    idColor debugColor; // Offset: 0x28

}; // Size: 0x38
