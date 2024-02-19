struct fkWebNodeMapping_t
{
    // animweb path
    idAnimWebPath webPath; // Offset: 0x0

    // effector to set when this animweb node is entered
    idAtomicString effectorName; // Offset: 0x30

    // automatically clear this effector when leaving web node
    bool autoClear; // Offset: 0x38

    // if true, engage this when blend into node starts
    bool beginOnBlendStart; // Offset: 0x39

    // if true, remove this tracker when blend out of node starts
    bool removeOnBlendStart; // Offset: 0x3A

}; // Size: 0x40
