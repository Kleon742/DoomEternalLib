struct idMainMenu_Popup_AccountAgreements : idMenuElement
{
    enum accountAgreementsCmdID_t : int
    {
        CMD_ACCOUNT_AGREEMENTS_DOC = 0
    };

    enum accountAgreementsLoadStatusID_t : int
    {
        LOAD_ACCOUNT_AGREEMENTS_INVALID = -1,
        LOAD_ACCOUNT_AGREEMENTS_NONE = 0,
        LOAD_ACCOUNT_AGREEMENTS_LOADING = 1,
        LOAD_ACCOUNT_AGREEMENTS_FAILED = 2
    };

    // Telemetry
    LegalDocumentationData_t legalDocData; // Offset: 0x100

    idSWFWidget_List* list; // Offset: 0x178

    // Async Task Info
    idProxyPtr < idMainMenu_Popup_AccountAgreements > proxyPtr; // Offset: 0x180

    // should only be set if coming from the bethnet sign-in UI
    idLocklessWeakPtr < idPlatformIdentityContainer > identContainer; // Offset: 0x188

    bnet::requiredLegalDocs_t legalDocuments; // Offset: 0x190

    idMainMenu_Popup_AccountAgreements::accountAgreementsLoadStatusID_t queuedLoadingStatus; // Offset: 0x1B0

}; // Size: 0x1B8
