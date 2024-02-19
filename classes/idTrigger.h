struct idTrigger : idBloatedEntity
{
    // Seconds to wait after being triggered before triggering again
    float wait; // Offset: 0xB88

    // Additional seconds added to the wait value with each trigger. This is cumulative.
    float waitDelta; // Offset: 0xB8C

    // Minimum seconds the wait period can become if using waitDelta
    float waitMin; // Offset: 0xB90

    // Maximum seconds the wait period can become if using waitDelta
    float waitMax; // Offset: 0xB94

    // How long to wait after being triggered before activating targets
    float delay; // Offset: 0xB98

    // When set, only triggers its targets once
    bool triggerOnce; // Offset: 0xB9C

    // if triggerOnce = true, do not remove the entity after triggering once
    bool keepAfterTriggerOnce; // Offset: 0xB9D

    // When set, trigger must be triggered before it will work. This will still trigger even if onEnter or onExit are not set. It just means you can stand over the trigger and it will repeat the effect
    bool triggerFirst; // Offset: 0xB9E

    // When set, only triggers when entity has entered the trigger
    bool triggerOnEnter; // Offset: 0xB9F

    // When set, only triggers when entity has exited the trigger
    bool triggerOnExit; // Offset: 0xBA0

    // When true, when this trigger activates it will also activate locally on all other clients. Only needed when the entities being activated are not networked themselves.
    bool triggerForAllClients; // Offset: 0xBA1

    // Name of script function to call when activated. function definition must be defined as "void funcname( entity activatedEntity, entity activator )"
    idStr call; // Offset: 0xBA8

    // User-defined string data
    idStr userData; // Offset: 0xBD8

    // Specific AI, Prop, or Projectile that can activate the trigger; if set, nothing else can activate trigger. Check that the entity set canActivateTriggers (not all entities can do this).
    idManagedClassPtr < idEntity > entityCanActivate; // Offset: 0xC08

    // the type of entity that can activate this trigger
    idDeclEntityDef* typeCanActivate; // Offset: 0xC28

    // When set, player (on foot) can activate trigger
    bool playerCanActivate; // Offset: 0xC30

    // When set, player bots can activate trigger
    bool botCanActivate; // Offset: 0xC31

    // When set, only the local player (excluding bots!) can trigger this trigger. Does not sync on the server.
    bool onlyLocalPlayerCanActivate; // Offset: 0xC32

    // When set onlyLocalPlayerCanActivate will be ignored if the local player is spectating the target
    bool localPlayerSpectatorsCanActivate; // Offset: 0xC33

    // When Set, any demon players can activate.
    bool demonPlayerCanActivate; // Offset: 0xC34

    // When true, can be activated on client
    bool clientCanActivate; // Offset: 0xC35

    // When set, any ai can activate trigger
    bool aiCanActivate; // Offset: 0xC36

    // when set only AIs of that type can activate trigger
    aiMonsterType_t aiMonsterType; // Offset: 0xC38

    // When cleared, dead ai will nolonger activate trigger
    bool deadAiCanActivate; // Offset: 0xC40

    // when set, any turret can activate trigger
    bool turretCanActivate; // Offset: 0xC41

    // Allow the trigger to use cylinder clip
    bool useCylinder; // Offset: 0xC42

    // Upper boundary of collision cylinder {{ units = m }}
    float ceilingHeight; // Offset: 0xC44

    // Lower boundary of collision cylinder {{ units = m }}
    float floorHeight; // Offset: 0xC48

    // Radius of collision cylinder {{ units = m }}
    float radius; // Offset: 0xC4C

    // __edit progressFlags_tprogressFlags; Restore the state of the trigger when loading checkpoints and save games. The trigger will be removed rather than activated. should player exit this trigger after teleport (should be true for most volumes, especially lethal ones)
    bool exitAfterTeleport; // Offset: 0xC50

    // will this trigger do something when it is untouched?
    bool deactivateOnExit; // Offset: 0xC51

    // ** player MUST be the activator for this to work ** --- forces player to disconnect from wall climb when this trigger is activated.
    bool disconnectPlayerFromWallClimbOnActivate; // Offset: 0xC52

    // Disables player's ability to attach to walls for this amount of time
    idTypesafeTime < int , millisecondUnique_t , 1000 > disableWallClimbTimeMS; // Offset: 0xC54

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextTriggerTime; // Offset: 0xC58

    // any extra contents this trigger might have, normally 0
    int extraContents; // Offset: 0xC60

    idSysMutex unTouchMutex; // Offset: 0xC68

}; // Size: 0xC90
