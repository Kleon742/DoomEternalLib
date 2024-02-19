struct woundMaskData_t
{
    // Mask texture. red encodes clip weight, alpha encodes blood weight.
    idImageRef woundTexture; // Offset: 0x0

    // Material to apply the texture on.
    idMaterial2* baseMaterial; // Offset: 0x8

    // Optional joint filter. Wound will only be applied on vertices skinned by this joints or any of its children.
    idJointName jointFilter; // Offset: 0x10

}; // Size: 0x40
