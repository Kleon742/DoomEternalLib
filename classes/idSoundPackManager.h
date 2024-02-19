struct idSoundPackManager
{
    struct soundPackData_t
    {
        idDeclSoundPack* decl; // Offset: 0x0

        idCVar* cvar; // Offset: 0x8

        bool enabled; // Offset: 0x10

        idSoundWwiseID groupID; // Offset: 0x14

        idSoundWwiseID onStateID; // Offset: 0x18

        idSoundWwiseID offStateID; // Offset: 0x1C

    }; // Size: 0x20

    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x0

    // Sound packs available for selection.
    idList < const idDeclSoundPack * , TAG_IDLIST , false > soundPacks; // Offset: 0x20

    idVector < idSoundPackManager::soundPackData_t > soundPackData; // Offset: 0x38

}; // Size: 0x50
