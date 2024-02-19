struct idJostleSwivel : idJostleAnimated
{
    // the types of damage that active this
    idDamageParms::damageSource_t damageTypesThatActivateJostle; // Offset: 0x1C98

    // bone to swivel about
    idAtomicString swivelBoneName; // Offset: 0x1CA0

    // min velocity {{ units = degrees / s }}
    float minVelocity; // Offset: 0x1CA8

    // max velocity {{ units = degrees / s }}
    float maxVelocity; // Offset: 0x1CAC

    idIndex < short , invalidJointIndex_t , - 1 > swivelBoneJointIndex; // Offset: 0x1CB0

    idQuat swivelBoneOrientation; // Offset: 0x1CB4

    // {{ units = degrees / s }}
    float currentVelocity; // Offset: 0x1CC4

}; // Size: 0x1CC8
