struct idTarget_ConditionalAccessor : idTarget
{
    // Add this much to the targeted conditional(s). Can be negative.
    int value; // Offset: 0xB88

    // if true then set to exact value instead of adding
    bool setvalue; // Offset: 0xB8C

}; // Size: 0xB90
