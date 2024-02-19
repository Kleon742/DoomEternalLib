struct overrideGoreProperties_t
{
    // use this override when game code wants this override string, E.G. "frozen"
    idAtomicString overrideKey; // Offset: 0x0

    // controls how matches are made and what this override can do
    overrideGorePropertyFlags_t flags; // Offset: 0x8

    // any wounds use only this destructible
    idDeclDestructible* destructible; // Offset: 0x10

}; // Size: 0x18
