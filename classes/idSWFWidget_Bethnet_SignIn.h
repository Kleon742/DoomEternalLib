struct idSWFWidget_Bethnet_SignIn : idSWFWidget_BethnetSubScreen
{
    enum bethnetSignInCmdID_t : int
    {
        CMD_BETHNET_SIGN_IN_NONE = -1,
        CMD_BETHNET_SIGN_IN_USERNAME = 0,
        CMD_BETHNET_SIGN_IN_PASSWORD = 1,
        CMD_BETHNET_SIGN_IN_VIEW_AGREEMENTS = 2,
        CMD_BETHNET_SIGN_IN_SIGN_IN = 3,
        CMD_BETHNET_SIGN_IN_ACCOUNT_HELP = 4,
        CMD_BETHNET_SIGN_IN_CREATE_ACCOUNT = 5,
        CMD_BETHNET_SIGN_IN_COPY = 6,
        CMD_BETHNET_SIGN_IN_PASTE = 7
    };

    idSWFWidget_List* list; // Offset: 0x190

    idSWFWidget_Button* createAccountButton; // Offset: 0x198

    idProxyPtr < idSWFWidget_Bethnet_SignIn > proxyPtr; // Offset: 0x1A0

    swfPlatform_t swfPlatform; // Offset: 0x1A8

    bool allowChangingUsername; // Offset: 0x1AC

}; // Size: 0x1B0
