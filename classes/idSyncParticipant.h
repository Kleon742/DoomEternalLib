struct idSyncParticipant
{
    // the already allocated entity to use as the participant in this slot
    idManagedClassPtr < idAnimatedEntity > instance; // Offset: 0x0

    // entity def to spawn and use as participant
    idDeclEntityDef* entityDef; // Offset: 0x20

    // joint to attach this participant
    idAtomicString attachJointName; // Offset: 0x28

    // current target of this participant, used to direct actions towards an interacted entity
    idManagedClassPtr < idAnimatedEntity > target; // Offset: 0x30

    // slave a particular inventory decl
    idDeclWeapon* equipWeapon; // Offset: 0x50

    // this is valid only if this weapon is equipped
    idDeclWeaponRef requiresEquippedWeapon; // Offset: 0x58

    // the required weapon needs ammo to pass the required equipped weapon check
    bool requiredEquipWepAmmoCheck; // Offset: 0x60

    // this is valid only if this weapon is NOT equipped
    idDeclWeaponRef restrictedEquippedWeapon; // Offset: 0x68

    // the restricted weapon needs ammo to pass the restricted equipped weapon check
    bool restrictedEquipWepAmmoCheck; // Offset: 0x70

    // if a custom skin needs to be set, match it to the one on this item
    idDeclInventoryRef customSkinItem; // Offset: 0x78

    // if copying a custom skin, also attempt to copy custom materials.
    bool copyCustomMaterialWithSkin; // Offset: 0x80

    // what conditions should the entity be spawned when the sync starts
    idSyncEntity::spawnAction_t spawnAction; // Offset: 0x84

    // what conditions should the entity be shown when the sync starts
    idSyncEntity::showAction_t showAction; // Offset: 0x88

    // how/when to attach this participant to the sync
    idSyncEntity::attachAction_t attachAction; // Offset: 0x8C

    // what to do for this participant when the sync is complete
    idSyncEntity::finishAction_t finishAction; // Offset: 0x90

    // clear the instance when finished
    bool clearWhenFinished; // Offset: 0x94

    // some participants should not be released
    bool releaseOnForcedPlayerDeath; // Offset: 0x95

    // disable adaptive tick while this participant is active
    bool disableAdaptiveTick; // Offset: 0x96

    // which anim set to use for this participant.
    idAtomicString animSetName; // Offset: 0x98

    // whether this is an instigator or a target.
    idSyncEntity::participantType_t type; // Offset: 0xA0

    // index of participant to lerp through delta correction with (the delta of the other participant will be applied to this) - The index must be < the index of this participant
    int participantToLerpWith; // Offset: 0xA4

    // Does this copy the gore from the target.
    bool copyTargetGore; // Offset: 0xA8

    // Do we drop fat loot from this entity.
    bool spawnFatLootFromEnt; // Offset: 0xA9

    // Do we move the FX from the original entity to the stunt double on spawn, or with an anim event later?
    bool moveFXOnSpawn; // Offset: 0xAA

    idIndex < short , invalidJointIndex_t , - 1 > attachJoint; // Offset: 0xAC

    idDeclMD6* spawnedMd6Decl; // Offset: 0xB0

}; // Size: 0xB8
