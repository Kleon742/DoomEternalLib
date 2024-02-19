struct idSWFMethodSignature
{
    // 0x01 - NEED_ARGUMENTS, 0x02, NEED_ACTIVATION, 0x04 - NEED_REST, 0x08 - HAS_OPTIONAL, 0x40 - SET_DXNS, 0x80 - HAS_PARAM_NAMES
    unsigned char flags; // Offset: 0x0

    // Constant pool multiname index
    unsigned int returnType; // Offset: 0x4

    // Each value is a constant pool multiname index
    idGrowableList < unsigned int , 2 , TAG_SWF > paramTypes; // Offset: 0x8

    // Constant pool string index
    unsigned int name; // Offset: 0x28

    // Default value to use for the method's optional parameters
    idList < swfConstant_t , TAG_SWF , false > optionalParams; // Offset: 0x30

    // Each value is a constant pool string index
    idGrowableList < unsigned int , 2 , TAG_SWF > paramNames; // Offset: 0x48

}; // Size: 0x68
