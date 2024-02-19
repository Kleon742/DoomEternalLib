struct syncDataValue_t
{
    // the string value used by this modifier
    idStr valueStr; // Offset: 0x0

    // the bool value to be used by this modifier.
    bool valueBool; // Offset: 0x30

    // the context flag value to be used by this modifier
    aiContextFlags_t valueContextFlags; // Offset: 0x34

}; // Size: 0x38
