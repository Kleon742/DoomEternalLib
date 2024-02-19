struct idIOS_MeteorCrater : idBloatedEntity
{
    enum eIOS_CraterState_t : int
    {
        IOS_CRATER_IDLE = 0,
        IOS_CRATER_LANDED = 1,
        IOS_CRATER_SPAWNING_AI = 2,
        IOS_CRATER_FLAME_PILLAR = 3
    };

    // fx
    idDeclFX* craterFxDecl; // Offset: 0xB88

    idIOS_MeteorCrater::eIOS_CraterState_t currentState; // Offset: 0xB90

    // Spline used for the meteor as it flies
    splineDefinition_t meteorTravelSplineDef; // Offset: 0xB98

    // Projectil entity decl
    idDeclEntityDef* meteorProjectileDecl; // Offset: 0xBB8

    // The generated path for the projectile
    idCurve_CatmullRomSpline < idVec3 > projectileSpline; // Offset: 0xBC0

    idVec3 startPos; // Offset: 0xC20

    idVec3 endPos; // Offset: 0xC2C

}; // Size: 0xC38
