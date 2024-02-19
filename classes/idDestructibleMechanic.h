struct idDestructibleMechanic : idClass
{
    // the Instance that i'm attached to.
    idDestructibleInstance* instance; // Offset: 0x10

    // decl that i use.
    idDeclDestructible* decl; // Offset: 0x18

    // has this mechanic been enabled.
    bool enabled; // Offset: 0x20

    // queued activations waiting for bodies to be added to world.
    idList < idDestructibleActivationData_t , TAG_IDLIST , false > activations; // Offset: 0x28

    // Starting Origin of the Destructible.
    idVec3 startOrigin; // Offset: 0x40

    // start axis of the destructible.
    idMat3 startAxis; // Offset: 0x4C

}; // Size: 0x70
