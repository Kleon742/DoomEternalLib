struct interactable_triggerData_t
{
    // if not NULL, will spawn this trigger in and respond to it.
    idDeclEntityDef* triggerDef; // Offset: 0x0

    // Local offset for the triggerDef {{ units = m }}
    idVec3 triggerDefOffset; // Offset: 0x8

    // the trigger used to determine touch on this item for players and AI.
    idManagedClassPtr < idTrigger > instance_Trigger; // Offset: 0x18

    // after player leaves the touch trigger, how many seconds till it will respond again. different actual meaning for each entity
    float retouchDelaySec; // Offset: 0x38

    // Distance player must be away before retouch is possible. {{ units = m }}
    float retouchDistance; // Offset: 0x3C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > touchDelayTime; // Offset: 0x40

    idManagedClassPtr < idEntity > touchingEnt; // Offset: 0x48

}; // Size: 0x68
