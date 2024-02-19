struct idShared_ExecuteChildFSM : idAIState
{
    // if true, commit pending action target to active
    bool commitActionTarget; // Offset: 0x130

    idEntityPtr_ThreadSafe < idEntity > objectEntity; // Offset: 0x138

}; // Size: 0x150
