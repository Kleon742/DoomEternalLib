struct idHavokPhysics_DefaultStatic : idHavokPhysics_Base
{
    // The exact position the physics object will take after update if we don't have a body
    idVec3 futureOriginExact; // Offset: 0x208

    idMat3 futureAxisExact; // Offset: 0x214

    bool triggerBody; // Offset: 0x238

    bool skipFuture; // Offset: 0x239

}; // Size: 0x240
