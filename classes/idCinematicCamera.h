struct idCinematicCamera : idEntityCamera
{
    enum cam_move_t : int
    {
        CAM_MOVE_NONE = 0,
        CAM_MOVE_SPLINE = 1,
        CAM_MOVE_POSITION = 2,
        CAM_MOVE_ENTITY = 3,
        CAM_MOVE_PLAYER = 4
    };

    enum cam_focus_t : int
    {
        CAM_FOCUS_NONE = 0,
        CAM_FOCUS_MOVEPATH = 1,
        CAM_FOCUS_SPLINE = 2,
        CAM_FOCUS_ENTITY = 3,
        CAM_FOCUS_POSITION = 4,
        CAM_FOCUS_PLAYER_VIEW = 5
    };

    enum cam_showhud_t : int
    {
        CAM_SHOWHUD_NULL = 0,
        CAM_SHOWHUD_NO = 1,
        CAM_SHOWHUD_YES = 2
    };

    struct splineCurve_t
    {
        idManagedClassPtr < idSplinePath > splinePath; // Offset: 0x0

        // {{ ___ts = m }}
        idCurve_Spline < idVec3 >* curve; // Offset: 0x20

        float length; // Offset: 0x28

        // {{ units = m }}
        idVec3 lastOrigin; // Offset: 0x2C

    }; // Size: 0x38

    struct splineMove_t
    {
        // spline path that camera will follow
        idManagedClassPtr < idSplinePath > path; // Offset: 0x0

        // distance along spline
        float dist; // Offset: 0x20

        int sc; // Offset: 0x24

    }; // Size: 0x28

    struct trigMovement_t
    {
        // how the camera will move around
        idCinematicCamera::cam_move_t moveType; // Offset: 0x0

        // CAM_MOVE_SPLINE: spline path that camera will follow
        idCinematicCamera::splineMove_t spline; // Offset: 0x8

        // CAM_MOVE_POSITION: world position to move to {{ units = m }}
        idVec3 position; // Offset: 0x30

        // CAM_MOVE_ENTITY: entity to move to
        idManagedClassPtr < idEntity > entity; // Offset: 0x40

        // time it takes to complete this movement (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > moveTime; // Offset: 0x60

        // time to transition view to new movement type (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > transTime; // Offset: 0x64

        // time to get to full speed from start (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > easeInTime; // Offset: 0x68

        // time to start slowing down before end (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > easeOutTime; // Offset: 0x6C

        // previous movement is stopped for transition
        bool haltPrevMove; // Offset: 0x70

        // time this movement was started
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTimeOfs; // Offset: 0x78

        // current origin {{ units = m }}
        idVec3 viewOrigin; // Offset: 0x80

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > totalMoveTime; // Offset: 0x90

    }; // Size: 0x98

    struct trigFocus_t
    {
        // what the camera will focus on
        idCinematicCamera::cam_focus_t focusType; // Offset: 0x0

        // FOCUS_SPLINE: spline to focus on
        idCinematicCamera::splineMove_t spline; // Offset: 0x8

        // FOCUS_SPLINE: time to move along spline (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > splineTime; // Offset: 0x30

        // FOCUS_SPLINE: time offset (into future) to start focus (ie: doesn't have to start focus at beginning of spline)
        idTypesafeTime < float , secondUnique_t , 1 > splineTimeOfs; // Offset: 0x34

        // FOCUS_ENTITY: entity to focus on
        idManagedClassPtr < idEntity > entity; // Offset: 0x38

        // FOCUS_POSITION: world position to focus on {{ units = m }}
        idVec3 position; // Offset: 0x58

        // FOCUS_MOVEPATH: adjustment from move path
        idAngles pathAdjust; // Offset: 0x64

        // explicit offset from the resulting focus position {{ units = m }}
        idVec3 focusOffset; // Offset: 0x70

        // time to get to full speed from start (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > easeInTime; // Offset: 0x7C

        // time to start slowing down before end (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > easeOutTime; // Offset: 0x80

        // time to transition view to new focus type (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > transTime; // Offset: 0x84

        // time this focus was started
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTimeOfs; // Offset: 0x88

        // current axis
        idMat3 viewAxis; // Offset: 0x90

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > totalFocusTime; // Offset: 0xB8

    }; // Size: 0xC0

    struct trigFade_t
    {
        // color to fade to
        idColor color; // Offset: 0x0

        // time to transition this fade (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > transTime; // Offset: 0x10

        // current timeScale affects fade rate
        bool timeScaleFade; // Offset: 0x14

        // time to activate the fade?
        bool activate; // Offset: 0x15

    }; // Size: 0x18

    struct trigTimeScale_t
    {
        // time adjust by this scale
        float scale; // Offset: 0x0

        // time to transition to this scale (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > transTime; // Offset: 0x4

        // time this scale change occurred
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTimeOfs; // Offset: 0x8

    }; // Size: 0x10

    struct trigFovZoom_t
    {
        // angle of horizontal fov
        float angle; // Offset: 0x0

        // time to transition to this fov (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > transTime; // Offset: 0x4

        // time this fov change occurred
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTimeOfs; // Offset: 0x8

    }; // Size: 0x10

    struct trigActivateEnt_t
    {
        // activate entities
        idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > entity; // Offset: 0x0

    }; // Size: 0x18

    struct trigSounds_t
    {
        // activate sounds
        idList < const idSoundEvent * , TAG_IDLIST , false > sound; // Offset: 0x0

        // activate voiceovers
        idDeclVoiceOver* voiceOver; // Offset: 0x18

    }; // Size: 0x20

    struct trigDof_t
    {
        // blur scale
        float blurStart; // Offset: 0x0

        // blur start
        float blurScale; // Offset: 0x4

        // time to transition to this dof
        idTypesafeTime < float , secondUnique_t , 1 > transTime; // Offset: 0x8

        // goal dof values
        idVec3 vec; // Offset: 0xC

        // time this dof started
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTimeOfs; // Offset: 0x18

    }; // Size: 0x20

    struct trigRenderParms_t
    {
        // set fog scale
        float fogScale; // Offset: 0x0

        // set fog color
        idColor fogColor; // Offset: 0x4

        // transition time
        idTypesafeTime < float , secondUnique_t , 1 > transTime; // Offset: 0x14

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTimeOfs; // Offset: 0x18

    }; // Size: 0x20

    struct trigShakeView_t
    {
        // shake power
        float shakeVolume; // Offset: 0x0

        // activate view shake
        bool activate; // Offset: 0x4

    }; // Size: 0x8

    struct trigMisc_t
    {
        // stop playing cinematic
        bool endCinematic; // Offset: 0x0

        // send a notification to the gui
        bool notifyGUI; // Offset: 0x1

        // suspend the camera. Can only be unsuspend from a gui or activate event.
        bool suspendCamera; // Offset: 0x2

        // should we show the player hud
        idCinematicCamera::cam_showhud_t showHud; // Offset: 0x4

        // gui to render
        idPlayer::playerGuis_t playerGui; // Offset: 0x8

    }; // Size: 0xC

    struct trigger_t
    {
        // what this trigger does
        idStr title; // Offset: 0x0

        // time to activate trigger (in secs)
        idTypesafeTime < float , secondUnique_t , 1 > time; // Offset: 0x30

        // how the camera moves around
        idCinematicCamera::trigMovement_t movement; // Offset: 0x38

        // what the camera focuses on
        idCinematicCamera::trigFocus_t focus; // Offset: 0xD0

        // fade the view
        idCinematicCamera::trigFade_t fade; // Offset: 0x190

        // change the cinematic speed
        idCinematicCamera::trigTimeScale_t timeScale; // Offset: 0x1A8

        // change the field of view
        idCinematicCamera::trigFovZoom_t fovZoom; // Offset: 0x1B8

        // activate an entity
        idCinematicCamera::trigActivateEnt_t activate; // Offset: 0x1C8

        // activate sounds
        idCinematicCamera::trigSounds_t sounds; // Offset: 0x1E0

        // change depth of field
        idCinematicCamera::trigDof_t depthOfField; // Offset: 0x200

        // shake the view
        idCinematicCamera::trigShakeView_t shakeView; // Offset: 0x220

        // set render parms
        idCinematicCamera::trigRenderParms_t renderParms; // Offset: 0x228

        // miscellaneous stuff..
        idCinematicCamera::trigMisc_t misc; // Offset: 0x248

    }; // Size: 0x258

    struct state_t
    {
        // how the camera moves around
        idCinematicCamera::trigMovement_t movement; // Offset: 0x0

        // what the camera focuses on
        idCinematicCamera::trigFocus_t focus; // Offset: 0x98

        // fade the view
        idCinematicCamera::trigFade_t fade; // Offset: 0x158

        // change the cinematic speed
        idCinematicCamera::trigTimeScale_t timeScale; // Offset: 0x170

        // change the field of view
        idCinematicCamera::trigFovZoom_t fovZoom; // Offset: 0x180

        // change depth of field
        idCinematicCamera::trigDof_t depthOfField; // Offset: 0x190

        // shake the view
        idCinematicCamera::trigShakeView_t shakeView; // Offset: 0x1B0

        // set render parms
        idCinematicCamera::trigRenderParms_t renderParms; // Offset: 0x1B8

        // miscellaneous stuff..
        idCinematicCamera::trigMisc_t misc; // Offset: 0x1D8

    }; // Size: 0x1E8

    // timeline triggers
    idList < idCinematicCamera::trigger_t , TAG_IDLIST , false > triggers; // Offset: 0xCA0

    // hide player during cinematic
    bool hidePlayer; // Offset: 0xCB8

    // hide player hands (but not third person model) during cinematic
    bool hidePlayerHands; // Offset: 0xCB9

    // cinematic loops at end
    bool looping; // Offset: 0xCBA

    // if true the camera puts a fade on the player view on return
    bool fadeInOnReturn; // Offset: 0xCBB

    // if true we set the player view angles to the last camera angles on return
    bool setPlayerAnglesOnReturn; // Offset: 0xCBC

    // if true we set the player view position to the last camera position on return
    bool setPlayerPositionOnReturn; // Offset: 0xCBD

    // HACK: if true we actually have this camera effect timescale.
    bool doTimeScale; // Offset: 0xCBE

    // player takes no damage while in this cinematic
    bool playerInvulnerableDuringCine; // Offset: 0xCBF

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0xCC0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0xCC8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > totalTime; // Offset: 0xCD0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTrigTime; // Offset: 0xCD8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTime; // Offset: 0xCE0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastThinkTime; // Offset: 0xCE8

    float timeScale; // Offset: 0xCF0

    // state of player taking damage before cinematic
    bool playerTakesDamageState; // Offset: 0xCF4

    bool suspended; // Offset: 0xCF5

    bool guiNotificationPending; // Offset: 0xCF6

    bool showPlayerHud; // Offset: 0xCF7

    idCinematicCamera::state_t current; // Offset: 0xCF8

    idCinematicCamera::state_t previous; // Offset: 0xEE0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDrawTime; // Offset: 0x10C8

    int currentTrigger; // Offset: 0x10D0

    idPlayer::playerGuis_t playerGui; // Offset: 0x10D4

    // splines and curves (save for reuse)
    idList < idCinematicCamera::splineCurve_t , TAG_IDLIST , false > splines; // Offset: 0x10D8

    // gui handle to display
    idSWF* gui; // Offset: 0x10F0

    // camera view data
    idVec3 cameraDOF; // Offset: 0x10F8

    // {{ units = m }}
    idVec3 cameraPos; // Offset: 0x1104

    idMat3 cameraAxis; // Offset: 0x1110

}; // Size: 0x1138
