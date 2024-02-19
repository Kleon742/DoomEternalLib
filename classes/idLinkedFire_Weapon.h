struct idLinkedFire_Weapon : idWeapon
{
    struct idLinkedFireWeaponSyncData
    {
        // position our linked (child) weapon fired at on the locally controlled machine {{ units = m }}
        idVec3 linkedFirePos; // Offset: 0x0

        // only valid to query once position has been updated
        bool validToQuery; // Offset: 0xC

    }; // Size: 0x10

    // our network data specific to this weapon
    idLinkedFire_Weapon::idLinkedFireWeaponSyncData linkedFireWeaponSyncData; // Offset: 0x3BA0

    // The linked weapon that fires when this one does. Can keep linking them, but don't make a loop!
    idManagedClassPtr < idWeapon > linkedWeapon; // Offset: 0x3BB0

}; // Size: 0x3BD0
