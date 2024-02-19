struct idStringHandleRegistry
{
    struct registration_t
    {
        char* val; // Offset: 0x0

        bool owner; // Offset: 0x8

        unsigned long long hash; // Offset: 0x10

    }; // Size: 0x18

    idList < idStringHandleRegistry::registration_t , TAG_IDLIST , false > registrations; // Offset: 0x0

}; // Size: 0x18
