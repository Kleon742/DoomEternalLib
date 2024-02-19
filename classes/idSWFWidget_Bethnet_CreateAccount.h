struct idSWFWidget_Bethnet_CreateAccount : idSWFWidget_BethnetSubScreen
{
    enum bethnetCreateAccountCmdID_t : int
    {
        CMD_BETHNET_CREATE_ACCOUNT_USERNAME = 0,
        CMD_BETHNET_CREATE_ACCOUNT_EMAIL = 1,
        CMD_BETHNET_CREATE_ACCOUNT_VIEW_AGREEMENTS = 2,
        CMD_BETHNET_CREATE_ACCOUNT_MARKETING = 3,
        CMD_BETHNET_CREATE_ACCOUNT_CREATE = 4,
        CMD_BETHNET_CREATE_ACCOUNT_COPY = 5,
        CMD_BETHNET_CREATE_ACCOUNT_PASTE = 6
    };

    enum verifyInputTextState_t : int
    {
        VERIFY_INPUT_TEXT_NONE = 0,
        VERIFY_INPUT_TEXT_LOADING = 1,
        VERIFY_INPUT_TEXT_SUCCESS = 2,
        VERIFY_INPUT_TEXT_ERROR = 3
    };

    idSWFWidget_List* list; // Offset: 0x190

    bool isCreateButtonEnabled; // Offset: 0x198

    idProxyPtr < idSWFWidget_Bethnet_CreateAccount > proxyPtr; // Offset: 0x1A0

    idOption < idBnetMasterIdentity::createAccountData_type > createData; // Offset: 0x1A8

    asyncio::idTaskResultPtr < bool , bnetErrorCodePair_type > usernameAvailableTask; // Offset: 0x298

    asyncio::idTaskResultPtr < bool , bnetErrorCodePair_type > emailAvailableTask; // Offset: 0x2A0

    idStr usernameToCheck; // Offset: 0x2A8

    idStr emailToCheck; // Offset: 0x2D8

    bool validUsername; // Offset: 0x308

    bool validEmail; // Offset: 0x309

    idSWFWidget_Bethnet_CreateAccount::verifyInputTextState_t prevUsernameVerifyState; // Offset: 0x30C

    idStr prevUsernameErrorString; // Offset: 0x310

    idSWFWidget_Bethnet_CreateAccount::verifyInputTextState_t prevEmailVerifyState; // Offset: 0x340

    idStr prevEmailErrorString; // Offset: 0x348

    swfPlatform_t swfPlatform; // Offset: 0x378

    idStr cachedUsernameText; // Offset: 0x380

    idStr cachedEmailText; // Offset: 0x3B0

}; // Size: 0x3E0
