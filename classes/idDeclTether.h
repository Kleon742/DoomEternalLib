struct idDeclTether : idDeclInventory
{
    // ------------------------ Chain ------------------------ the ribbon effect that should play...
    idDeclRibbon2* ribbonEffect; // Offset: 0x3F8

    // the entity def for the beam spline paths
    idDeclEntityDef* beamSplinePathDef; // Offset: 0x400

    // play a sound when throwing out the chain
    idSoundEvent* soundThrow; // Offset: 0x408

    // speed that tether attaches to enemy {{ units = m / s }}
    float tetherSpeed; // Offset: 0x410

    // wait time before ai starts attacking foes
    float windUpTimeSec; // Offset: 0x414

    // total time tether is active
    float tetherAttackTimeSec; // Offset: 0x418

    // seconds added to tether time when tethered AI kills someone
    float deathExtendedTimeSec; // Offset: 0x41C

    // max distance enemy can be to become tethered {{ units = m }}
    float maxTetherDistance; // Offset: 0x420

    // faction to use when entity is tethered
    idAtomicString tetheredFactionName; // Offset: 0x428

    // must keep the button pressed during windup
    bool pressAndHoldToUse; // Offset: 0x430

    // must keep the button pressed while tethering
    bool mustHoldDuringTether; // Offset: 0x431

    // firing weapon breaks control of tethering
    bool firingBreaksControl; // Offset: 0x432

    // which decay type to use (1, 2, or 3) -- for testing
    int acceleratedDecayType; // Offset: 0x434

    // accelerates the decay in attack time
    float acceleratedDecayAmount; // Offset: 0x438

    // melee attacks scaled by this while tethered (fixme: should use upgrade decl)
    float aiDamageScale; // Offset: 0x43C

    // upgrade used to alter AI damage while tethered (non-melee damage)
    idDeclUpgrade* aiDamageUpgrade; // Offset: 0x440

    // sound used while tether is winding up
    idSoundEvent* soundWindingUp; // Offset: 0x448

    // sound used when time is extended for killing someone
    idSoundEvent* soundExtendedTime; // Offset: 0x450

}; // Size: 0x458
