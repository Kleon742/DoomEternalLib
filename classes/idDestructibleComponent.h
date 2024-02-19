struct idDestructibleComponent
{
    // destruction decl describing this item.
    idDeclDestructible* decl; // Offset: 0x0

    // instance Data ( resusable )
    idDestructibleInstance* instance; // Offset: 0x8

    idVec3 ownerOrigin; // Offset: 0x10

    idMat3 ownerAxis; // Offset: 0x1C

    // has the destructible already been activated.
    bool activated; // Offset: 0x40

    // the owner.
    idSpawnId ownerSpawnId; // Offset: 0x44

    // Do stuff when idle for x amount of time.
    idList < idDestructibleIdleCommand_t , TAG_IDLIST , false > idleCommands; // Offset: 0x48

    // How long has it been since we've been acted on.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > idleTimer; // Offset: 0x60

    // Which idle command was last ran.
    int lastCommandRan; // Offset: 0x68

}; // Size: 0x70
