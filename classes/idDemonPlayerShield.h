struct idDemonPlayerShield
{
    // fxDecl to play when active
    idDeclFX* fxDecl; // Offset: 0x8

    // handle for global fx manager
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x10

    // effective angle
    float effectiveAngle; // Offset: 0x18

    // max health
    float maxHealth; // Offset: 0x1C

    // can the shield time out
    bool playerDeactivate; // Offset: 0x20

    // lifetime
    idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > lifetime; // Offset: 0x28

    // How long does it take to recharge once timed out or destroyed
    idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > cooldown; // Offset: 0x50

    // sound to play when damage is totally absorbed
    idSoundEvent* absorbSound; // Offset: 0x78

    // sound to play when soul barrier is activated
    idSoundEvent* activationSound; // Offset: 0x80

    // sound to play when soul barrier times out
    idSoundEvent* timeoutSound; // Offset: 0x88

    // sound to play when soul barrier deactivates due to 0 health
    idSoundEvent* destroyedSound; // Offset: 0x90

    // sound to play when shield has been deactivated by player
    idSoundEvent* playerDeactivateSound; // Offset: 0x98

    idManagedClassPtr < idDemonPlayer > owner; // Offset: 0xA0

    bool isActive; // Offset: 0xC0

    float currentHealth; // Offset: 0xC4

    bool timedOut; // Offset: 0xC8

    bool wasDestroyed; // Offset: 0xC9

    bool ignoreServerHealthUntilActive; // Offset: 0xCA

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > deactivationTime; // Offset: 0xD0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > activationTime; // Offset: 0xD8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextActivationTime; // Offset: 0xE0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0xE8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastAbsorbTime; // Offset: 0xF0

}; // Size: 0xF8
