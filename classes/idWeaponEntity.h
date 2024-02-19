struct idWeaponEntity : idAnimatedEntity
{
    // This needs to be the size of the largest weapon server sync struct.
    idDeclWeapon* weaponDecl; // Offset: 0x1B48

    bool weaponDeclDirty; // Offset: 0x1B50

    idManagedClassPtr < idEntity > ownerEntity; // Offset: 0x1B58

    idList < idFireParms , TAG_IDLIST , false > pendingFireParms; // Offset: 0x1B78

    int lastWeaponID; // Offset: 0x1B90

    int presentableWeaponID; // Offset: 0x1B94

    bool inCustomJob; // Offset: 0x1B98

    bool createdClientWeapon; // Offset: 0x1B99

    idManagedClassPtr < idWeapon > clientWeapon; // Offset: 0x1BA0

    bool changedClientWeaponMods; // Offset: 0x1BC0

    idDeclAmmo* ammoDecl; // Offset: 0x1BC8

    idLaserSight laserSight; // Offset: 0x1BD0

    short fireAngles[2]; // Offset: 0x1C20

    // {{ units = m }}
    float firePos[3]; // Offset: 0x1C24

    float addSpread; // Offset: 0x1C30

    short fireSeed; // Offset: 0x1C34

    equipSlot_t equipSlot; // Offset: 0x1C38

    // time stamp of fire for non local weapons
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > netFireTimestampBuffer[16]; // Offset: 0x1C40

    int netPrimaryFireIndex; // Offset: 0x1CC0

    int netPrimaryFireIndexLastSerialize; // Offset: 0x1CC4

    int netSecondaryFireIndex; // Offset: 0x1CC8

    int netSecondaryFireIndexLastSerialize; // Offset: 0x1CCC

    // needed for correct simulation of ancillary projectiles created from fire events through weapon def over the network ( i.e. projectilesAtShotCount )
    int netTriggerHeldFireCount; // Offset: 0x1CD0

    idManagedClassPtr < idEntity > netClientTargetEnt; // Offset: 0x1CD8

    short netClientTargetJointIndex; // Offset: 0x1CF8

    float clientWeaponChargeForFireEvent; // Offset: 0x1CFC

    idManagedClassPtr < idEntity > hitByEntity; // Offset: 0x1D00

    // aiming joints used for turret-like rotation
    idIndex < short , invalidJointIndex_t , - 1 > rollJointIndex; // Offset: 0x1D20

    float rollDelta; // Offset: 0x1D24

    float rollAngle; // Offset: 0x1D28

    // {{ units = m }}
    idVec3 spinJointOrigin; // Offset: 0x1D2C

    idMat3 spinJointMat; // Offset: 0x1D38

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastFireTime; // Offset: 0x1D60

    // network info buffer for serialized data used for serializing weapon specific data from the localOwner->server->clients.
    unsigned char weaponNetBytes[28]; // Offset: 0x1D68

    // buffer for serialized data used for serializing weapon specific data from the server->clients.
    unsigned char weaponServerNetBytes[8]; // Offset: 0x1D84

    // only true when the first client to server snap has filled out the buffer above. Otherwise, debug reads/writes in idSerializer will be off because it's reading NULL data.
    bool hasReadClientToServerSnap; // Offset: 0x1D8C

    // Initialize and support a paused additive animator that other code can adjust.
    bool usePausedAnimator; // Offset: 0x1D8D

    // In the absence of blend params specifying differently, what blend duration should I use for the paused animator?
    idTypesafeTime < int , millisecondUnique_t , 1000 > defaultPausedAnimatorBlendDurationMS; // Offset: 0x1D90

    // Initialize and support an animator for playing weapon state animations in third person view
    bool useWeaponStateAnimator; // Offset: 0x1D94

    // use 3p
    bool useThirdPersonModel; // Offset: 0x1D95

    // for launcher
    idDeclInventory* equipmentInventoryDecl; // Offset: 0x1D98

    // for procedural anims
    idAnimator_Paused pausedAnimator; // Offset: 0x1DA0

    // for playing weapon state animations in third person view
    idAnimator_Channel weaponStateAnimator; // Offset: 0x1DF8

    // buffer for client weapon serialization
    idHeapArray < unsigned char , TAG_HEAP_ARRAY > clientWeaponSerializationData; // Offset: 0x1F08

    // if true, use remote player's net fire pos for 3p weapon ent projectiles
    bool useRemote3pFirePos; // Offset: 0x1F20

}; // Size: 0x1F28
