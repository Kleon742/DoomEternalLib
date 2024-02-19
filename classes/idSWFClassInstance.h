struct idSWFClassInstance
{
    // Constant pool multiname index, must be a QName
    unsigned int name; // Offset: 0x0

    // Constant pool multiname index, 0 indicates no base class
    unsigned int superName; // Offset: 0x4

    // Bit flags. 0x01 - sealed, 0x02 - final, 0x04 - interface, 0x08 - protected namespace
    unsigned char flags; // Offset: 0x8

    // Constant pool namespace index
    unsigned int protectedNs; // Offset: 0xC

    // Each value is a constant pool multiname index
    idGrowableList < unsigned int , 2 , TAG_SWF > interfaces; // Offset: 0x10

    // Index into the method signatures list, called when class is constructed
    unsigned int initMethod; // Offset: 0x30

    // Traits for this class instance
    idGrowableList < idSWFTrait , 2 , TAG_SWF > traits; // Offset: 0x38

}; // Size: 0x80
