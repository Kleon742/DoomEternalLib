struct idAnimator_GameAnimWeb : idAnimator_AnimWeb
{
    // list of idEventReceivers who will receive web events
    idList < idEventReceiver * , TAG_ANIMWEB , false > eventReceivers; // Offset: 0x870

}; // Size: 0x888
