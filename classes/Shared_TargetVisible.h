struct Shared_TargetVisible : idAIStateTransition
{
    // use current enemy or action target instead of pending list
    bool checkCurrentTarget; // Offset: 0xF8

    // only return yes if muzzle is also clear
    bool checkMuzzle; // Offset: 0xF9

    // the muzzle type to check
    aiFoci_t muzzleType; // Offset: 0xFC

    // if true, use current sensory visiblity values instead of firing off an anim query
    bool useSimpleCheck; // Offset: 0x100

    // return if we've seen target since this time ( only applies with useSimpleCheck )
    idTypesafeTime < float , secondUnique_t , 1 > secondsInPast; // Offset: 0x104

}; // Size: 0x108
