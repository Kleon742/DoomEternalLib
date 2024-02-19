struct idSWFResource : idResource
{
    enum swfManagedResourceType_t : int
    {
        SWF_RESOURCE_NONE = -1,
        SWF_RESOURCE_ATLAS = 0,
        SWF_RESOURCE_MATERIAL = 1,
        SWF_RESOURCE_BINK = 2
    };

    struct resourceInfo_t
    {
        idSWFResource::swfManagedResourceType_t resourceType; // Offset: 0x0

        idStr name; // Offset: 0x8

        idStr defaultMap; // Offset: 0x38

        idStr renderProg; // Offset: 0x68

        idStr declText; // Offset: 0x98

        idMaterial2* material; // Offset: 0xC8

    }; // Size: 0xD0

    struct idDecompressJPEG
    {
        void* vinfo; // Offset: 0x0

    }; // Size: 0x8

    struct imageToPack_t
    {
        int characterID; // Offset: 0x0

        // in texels
        idVec2i trueSize; // Offset: 0x4

        // trueSize.x * trueSize.y * 4
        unsigned char* imageData; // Offset: 0x10

        // in DXT tiles, includes a border texel and rounding up to DXT blocks
        idVec2i allocSize; // Offset: 0x18

    }; // Size: 0x20

    struct idSortBlocks : idSort_Quick < idSWFResource::imageToPack_t , idSWFResource::idSortBlocks >
    {
    }; // Size: 0x8

    idSWFSprite* mainsprite; // Offset: 0x58

    // for AS3
    idSWFAVM avm; // Offset: 0x60

    float actionScriptVersion; // Offset: 0xA0

    unsigned char swfVersion; // Offset: 0xA4

    float frameWidth; // Offset: 0xA8

    float frameHeight; // Offset: 0xAC

    unsigned short frameRate; // Offset: 0xB0

    bool hasAtlasTexture; // Offset: 0xB2

    idAtomicString atlasTextureName; // Offset: 0xB8

    idMaterial2* atlasMaterial_Default; // Offset: 0xC0

    idMaterial2* atlasMaterial_SeparableBlur; // Offset: 0xC8

    idMaterial2* atlasMaterial_BoxBlur; // Offset: 0xD0

    // not const because we call idImage::PurgeImage()
    idImage* atlasImage; // Offset: 0xD8

    int atlasWidth; // Offset: 0xE0

    int atlasHeight; // Offset: 0xE4

    idList < idSWFDictionaryEntry , TAG_SWF , false > dictionary; // Offset: 0xE8

    idMaterial2* guiSolid; // Offset: 0x100

    unsigned long long fingerprint; // Offset: 0x108

    idList < idSWFResource::resourceInfo_t , TAG_SWF , false > swfResources; // Offset: 0x110

    bool useLegacyImageFormat; // Offset: 0x128

    idSWFResource::idDecompressJPEG jpeg; // Offset: 0x130

    // only used during creation
    idList < idSWFResource::imageToPack_t , TAG_SWF , false > packImages; // Offset: 0x138

}; // Size: 0x150
