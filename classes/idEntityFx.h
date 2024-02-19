struct idEntityFx : idDynamicEntity
{
    // what color to change particles to
    idColor particleColor; // Offset: 0xCF8

    // true to start off
    bool startOff; // Offset: 0xD08

    // turn off and on with sequential triggerings
    bool cycleTrigger; // Offset: 0xD09

    // delay (in s)
    float actionDelay; // Offset: 0xD0C

    // fx decl
    idDeclFX* fxEffect; // Offset: 0xD10

    // value to scale the 'size' value of all fxActions in the fxEffect given
    float fxSizeScalar; // Offset: 0xD18

    // toggle on if this is ever moving or fxEffect needs Updates
    bool fxNeedsUpdate; // Offset: 0xD1C

    // parent entity, which "owns" this func fx
    idManagedClassPtr < idEntity > parentEntity; // Offset: 0xD20

    // allows any fx particles to cast shadows
    bool fxParticleLightCastShadows; // Offset: 0xD40

    // does this entity respect visibility boxes.
    bool useVisibilityBox; // Offset: 0xD41

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextTriggerTime; // Offset: 0xD48

    bool isFirstThink; // Offset: 0xD50

}; // Size: 0xD58
