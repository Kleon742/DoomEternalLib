struct idTarget_ForceDormancy : idTarget
{
    // true to make the target become dormant
    bool dormant; // Offset: 0xB88

    // how long in milliseconds to force this dormancy state
    idTypesafeTime < int , millisecondUnique_t , 1000 > durationMS; // Offset: 0xB8C

}; // Size: 0xB90
