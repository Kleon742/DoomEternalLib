struct idAIAnimState_StateAction_SelectRandomString : idAIAnimState_StateAction
{
    // strings to select from
    idList < idAtomicString , TAG_IDLIST , false > randomStrings; // Offset: 0x18

    // assign result to this key
    idAtomicString memoryKey; // Offset: 0x30

}; // Size: 0x38
