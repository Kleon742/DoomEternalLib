struct swfImagePurgeInfo_t
{
    struct swfMaterialReferenceInfo_t
    {
        idSWF* swf; // Offset: 0x0

        int refCount; // Offset: 0x8

    }; // Size: 0x10

    idList < swfImagePurgeInfo_t::swfMaterialReferenceInfo_t , TAG_SWF , false > refInfo; // Offset: 0x0

    idImage* image; // Offset: 0x18

    int totalRefCount; // Offset: 0x20

}; // Size: 0x28
