struct idHUDMenu_DemonEndofInvasion : idHUDElement
{
    enum endOfInvasionMenuState_t : int
    {
        END_OF_INVASION_MENU_STATE_INVALID = -1,
        END_OF_INVASION_MENU_STATE_INITIAL_SHOW = 0,
        END_OF_INVASION_MENU_STATE_SHOW_SUMMARY = 1,
        END_OF_INVASION_MENU_STATE_SHOW_SCORE_BREAKDOWN = 2,
        END_OF_INVASION_MENU_STATE_FINAL_SHOW = 3
    };

    struct statInfo_t
    {
        gameStat_t statID; // Offset: 0x0

        int valueInt; // Offset: 0x4

        float valueFloat; // Offset: 0x8

    }; // Size: 0xC

    struct endOfInvasionData_t
    {
        bool wonInvasion; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > forceLeaveTime; // Offset: 0x8

        float invasionDuration; // Offset: 0x10

        idList < idHUDMenu_DemonEndofInvasion::statInfo_t , TAG_IDLIST , false > summaryStats; // Offset: 0x18

        float scoreValues[10]; // Offset: 0x30

    }; // Size: 0x58

    idHUDMenu_DemonEndofInvasion::endOfInvasionMenuState_t state; // Offset: 0xF8

    idHUDMenu_DemonEndofInvasion::endOfInvasionMenuState_t nextState; // Offset: 0xFC

    idSWFWidget_Button* leaveButton; // Offset: 0x100

    idHUDMenu_DemonEndofInvasion::endOfInvasionData_t endOfInvasionData; // Offset: 0x108

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stateEndTime; // Offset: 0x160

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > scoreEndTime; // Offset: 0x168

    int currentScoreIndex; // Offset: 0x170

    float currentYPos; // Offset: 0x174

    swfPlatform_t currentSWFPlatform; // Offset: 0x178

}; // Size: 0x180
