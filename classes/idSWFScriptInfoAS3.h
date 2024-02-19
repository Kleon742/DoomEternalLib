struct idSWFScriptInfoAS3
{
    // Index into the method signatures list, function invoked before any code in this script
    unsigned int initMethod; // Offset: 0x0

    // Traits for this script
    idGrowableList < idSWFTrait , 2 , TAG_SWF > traits; // Offset: 0x8

}; // Size: 0x50
