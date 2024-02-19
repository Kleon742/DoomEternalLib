struct swfException_t
{
    // Starting position in idSWFMethodBody::m_code from which the exception is handled
    unsigned int startPos; // Offset: 0x0

    // Ending position in idSWFMethodBody::m_code from which the exception is handled
    unsigned int endPos; // Offset: 0x4

    // Position in idSWFMethodBody::m_code to which control should jump to
    unsigned int targetPos; // Offset: 0x8

    // Constant pool string index that identifies the exception type name, 0 implies this exception handler will catch it
    unsigned int exceptionType; // Offset: 0xC

    // Constant pool string index that defines the name of the variable to receive exception object
    unsigned int varName; // Offset: 0x10

}; // Size: 0x14
