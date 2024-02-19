struct idDeclLogic : idDeclTypeInfo
{
    enum status_t : int
    {
        STATUS_DEFAULT = 0,
        STATUS_MODIFIED = 1,
        STATUS_RELOAD_IF_STALE = 4,
        STATUS_QUERY_RELOAD_IF_STALE = 8
    };

    // #TODO_PAULS : Move properties, variables etc... to idDeclLogic? How do we then prevent invalid declaration e.g. variables in a library decl? : Or do we just move functions out to DeclLogicLibrary, DeclLogicClass and DeclLogicEntity? Functions
    idList < idLogicGraphAssetFunction , TAG_LOGIC , false > functions; // Offset: 0x88

    // States
    idList < idLogicGraphAssetState , TAG_LOGIC , false > states; // Offset: 0xA0

    // defined( ID_DEV_TOOLS )
    idDeclLogicEditContext* editContext; // Offset: 0xB8

    int status; // Offset: 0xC0

    int versionNumberOnDisk; // Offset: 0xC4

    // Version number
    int versionNumber; // Offset: 0xC8

}; // Size: 0xD0
