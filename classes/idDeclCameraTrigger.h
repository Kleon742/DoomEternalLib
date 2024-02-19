struct idDeclCameraTrigger : idDeclTypeInfo
{
    enum cam_move_t : int
    {
        CAM_MOVE_NONE = 0,
        CAM_MOVE_SPLINE = 1,
        CAM_MOVE_POSITION = 2,
        CAM_MOVE_ENTITY = 3,
        CAM_MOVE_PLAYER = 4,
        CAM_MOVE_ACTIVATOR = 5,
        CAM_MOVE_ACTIVATOR_POSITION = 6,
        CAM_MOVE_PLAYER_POSITION = 7,
        CAM_MOVE_CIRCLE_ENTITY = 8,
        CAM_MOVE_CIRCLE_PLAYER = 9,
        CAM_MOVE_CIRCLE_ACTIVATOR = 10
    };

    enum cam_focus_t : int
    {
        CAM_FOCUS_NONE = 0,
        CAM_FOCUS_MOVEPATH = 1,
        CAM_FOCUS_SPLINE = 2,
        CAM_FOCUS_ACTIVATOR = 3,
        CAM_FOCUS_ACTIVATOR_POSITION = 4,
        CAM_FOCUS_PLAYER = 5,
        CAM_FOCUS_ENTITY = 6,
        CAM_FOCUS_POSITION = 7
    };

    enum cam_showhud_t : int
    {
        CAM_SHOWHUD_NULL = 0,
        CAM_SHOWHUD_NO = 1,
        CAM_SHOWHUD_YES = 2
    };

    struct idSplineCurve
    {
        idSplinePath* splinePath; // Offset: 0x0

        // {{ ___ts = m }}
        idCurve_Spline < idVec3 >* curve; // Offset: 0x8

        float length; // Offset: 0x10

        // {{ units = m }}
        idVec3 lastOrigin; // Offset: 0x14

    }; // Size: 0x20

    struct idSplineMove
    {
        // spline path that camera will follow
        idSplinePath* path; // Offset: 0x0

        // distance along spline
        float dist; // Offset: 0x8

        int sc; // Offset: 0xC

    }; // Size: 0x10

    struct idTimeLerpHelper
    {
        // [s] time to transition view to new movement type
        idTypesafeTime < float , secondUnique_t , 1 > duration; // Offset: 0x0

        // [s] time to get to full speed from start
        idTypesafeTime < float , secondUnique_t , 1 > easeInTime; // Offset: 0x4

        // [s] time to start slowing down before end
        idTypesafeTime < float , secondUnique_t , 1 > easeOutTime; // Offset: 0x8

        // should this value go back to initial starting point (0..1..0) over the duration of the trigger?
        bool looping; // Offset: 0xC

        // time this movement was started
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTimeOfs; // Offset: 0x10

    }; // Size: 0x18

    struct idTrigMovement
    {
        // how the camera will move around
        idDeclCameraTrigger::cam_move_t moveType; // Offset: 0x0

        // CAM_MOVE_SPLINE: spline path that camera will follow
        idDeclCameraTrigger::idSplineMove spline; // Offset: 0x8

        // CAM_MOVE_POSITION: world position to move to {{ units = m }}
        idVec3 position; // Offset: 0x18

        // CAM_MOVE_ENTITY: entity to move to
        idManagedClassPtr < idEntity > entity; // Offset: 0x28

        // CAM_MOVE_ENTITY: offset from entity {{ units = m }}
        idVec3 entityOffset; // Offset: 0x48

        // scalar offset in the direction from activator to origin (CAM_MOVE_ACTIVATOR_POSITION, CAM_MOVE_ACTIVATOR & CAM_MOVE_ENTITY), positive is beyond the target position {{ units = m }}
        float scalarOffset; // Offset: 0x54

        // timing parms
        idDeclCameraTrigger::idTimeLerpHelper timing; // Offset: 0x58

        // lerping power between frames
        idDeclCameraTrigger::idTimeLerpHelper frameLerp; // Offset: 0x70

        // used to offset the vehicle's view {{ units = m }}
        idVec3 additionalOffset; // Offset: 0x88

        // current origin {{ units = m }}
        idVec3 viewOrigin; // Offset: 0x94

    }; // Size: 0xA0

    struct idTrigFocus
    {
        // what the camera will focus on
        idDeclCameraTrigger::cam_focus_t focusType; // Offset: 0x0

        // FOCUS_SPLINE: spline to focus on
        idDeclCameraTrigger::idSplineMove spline; // Offset: 0x8

        // FOCUS_SPLINE: time to move along spline (in secs)
        float splineTime; // Offset: 0x18

        // FOCUS_ENTITY: entity to focus on
        idManagedClassPtr < idEntity > entity; // Offset: 0x20

        // FOCUS_POSITION: world position to focus on {{ units = m }}
        idVec3 position; // Offset: 0x40

        // FOCUS_MOVEPATH: adjustment from move path
        idAngles pathAdjust; // Offset: 0x4C

        // explicit offset from the resulting focus position {{ units = m }}
        idVec3 focusOffset; // Offset: 0x58

        // __edit idTimeLerpHelpertiming; timing parms lerping power between frames
        idDeclCameraTrigger::idTimeLerpHelper frameLerp; // Offset: 0x68

        // current axis
        idMat3 viewAxis; // Offset: 0x80

        // {{ units = m }}
        idVec3 lastKnownPosition; // Offset: 0xA4

    }; // Size: 0xB0

    struct idTrigFade
    {
        // color to fade to
        idColor color; // Offset: 0x0

        // time to transition this fade
        idTypesafeTime < float , secondUnique_t , 1 > transTime; // Offset: 0x10

        // current timeScale affects fade rate
        bool timeScaleFade; // Offset: 0x14

        // time to activate the fade?
        bool activate; // Offset: 0x15

    }; // Size: 0x18

    struct idTrigTimeScale
    {
        // time adjust by this scale
        float scale; // Offset: 0x0

        // timing parms
        idDeclCameraTrigger::idTimeLerpHelper timing; // Offset: 0x8

        // initial scale when this was triggered so we can get a linear scale
        float initScale; // Offset: 0x20

    }; // Size: 0x28

    struct idTrigFovZoom
    {
        // angle of horizontal fov
        float angle; // Offset: 0x0

        // timing parms
        idDeclCameraTrigger::idTimeLerpHelper timing; // Offset: 0x8

    }; // Size: 0x20

    struct idTrigActivateEnt
    {
        // activate entities
        idList < idStrEntity , TAG_IDLIST , false > entities; // Offset: 0x0

    }; // Size: 0x18

    struct idTrigSounds
    {
        // activate sounds
        idList < const idSoundEvent * , TAG_IDLIST , false > sound; // Offset: 0x0

    }; // Size: 0x18

    struct idTrigDof
    {
        // blur scale
        float blurStart; // Offset: 0x0

        // blur start
        float blurScale; // Offset: 0x4

        // timing parms
        idDeclCameraTrigger::idTimeLerpHelper timing; // Offset: 0x8

        // goal dof values
        idVec3 vec; // Offset: 0x20

    }; // Size: 0x30

    struct idTrigRenderParms
    {
        // set fog scale
        float fogScale; // Offset: 0x0

        // set fog color
        idColor fogColor; // Offset: 0x4

        // timing parms
        idDeclCameraTrigger::idTimeLerpHelper timing; // Offset: 0x18

    }; // Size: 0x30

    struct idTrigShakeView
    {
        // shake power
        float shakeVolume; // Offset: 0x0

        // activate view shake
        bool activate; // Offset: 0x4

    }; // Size: 0x8

    struct idTrigMisc
    {
        // stop playing cinematic
        bool endCinematic; // Offset: 0x0

        // send a notification to the gui
        bool notifyGUI; // Offset: 0x1

        // suspend the camera. Can only be unsuspend from a gui or activate event.
        bool suspendCamera; // Offset: 0x2

        // should we show the player hud
        idDeclCameraTrigger::cam_showhud_t showHud; // Offset: 0x4

    }; // Size: 0x8

    struct idCameraTriggerParms
    {
        // what this trigger does
        idStr title; // Offset: 0x0

        // [s] when from the initial start of the camera should this trigger be activated?
        idTypesafeTime < float , secondUnique_t , 1 > offsetTime; // Offset: 0x30

        // how the camera moves around
        idDeclCameraTrigger::idTrigMovement movement; // Offset: 0x38

        // what the camera focuses on
        idDeclCameraTrigger::idTrigFocus focus; // Offset: 0xD8

        // fade the view
        idDeclCameraTrigger::idTrigFade fade; // Offset: 0x188

        // change the cinematic speed
        idDeclCameraTrigger::idTrigTimeScale timeScale; // Offset: 0x1A0

        // change the field of view
        idDeclCameraTrigger::idTrigFovZoom fovZoom; // Offset: 0x1C8

        // activate an entity
        idDeclCameraTrigger::idTrigActivateEnt activate; // Offset: 0x1E8

        // activate sounds
        idDeclCameraTrigger::idTrigSounds sounds; // Offset: 0x200

        // change depth of field
        idDeclCameraTrigger::idTrigDof depthOfField; // Offset: 0x218

        // shake the view
        idDeclCameraTrigger::idTrigShakeView shakeView; // Offset: 0x248

        // set render parms
        idDeclCameraTrigger::idTrigRenderParms renderParms; // Offset: 0x250

        // miscellaneous stuff..
        idDeclCameraTrigger::idTrigMisc misc; // Offset: 0x280

        bool triggered; // Offset: 0x288

    }; // Size: 0x290

    struct idCameraTriggerState
    {
        // how the camera moves around
        idDeclCameraTrigger::idTrigMovement movement; // Offset: 0x0

        // what the camera focuses on
        idDeclCameraTrigger::idTrigFocus focus; // Offset: 0xA0

        // fade the view
        idDeclCameraTrigger::idTrigFade fade; // Offset: 0x150

        // change the cinematic speed
        idDeclCameraTrigger::idTrigTimeScale timeScale; // Offset: 0x168

        // change the field of view
        idDeclCameraTrigger::idTrigFovZoom fovZoom; // Offset: 0x190

        // change depth of field
        idDeclCameraTrigger::idTrigDof depthOfField; // Offset: 0x1B0

        // shake the view
        idDeclCameraTrigger::idTrigShakeView shakeView; // Offset: 0x1E0

        // set render parms
        idDeclCameraTrigger::idTrigRenderParms renderParms; // Offset: 0x1E8

        // miscellaneous stuff..
        idDeclCameraTrigger::idTrigMisc misc; // Offset: 0x218

    }; // Size: 0x220

    // name of this camera decl.
    idStr cameraDeclName; // Offset: 0x88

    // list of triggers possible
    idList < idDeclCameraTrigger::idCameraTriggerParms , TAG_IDLIST , false > triggers; // Offset: 0xB8

}; // Size: 0xD0
