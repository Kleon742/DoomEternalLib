struct idSWFWidget_ProgressionWheel : idSWFWidget_Wheel
{
    int upgradeSelectionIndex; // Offset: 0x1F8

    // idArray< idSWFWidget_ProgressionWedge *, PROGRESSION_WHEEL_MAX_WEDGES >m_wedges;
    idArray < idHUDEvent_SuitManagerUpdate::suitFamilyInfo_t , 5 > suitInfo; // Offset: 0x200

    bool wedgeSelection; // Offset: 0x368

    bool innerSelection; // Offset: 0x369

    idVec2 lowerBound; // Offset: 0x36C

    idVec2 upperBound; // Offset: 0x374

    SWFWidgetAction_t lastScrollType; // Offset: 0x37C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextScrollTime; // Offset: 0x380

    int currencyCount; // Offset: 0x388

}; // Size: 0x390
