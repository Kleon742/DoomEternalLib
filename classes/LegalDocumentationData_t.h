struct LegalDocumentationData_t
{
    idStr when; // Offset: 0x0

    idStr accepted; // Offset: 0x30

    idVector < LegalDocsPresentedData_t > legalDocsPresented; // Offset: 0x60

}; // Size: 0x78
