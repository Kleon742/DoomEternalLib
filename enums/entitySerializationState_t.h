enum entitySerializationState_t : int
{
    ESS_NETWORK_SYNCED = 0,
    ESS_WAITING_TO_SYNC = 1,
    ESS_SEND = 2,
    ESS_CLIENT_PREDICTED = 3,
    ESS_NEVER_SEND = 4
};
