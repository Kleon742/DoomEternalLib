struct idSWFWidget_Secrets : idSWFWidget
{
    enum secretState_t : int
    {
        SECRET_STATE_INVALID = -1,
        SECRET_STATE_DEFAULT = 0,
        SECRET_STATE_FOUND = 1
    };

    idArray < int , 12 > secretStates; // Offset: 0x180

}; // Size: 0x1B0
