struct idSyncAttack_TraceValidation
{
    // TODO: Remove processed validation arrays Trace Validations still in the waiting list.
    idList < idSyncAttack_SlideMoveValidationResult , TAG_IDLIST , false > currentSlideMoveValidations; // Offset: 0x0

    // Which validation is next to be processed.
    int slideMoveProcessedIndex; // Offset: 0x18

    idList < idSyncAttack_TranslationValidationResult , TAG_IDLIST , false > currentTranslationValidations; // Offset: 0x20

    int translationProcessedIndex; // Offset: 0x38

    idList < idSyncAttack_ContentsCheckResult , TAG_IDLIST , false > currentContentsValidations; // Offset: 0x40

    int contentsProcessedIndex; // Offset: 0x58

    // These Tags will be have slideMove processed on them.
    idList < idStr , TAG_IDLIST , false > commonSlideMoveValidationTags; // Offset: 0x60

    idList < int , TAG_IDLIST , false > commonSlideMoveValidations; // Offset: 0x78

}; // Size: 0x90
