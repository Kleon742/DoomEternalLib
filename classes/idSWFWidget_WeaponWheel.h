struct idSWFWidget_WeaponWheel : idSWFWidget_Wheel
{
    enum inputMode_t : int
    {
        MOUSE = 0,
        BUTTON = 1,
        COUNT = 2
    };

    idVec2 cachedCenterPos; // Offset: 0x1F8

    idSWFWidget_WeaponWheel::inputMode_t activeInputMode; // Offset: 0x200

    idSWFWidget_WheelData::wheelDefinition_t* activeWheelDefinition; // Offset: 0x208

}; // Size: 0x210
