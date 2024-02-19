struct fakePathFx_t
{
    idStaticList < fakePathParticle_t , 8 , false , TAG_IDLIST > particles; // Offset: 0x0

    idEntityPtr_ThreadSafe < idEntity > phaseFxEnt_entry; // Offset: 0xFD8

    idEntityPtr_ThreadSafe < idEntity > phaseFxEnt_exit; // Offset: 0xFF0

    fakePathFxStage_t stage; // Offset: 0x1008

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeout; // Offset: 0x1010

}; // Size: 0x1018
