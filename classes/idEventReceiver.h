struct idEventReceiver : idManagedClass
{
    // EventReceivers that are listening to us
    idList < idEventReceiver * , TAG_IDLIST , false >* listenerList; // Offset: 0x28

    // EventReceviers that we are listening to (needed for cleanup on destruction)
    idList < idEventReceiver * , TAG_IDLIST , false >* listeningToList; // Offset: 0x30

}; // Size: 0x38
