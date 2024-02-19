struct idSWFScriptArray : idSWFScriptObject
{
    struct idSearch_ArrayElement : idSearch_Binary < int , idSWFScriptArray::idSearch_ArrayElement >
    {
    }; // Size: 0x8

    int length; // Offset: 0xC0

    idList < int , TAG_SWF , false > sparseIndex; // Offset: 0xC8

    idList < idSWFScriptVar , TAG_SWF , false > sparseValues; // Offset: 0xE0

}; // Size: 0xF8
