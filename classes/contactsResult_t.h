struct contactsResult_t
{
    int numContacts; // Offset: 0x0

    int pad[3]; // Offset: 0x4

    contactInfo_t contacts[12]; // Offset: 0x10

}; // Size: 0x3A0
