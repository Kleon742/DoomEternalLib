struct idSlowMotionCamera : idEntityCamera
{
    idDeclCameraTrigger* triggerGroup; // Offset: 0xCA0

    // actual triggers used in camera
    idList < idDeclCameraTrigger::idCameraTriggerParms , TAG_IDLIST , false > triggers; // Offset: 0xCA8

    // hide player
    bool hidePlayer; // Offset: 0xCC0

    // hide player hands (but not third person model)
    bool hidePlayerHands; // Offset: 0xCC1

    // if true the camera puts a fade on the player view on return
    bool fadeInOnReturn; // Offset: 0xCC2

    // if true we set the player view angles to the last camera angles on return
    bool setPlayerAnglesOnReturn; // Offset: 0xCC3

    // if true we set the player view position to the last camera position on return
    bool setPlayerPositionOnReturn; // Offset: 0xCC4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0xCC8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0xCD0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > totalTime; // Offset: 0xCD8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTime; // Offset: 0xCE0

    float timeScale; // Offset: 0xCE8

    bool active; // Offset: 0xCEC

    bool suspended; // Offset: 0xCED

    bool guiNotificationPending; // Offset: 0xCEE

    bool showPlayerHud; // Offset: 0xCEF

    idDeclCameraTrigger::idCameraTriggerState current; // Offset: 0xCF0

    idDeclCameraTrigger::idCameraTriggerState previous; // Offset: 0xF10

    int currentTrigger; // Offset: 0x1130

    // splines and curves (save for reuse)
    idList < idDeclCameraTrigger::idSplineCurve , TAG_IDLIST , false > splines; // Offset: 0x1138

    idPlayer* activatingPlayer; // Offset: 0x1150

    // gui handle to display
    idSWF* gui; // Offset: 0x1158

}; // Size: 0x1160
