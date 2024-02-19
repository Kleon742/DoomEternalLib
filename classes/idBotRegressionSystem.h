struct idBotRegressionSystem : idEventReceiver
{
    int regressionUniqueIssues; // Offset: 0x38

    idRenderModelGui* regressionGuiModel; // Offset: 0x40

    idList < idBotRegressionIssue , TAG_BOT , false > regressionIssues; // Offset: 0x48

}; // Size: 0x60
