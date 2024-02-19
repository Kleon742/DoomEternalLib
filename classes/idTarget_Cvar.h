struct idTarget_Cvar : idTarget
{
    struct keyVal_t
    {
        // key name
        idStr key; // Offset: 0x0

        // value of key
        idStr val; // Offset: 0x30

    }; // Size: 0x60

    // list of all key value pairs
    idList < idTarget_Cvar::keyVal_t , TAG_IDLIST , false > keyVals; // Offset: 0xB88

}; // Size: 0xBA0
