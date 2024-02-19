struct idMainMenu_Popup_Bethnet : idMenuElement
{
    enum bethnetCmdId_t : int
    {
        BETHNET_CMD_NONE = -1,
        BETHNET_CMD_BACK = 666,
        BETHNET_CMD_BACK_TO_ROOT = 667,
        BETHNET_CMD_CREATE_ACCOUNT_COMPLETE = 668,
        BETHNET_CMD_SHOW_OFFLINE_MODE_POPUP = 669,
        BETHNET_CMD_PLAY_OFFLINE_CONFIRM = 670,
        BETHNET_CMD_CLOSE_DIALOG = 671
    };

    enum bethnetTaskResultId_t : int
    {
        BETHNET_TASK_RESULT_NONE = -1,
        BETHNET_TASK_RESULT_ERR_ACCOUNT_BANNED = 0,
        BETHNET_TASK_RESULT_ERR_DEVICE_BLOCKED = 1,
        BETHNET_TASK_RESULT_ERR_FIRST_PARTY_LINK_EXISTS = 2,
        BETHNET_TASK_RESULT_ERR_UNKNOWN = 3,
        BETHNET_TASK_RESULT_PERM_ERR_NOT_SIGNED_IN = 4,
        BETHNET_TASK_RESULT_PERM_ERR_SYSTEM_UPDATE_REQUIRED = 5,
        BETHNET_TASK_RESULT_PERM_ERR_APPLICATION_UPDATE_REQUIRED = 6,
        BETHNET_TASK_RESULT_PERM_ERR_UNKNOWN = 7,
        BETHNET_TASK_RESULT_RUNTIME_CONFIG_FAILED = 8,
        BETHNET_TASK_RESULT_INIT_ERR_WAIT_FOR_BNET_FAILED = 9,
        BETHNET_TASK_RESULT_INIT_ERR_ENSURE_CLAIMED_IDENTITY_FAILED = 10,
        BETHNET_TASK_RESULT_INIT_SIGN_IN_COMPLETE = 11,
        BETHNET_TASK_RESULT_ACCOUNT_HAS_UPDATED_LEGAL_DOCS = 12,
        BETHNET_TASK_RESULT_GO_TO_ROOT = 13,
        BETHNET_TASK_RESULT_CREATE_ACCOUNT_ERR_CREATE_DATA_FAILED = 14,
        BETHNET_TASK_RESULT_SIGN_IN_FAILED = 15,
        BETHNET_TASK_RESULT_SIGN_IN_ERR_INCORRECT_USERNAME_PASSWORD = 16,
        BETHNET_TASK_RESULT_LINK_ERR_ACCOUNT_LINK_ALREADY_EXISTS = 17,
        BETHNET_TASK_RESULT_CLAIM_PLAYFAB_IDENT_ERR = 18,
        BETHNET_TASK_RESULT_EXISTING_SESSION_ERR = 19,
        BETHNET_TASK_RESULT_ACCEPT_AND_LINK_ERR = 20,
        BETHNET_TASK_RESULT_ACCEPT_LEGAL_DOCUMENTS_ERR = 21,
        BETHNET_TASK_RESULT_ACCEPT_AND_LINK = 22,
        BETHNET_TASK_RESULT_FORCED_OFFLINE_MODE = 23
    };

    idLocklessWeakPtr < idPlatformIdentityContainer > identContainer; // Offset: 0x100

    idSharedPtr < idBnetMasterIdentity > bnetIdent; // Offset: 0x108

    userHandle_t userHandle; // Offset: 0x110

    idSWFWidget_Bethnet_Dialog* dialog; // Offset: 0x118

    idSWFWidget_Bethnet_SignIn* rootSubScreen; // Offset: 0x120

    idSWFWidget_Bethnet_CreateAccount* createAccountSubScreen; // Offset: 0x128

    idSWFWidget_Bethnet_UpdatedAgreements* legalDocumentsSubScreen; // Offset: 0x130

    idSWFWidget_BethnetSubScreen* activeSubScreen; // Offset: 0x138

    // Async Task Info
    idProxyPtr < idMainMenu_Popup_Bethnet > proxyPtr; // Offset: 0x140

    idMainMenu_Popup_Bethnet::bethnetTaskResultId_t taskResultId; // Offset: 0x148

    bnetDialogInfo_t queuedDialogInfo; // Offset: 0x150

    bool localUserSignedOut; // Offset: 0x1C8

    bool hasRegisteredSocialBroadcasts; // Offset: 0x1C9

    bool allowSigninRecheck; // Offset: 0x1CA

}; // Size: 0x1D0
