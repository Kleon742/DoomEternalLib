struct idViseme_Frame : idVisemeEvent
{
    // number of weights (max 255 frames or 4060 MS at 16MS/frame)
    unsigned char numWeights; // Offset: 0x18

    // weight of viseme ( weight / 255 )
    unsigned char* weights; // Offset: 0x20

}; // Size: 0x28
