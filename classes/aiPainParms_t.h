struct aiPainParms_t
{
    // pain reaction to go to
    painType_t mNextPainReaction; // Offset: 0x0

    // name of the animweb subweb
    idAtomicString mNextSubwebName; // Offset: 0x8

    // name of the animweb node
    idAtomicString mPainAnimStateName; // Offset: 0x10

    idAIAnimWebState viaState; // Offset: 0x18

    idAIAnimWebState cycleState; // Offset: 0x48

    // index of the animation in the animweb node
    int mPainAnimIndex; // Offset: 0x78

    // flags
    int mFlags; // Offset: 0x7C

    // who caused the damage
    idEntityPtr_ThreadSafe < const idEntity > mAttacker; // Offset: 0x80

    // what caused the damage (i.e. projectile)
    idEntityPtr_ThreadSafe < const idEntity > mInflictor; // Offset: 0x98

    // direction of damage relative to actor
    damageDirection_t mDamageDirection; // Offset: 0xB0

    // intensity of damage
    damageIntensity_t mDamageIntensity; // Offset: 0xB4

    // parameters for the damage that caused the pain
    idDamageParms mDamageParms; // Offset: 0xB8

    // impulse direction the damage came from
    idVec3 mImpulseDirection; // Offset: 0xB08

    // falter pain anim rate scale
    float mPainFalterRateScale; // Offset: 0xB14

}; // Size: 0xB18
