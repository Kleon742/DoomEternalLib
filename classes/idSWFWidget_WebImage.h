struct idSWFWidget_WebImage : idSWFWidget
{
    idStr imageId; // Offset: 0x180

    idStr imageUrl; // Offset: 0x1B0

    idImage* image; // Offset: 0x1E0

    idMaterial2* imageMaterial; // Offset: 0x1E8

    asyncio::idTaskResultPtr < bool , bool > imageDownloadTask; // Offset: 0x1F0

    bool updateRequested; // Offset: 0x1F8

    idMaterial2* placeholderMaterial; // Offset: 0x200

    idProxyPtr < idSWFWidget_WebImage > proxyPtr; // Offset: 0x208

}; // Size: 0x210
