struct idAIAttackParms
{
    // type of the attack, used to select the correct array in the attack decl
    aiAttackType_t mAttackType; // Offset: 0x0

    // index of the selected attack in the attack decl
    int mAttackIndex; // Offset: 0x4

    // target of the attack (in case our enemy switches during the attack)
    idEntityPtr_ThreadSafe < idEntity > mTarget; // Offset: 0x8

    // some systems configure the animation command themselves
    bool mActionConfiguredAlready; // Offset: 0x20

}; // Size: 0x28
