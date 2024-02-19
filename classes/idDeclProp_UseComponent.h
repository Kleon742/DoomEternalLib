struct idDeclProp_UseComponent : idDeclProp_Component
{
    // the md6 model
    idDeclMD6* md6Model; // Offset: 0xD0

    // the static model
    idStr staticModelName; // Offset: 0xD8

    // Increase a stat when used/picked up
    gameStat_t use_statIncrease; // Offset: 0x108

    // if this is a collectible item we need to track it separately
    bool isCollectableType; // Offset: 0x10C

    // If this is a collectible, have it refer to the collectible at this index in the master collectible list.
    int indexIntoMasterCollectibleList; // Offset: 0x110

    // Apply Controller Shake when used.
    bool controllerShake; // Offset: 0x114

    // Apply Controller Shake when used.
    float controllerShake_highMagnitude; // Offset: 0x118

    // Apply Controller Shake when used.
    idTypesafeTime < int , millisecondUnique_t , 1000 > controllerShake_highDuration; // Offset: 0x11C

    // Apply Controller Shake when used.
    float controllerShake_lowMagnitude; // Offset: 0x120

    // Apply Controller Shake when used.
    idTypesafeTime < int , millisecondUnique_t , 1000 > controllerShake_lowDuration; // Offset: 0x124

    // FX condition to trigger when this usable component is picked up
    fxCondition_t pickupEffect; // Offset: 0x128

    // how long a weapon drop should last after being dropped, 0 is forever
    idTypesafeTime < int , millisecondUnique_t , 1000 > weaponDropLifetimeMS; // Offset: 0x12C

}; // Size: 0x130
