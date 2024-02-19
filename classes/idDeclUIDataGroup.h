struct idDeclUIDataGroup : idGameDeclTypeInfo
{
    struct uiData_t
    {
        // name for entity
        idStrId displayName; // Offset: 0x0

        // description
        idStrId description; // Offset: 0x4

        // string for misc functions
        idStrId extraString; // Offset: 0x8

        // string for misc functions
        idStrId extraString2; // Offset: 0xC

        // icon
        idMaterial2* icon; // Offset: 0x10

        // second icon ( likely for on/off relationship )
        idMaterial2* icon2; // Offset: 0x18

        // a very good solution and not a hack to get the automap legend working for ship
        idMaterial2* icon3; // Offset: 0x20

        // the 'canonical' icon color (i.e. white for most, currency-color for the different currencies).
        swfNamedColors_t iconColor; // Offset: 0x28

        // extra decl that might be associated with the data
        idGameDeclTypeInfo* extraDecl; // Offset: 0x30

    }; // Size: 0x38

    // list of the ui data
    idList < idDeclUIDataGroup::uiData_t , TAG_IDLIST , false > dataList; // Offset: 0x90

}; // Size: 0xA8
