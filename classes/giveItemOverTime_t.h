struct giveItemOverTime_t
{
    // type of thing to give
    idDeclInventory* decl; // Offset: 0x0

    // amount of ammo to return for this ai type
    int count; // Offset: 0x8

    // percent (0-1) of max count to return for this item type
    float percent; // Offset: 0xC

    // delay before starting give over time
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayMS; // Offset: 0x10

    // duration of give over time
    idTypesafeTime < int , millisecondUnique_t , 1000 > durationMS; // Offset: 0x14

    // true to show a debug bar
    bool debugBar; // Offset: 0x18

    // text to draw on debug bar
    idAtomicString debugBarText; // Offset: 0x20

    // default sound to play when starting a give over time
    idSoundEvent* startSoundDefault; // Offset: 0x28

    // default sound to play when giving a give over time item
    idSoundEvent* giveItemSoundDefault; // Offset: 0x30

    // default sound to play when giving the last give over time item
    idSoundEvent* endSoundDefault; // Offset: 0x38

}; // Size: 0x40
