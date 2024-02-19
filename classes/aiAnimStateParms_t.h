struct aiAnimStateParms_t
{
    idAIAnimWebState selectedNode; // Offset: 0x0

    int selectedIndex; // Offset: 0x30

    // use this for whatever you want, but you better know what you are doing
    frameMoveData_t* frameMoveData; // Offset: 0x38

    idList < idAtomicString , TAG_IDLIST , false >* inputKeys; // Offset: 0x40

}; // Size: 0x48
