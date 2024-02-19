struct idLaserSight
{
    bool initialized; // Offset: 0x0

    bool hidden; // Offset: 0x1

    idLaserBeam laserBeam; // Offset: 0x8

    idLaserEndPoint laserEndPoint; // Offset: 0x28

    idRenderModelBeam* beamEffects; // Offset: 0x40

    idRenderModelDecal* decalEffects; // Offset: 0x48

}; // Size: 0x50
