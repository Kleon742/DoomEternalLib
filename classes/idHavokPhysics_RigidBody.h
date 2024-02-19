struct idHavokPhysics_RigidBody : idHavokPhysics_Base
{
    idHavokCollision* hkCollision; // Offset: 0x208

    bool inWorld; // Offset: 0x210

    idVec3 previousOrigin; // Offset: 0x214

    idSpawnId passSpawn; // Offset: 0x220

    // for colliding with actor sphere trees
    idHavokShapePointer actorClipRadiusShape; // Offset: 0x228

    idHavokQueryId actorClipRadiusQuery; // Offset: 0x230

    idHavokMultiHitQueryId actorClipRadiusQuery_multi; // Offset: 0x238

    float actorClipRadius; // Offset: 0x240

    int actorClipMask; // Offset: 0x244

    int exclusionClipMask; // Offset: 0x248

}; // Size: 0x250
