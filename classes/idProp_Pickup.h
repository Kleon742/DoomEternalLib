struct idProp_Pickup : idProp
{
    float angle; // Offset: 0x1B48

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > removeTime; // Offset: 0x1B50

    bool tractored; // Offset: 0x1B58

    // entity that is picking up item
    idManagedClassPtr < idEntity > owner; // Offset: 0x1B60

    float vecFrac; // Offset: 0x1B80

    // icon for pickup notifications
    idMaterial2* pickupIcon; // Offset: 0x1B88

    // name for pickup notifications
    idStrId pickupName; // Offset: 0x1B90

    // sound to play when the object is pickup up
    idSoundEvent* sound_pickup; // Offset: 0x1B98

    // if true, this pickup will magnetize (track) to the person closest to it.
    bool magnetized; // Offset: 0x1BA0

    idHavokPhysics_RigidBody physicsObj; // Offset: 0x1BA8

}; // Size: 0x1DF8
