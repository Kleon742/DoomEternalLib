struct idSWFABCPool
{
    unsigned int tagFlags; // Offset: 0x0

    idSWFConstantsAS3 constants; // Offset: 0x8

    idGrowableList < idSWFMethodSignature , 10 , TAG_SWF > methodSignatures; // Offset: 0x180

    idGrowableList < idSWFMetadata , 2 , TAG_SWF > metadata; // Offset: 0x5A8

    idGrowableList < idSWFMethodBody , 10 , TAG_SWF > methodBodies; // Offset: 0x610

    idGrowableList < idSWFClassAS3 , 2 , TAG_SWF > classes; // Offset: 0xB78

    idGrowableList < idSWFClassInstance , 2 , TAG_SWF > classInstances; // Offset: 0xC30

    idGrowableList < idAtomicString , 2 , TAG_SWF > classInstanceLowerNames; // Offset: 0xD48

    idGrowableList < idSWFScriptInfoAS3 , 2 , TAG_SWF > scripts; // Offset: 0xD70

    idAtomicString swfName; // Offset: 0xE28

}; // Size: 0xE30
