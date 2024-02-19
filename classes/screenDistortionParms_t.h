struct screenDistortionParms_t
{
    idImageView* distortionMap; // Offset: 0x0

    idImageView* aberrationMap; // Offset: 0x8

    idImageView* flowMap; // Offset: 0x10

    idVec4 parms; // Offset: 0x18

    idVec4 scales; // Offset: 0x28

}; // Size: 0x38
