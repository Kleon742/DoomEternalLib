struct idHUDEvent_DossierMapProgressionItemUpdate
{
    struct dossierMapProgressionItemData_t
    {
        char name[100]; // Offset: 0x0

        bool hidden; // Offset: 0x64

        bool known; // Offset: 0x65

        bool found; // Offset: 0x66

        bool showType; // Offset: 0x67

        int category; // Offset: 0x68

        int id; // Offset: 0x6C

        int automapGroup; // Offset: 0x70

    }; // Size: 0x74

    idHUDEvent_DossierMapProgressionItemUpdate::dossierMapProgressionItemData_t info; // Offset: 0x0

}; // Size: 0x74
