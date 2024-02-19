struct aiTimerData_t
{
    // name of this timer
    idAtomicString name; // Offset: 0x0

    // range of this timer, used differently depending on code
    idRange < float > rangeInSeconds; // Offset: 0x8

}; // Size: 0x10
