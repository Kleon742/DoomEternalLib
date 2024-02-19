struct idTarget_RandomImpulse : idTarget
{
    bool isActive; // Offset: 0xB88

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextImpulseTime; // Offset: 0xB90

    // physics object. always check vs NULL before using
    idPhysics_DynamicBase* physicsObj; // Offset: 0xB98

    tagData_t tagData; // Offset: 0xBA0

    // impulse THIS object
    bool impulseSelf; // Offset: 0xBC0

    // impulse the targeted entities
    bool impulseTarget; // Offset: 0xBC1

    // list of joints to impulse
    idStr tagName; // Offset: 0xBC8

    // start active?
    bool startActive; // Offset: 0xBF8

    // min impulse amount {{ units = kg * m / s }}
    float minImpulse; // Offset: 0xBFC

    // max impulse amount {{ units = kg * m / s }}
    float maxImpulse; // Offset: 0xC00

    // min time (in sec) to trigger an impulse
    float minImpulseTimeSec; // Offset: 0xC04

    // max time (in sec) to trigger an impulse
    float maxImpulseTimeSec; // Offset: 0xC08

    // physical attributes of the prop.
    idDeclProp_PhysicsAttribs* physicsAttributes; // Offset: 0xC10

}; // Size: 0xC18
