struct idAnimSysNode_Midnight : idAnimSysNode
{
    enum enum_28001 : int
    {
        MIDNIGHT_MAX_INSTANCES = 4
    };

    struct midnightAnimInstance_t : animInstance_t
    {
        idDeclMD6* declMD6; // Offset: 0x28

        md6BlendOriginOutput_t originOutput; // Offset: 0x30

        // Never access, only compare
        idMidnightTrackInst* ownerInst; // Offset: 0xA0

        float blendVal; // Offset: 0xA8

        // The cycle number of idAnimSys that this was last generated on. -1 = never generated.
        int generatedOnCycle; // Offset: 0xAC

        idMidnightAnimClipFlags_t flags; // Offset: 0xB0

        unsigned char loopCounter; // Offset: 0xB4

        bool isPaused; // Offset: 0xB5

        unsigned char pad[3]; // Offset: 0xB6

    }; // Size: 0xC0

    struct reverseClipInfo_t
    {
        idDeclMD6* declMD6; // Offset: 0x0

        // Never access, only compare
        idMidnightTrackInst* ownerInst; // Offset: 0x8

        idMidnightAnimClipInfo clipInfo; // Offset: 0x10

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > animTime; // Offset: 0xF0

        unsigned char loopCounter; // Offset: 0xF8

    }; // Size: 0x100

    struct midnightInstance_t
    {
        idMidnightTrackInst* ownerInstance; // Offset: 0x0

        idMidnightAnimMdntInfo* animInfo; // Offset: 0x8

        idDeclMD6* declMD6Override; // Offset: 0x10

        idTypesafeTime < int , millisecondUnique_t , 1000 > midnightPrevTime; // Offset: 0x18

    }; // Size: 0x20

    idRingList < idAnimSysNode_Midnight::midnightInstance_t , 4 > midnightAnimInfo; // Offset: 0xA8

    idStaticList < idAnimSysNode_Midnight::midnightAnimInstance_t , 4 , false , TAG_IDLIST > animInstances; // Offset: 0x130

    idStaticList < idAnimSysNode_Midnight::reverseClipInfo_t , 4 , false , TAG_IDLIST > savedReverseAnimClips; // Offset: 0x450

    idMD6Alias* lastPerfectPlacementAlias; // Offset: 0x868

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastValidMidnightUpdate; // Offset: 0x870

    bool frameLock; // Offset: 0x878

    bool justLoadedFromQuickSave; // Offset: 0x879

}; // Size: 0x880
