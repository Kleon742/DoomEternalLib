struct parmValue_t
{
    // parmType == PT_VECTOR (can't be an idVec4 in a union)
    float value[4]; // Offset: 0x0

    // parmType == PT_TEXTURE_2D, PT_TEXTURE_3D, PT_TEXTURE_CUBE, etc.
    idImageView* imageView; // Offset: 0x0

    // parmType == PT_SAMPLER (if NULL use the default one from the image)
    idTextureSampler* sampler; // Offset: 0x0

    // parmType == PT_PROGRAM (may be NULL)
    idDeclRenderProg* program; // Offset: 0x0

    // parmType == PT_COLORLUT (may be NULL)
    idColorLUT* colorLUT; // Offset: 0x0

    // parmType == PT_ACCELERATION_STRUCTURE
    idTopLevelAccelerationStructure* accelerationStructure; // Offset: 0x0

    // strings are not freed, they are assumed to point to constant data, either literals or idAtomicStrings. parmType == PT_STRING (will always be at least "")
    char* string; // Offset: 0x0

    // not associated with a parm type but used by OP_TYPE_SWIZZLE
    int swizzle[4]; // Offset: 0x0

    parmValue_t::anon_3 shaderStorageBuffer; // Offset: 0x0

    // parmType == PT_UNIFORM_BUFFER
    parmValue_t::anon_4 uniformBuffer; // Offset: 0x0

    // parmType == PT_IMAGE3D_BUFFER_OBJECT, PT_IMAGE3D_BUFFER_OBJECT
    parmValue_t::anon_5 imageBuffer; // Offset: 0x0

    // parmType == PT_UNIFORM_TEXEL_BUFFER, PT_STORAGE_TEXEL_BUFFER Format is only relevant for storage
    parmValue_t::anon_6 texelBuffer; // Offset: 0x0

}; // Size: 0x10
