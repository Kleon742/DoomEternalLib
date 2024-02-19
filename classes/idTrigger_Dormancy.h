struct idTrigger_Dormancy : idTrigger
{
    // min dormancy/awake time
    idTypesafeTime < int , millisecondUnique_t , 1000 > time; // Offset: 0xC90

    // true == entityTargets go into dormancy, false == entity targets come out of dormancy
    bool dormant; // Offset: 0x0

    // toggle on/off activate
    bool toggle; // Offset: 0x0

    // current dormancy state
    bool currDormancy; // Offset: 0x0

}; // Size: 0xC98
