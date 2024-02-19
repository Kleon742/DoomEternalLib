struct moveCommands_t
{
    // list of entities to activate on arrival
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > activateOnArrival; // Offset: 0x0

    // list of entities to activate when we start to move towards destination
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > activateOnMove; // Offset: 0x18

    // list of entities to toggle their hidden state on arrival
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > toggleVisibilityOnArrival; // Offset: 0x30

    // list of entities to toggle their hidden state on movement
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > toggleVisibilityOnMove; // Offset: 0x48

    // the position/direction we want to go to, based on an entity ( entity )
    idManagedClassPtr < idEntity > destinationEntity; // Offset: 0x60

    // calculate the destination as an offset of the last position we were in ( only valid if destinationEntity is invalid ) {{ units = m }}
    idVec3 offsetDestination; // Offset: 0x80

    // calculate the final orientation as an offset of the last position we were in ( only valid if destinationEntity is invalid )
    idAngles offsetOrientation; // Offset: 0x8C

    // the time to reach the destinationEntity or offsetDestination, ( seconds )
    float timeSec; // Offset: 0x98

    // speed at which we wish to move at if we do not have a valid timeSec value to use {{ units = m / s }}
    float speedSec; // Offset: 0x9C

    // the time to reach full speed ( seconds )
    float accelerationTimeSec; // Offset: 0xA0

    // the time to reach zero speed from full speed ( seconds )
    float decelerationTimeSec; // Offset: 0xA4

    // the delay time in after arrival before we can move to the next command ( seconds )
    float delaySec; // Offset: 0xA8

    // one-shot sound to play on move start
    idSoundEvent* soundOnMove; // Offset: 0xB0

    // one-shot sound to play on arrival / move stop
    idSoundEvent* soundOnArrive; // Offset: 0xB8

    // looping sound to play while moving
    idSoundEvent* soundWhileMoving; // Offset: 0xC0

    // if true the system does not automatically go to the next command it waits for an activate message
    bool waitForNextActivate; // Offset: 0xC8

    // if true we only rotate once
    bool rotateOnce; // Offset: 0xC9

    // if true this command will teleport to the spawn position and orientation, ( only valid if destinationEntity and offsets are invalid )
    bool ResetToSpawnLocation; // Offset: 0xCA

    // signal if this command came from a spline conversion
    bool isSplineNode; // Offset: 0xCB

    // generic position in world space, used for spline node calculation
    idVec3 position; // Offset: 0xCC

    // generic orientation in world space, used for spline node calculation
    idQuat orientation; // Offset: 0xD8

    // sound events to play
    splineMoverModifier_t::splineMoverModifierSound_t sound; // Offset: 0xE8

    // targets to activate from the modifiers
    splineMoverModifier_t::splineMoverModifierTargets_t targets; // Offset: 0x118

    // oscillation to execute
    splineMoverModifier_t::splineMoverModifierOscillation_t oscl; // Offset: 0x130

    // CHANGES DEFAULT PUSH BEHAVIOR: Enables this mover being able to PUSH an object during movement. (IF YOU DON'T KNOW WHAT THIS IS FOR, IGNORE THIS)
    bool enablePush; // Offset: 0x180

    // CHANGES DEFAULT PUSH BEHAVIOR: Disables this mover being able to PUSH an object during movement. (IF YOU DON'T KNOW WHAT THIS IS FOR, IGNORE THIS)
    bool disablePush; // Offset: 0x181

}; // Size: 0x188
