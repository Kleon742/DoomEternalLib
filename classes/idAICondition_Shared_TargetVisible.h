struct idAICondition_Shared_TargetVisible : idAICondition
{
    // use current enemy or action target instead of pending list
    bool checkCurrentTarget; // Offset: 0x18

    // only return yes if muzzle is also clear
    bool checkMuzzle; // Offset: 0x19

    // the muzzle type to check
    aiFoci_t muzzleType; // Offset: 0x1C

    // return if we've seen target since this time
    idTypesafeTime < float , secondUnique_t , 1 > secondsInPast; // Offset: 0x20

}; // Size: 0x28
