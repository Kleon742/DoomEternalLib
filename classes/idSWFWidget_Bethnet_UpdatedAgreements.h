struct idSWFWidget_Bethnet_UpdatedAgreements : idSWFWidget_BethnetSubScreen
{
    enum bethnetUpdatedAgreementsCmdID_t : int
    {
        CMD_BETHNET_UPDATED_AGREEMENTS_DOC = 0,
        CMD_BETHNET_UPDATED_AGREEMENTS_CONTINUE = 1
    };

    LegalDocumentationData_t legalDocData; // Offset: 0x190

    idSWFWidget_List* list; // Offset: 0x208

    idProxyPtr < idSWFWidget_Bethnet_UpdatedAgreements > proxyPtr; // Offset: 0x210

    idOption < idBnetMasterIdentity::signInResult_type > signInResult; // Offset: 0x218

    bnet::requiredLegalDocs_t legalDocuments; // Offset: 0x2E8

    int currentDocIndex; // Offset: 0x308

}; // Size: 0x310
