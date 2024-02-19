struct idProp_WeaponPickup : idProp_Moveable
{
    // get the weapon associated with this pickup channel animator for altering the weapon prop appearances
    idAnimator_Channel animator; // Offset: 0x2540

    // number of rounds to force into the clip to start, or -1 to ignore
    int forceAmmoInClip; // Offset: 0x2650

}; // Size: 0x2658
