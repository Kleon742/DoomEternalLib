struct idSWFWidget_AmmoPickups : idSWFWidget
{
    idList < ammoPickupData_t , TAG_IDLIST , false > queuedAmmoPickups; // Offset: 0x180

    idArray < idSWFWidget_AmmoPickup * , 4 > widgetList; // Offset: 0x198

    idStaticList < int , 4 , false , TAG_IDLIST > displayingWidgets; // Offset: 0x1B8

}; // Size: 0x1E0
