struct idInputInteraction : idClass
{
    enum idInputType_t : int
    {
        IT_AUTOMATIC = 0,
        IT_INTERACTIVE = 1
    };

    struct inputData_t
    {
        // button (key) to press
        usercmdButton_t mButton; // Offset: 0x0

        // number of button presses
        int mCount; // Offset: 0x8

        // max amount of time (in secs) allowed between button presses (exceed this and player is disconnected)
        float mMaxReleasedTimeSec; // Offset: 0xC

        // amount of time (in secs) to hold button (0 = no specific hold time required)
        float mHoldDurationSec; // Offset: 0x10

    }; // Size: 0x18

    // type of input for this control box
    idInputInteraction::idInputType_t mInputType; // Offset: 0x10

    // button interaction needed to activate control box
    idList < idInputInteraction::inputData_t , TAG_IDLIST , false > mInputData; // Offset: 0x18

    int mInputDataIndex; // Offset: 0x30

    int mCount; // Offset: 0x34

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > mButtonDownTime; // Offset: 0x38

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > mButtonReleasedTime; // Offset: 0x40

    bool mWaitUntilButtonReleased; // Offset: 0x48

    bool mActive; // Offset: 0x49

    idManagedClassPtr < idEntity > mActivator; // Offset: 0x50

    usercmdButton_t mPrevButton; // Offset: 0x70

    bool mSequenceSuccessful; // Offset: 0x78

}; // Size: 0x80
