struct idDestructibleInstance
{
    // discrete rendermodel.
    idRenderModelDiscreteAnimation* renderModelDiscrete; // Offset: 0x0

    // the Rigid bodies we created.
    idList < idDestructiblePiece , TAG_GAME , false > physicsBodies; // Offset: 0x8

    idList < bool , TAG_IDLIST , false > impactsCreated; // Offset: 0x20

    // mechanic that we are using.
    idDestructibleMechanic* mechanic; // Offset: 0x38

    // animator that we are associated with.
    idRenderModelSkinned* animator; // Offset: 0x40

    // decl this instance was created from.
    idDeclDestructible* decl; // Offset: 0x48

    // Fx Handle;
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x50

    // when this instance will go away after going inactive.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > removalTime; // Offset: 0x58

    // when this instance will go away after going active.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > removalTimeForced; // Offset: 0x60

    // Sound Object.
    idSoundObject soundObject; // Offset: 0x68

    // Dest spawn id
    idSpawnId destructibleSpawnID; // Offset: 0x78

    bool isActive; // Offset: 0x7C

}; // Size: 0x80
