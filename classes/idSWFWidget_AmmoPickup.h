struct idSWFWidget_AmmoPickup : idSWFWidget
{
    ammoPickupData_t ammoPickupData; // Offset: 0x180

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x198

    bool isHiding; // Offset: 0x1A0

}; // Size: 0x1A8
