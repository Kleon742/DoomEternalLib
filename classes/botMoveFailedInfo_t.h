struct botMoveFailedInfo_t
{
    // when the move failed.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > moveFailTime; // Offset: 0x0

    // the entity, if any, that the bot was moving toward.
    idManagedClassPtr < idEntity > moveEntity; // Offset: 0x8

    // the position, if any, that the bot was moving toward. {{ units = m }}
    idVec3 movePosition; // Offset: 0x28

    // why the bot was moving toward the above entity/position.
    botMoveReason_t moveReason; // Offset: 0x34

    // the reason for the failure.
    botMoveStatus_t moveFailCode; // Offset: 0x38

}; // Size: 0x40
