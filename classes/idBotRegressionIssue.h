struct idBotRegressionIssue
{
    botRegressionTypes_t regressionIssue; // Offset: 0x0

    idStr regressionReporterName; // Offset: 0x8

    idManagedClassPtr < const idEntity > regressionReporterEntity; // Offset: 0x38

}; // Size: 0x58
