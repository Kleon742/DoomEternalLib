struct idPlayerMechanicWallGrab : idPlayerMechanic
{
    struct idPlayerMechanicWallGrabTestInfo
    {
        // this test is disabled
        bool disabled; // Offset: 0x0

        // whether the test ray collided with a valid wall grab surface or not
        bool detectedWallGrab; // Offset: 0x1

        // direction of the test
        idVec3 dir; // Offset: 0x4

        // point on the valid surface, if one was detected {{ units = m }}
        idVec3 point; // Offset: 0x10

        // normal to the valid surface, if one was detected
        idVec3 normal; // Offset: 0x1C

        // surface flags at the impact point
        int surfaceFlags; // Offset: 0x28

    }; // Size: 0x2C

    idPlayerMechanicWallGrabState_t state; // Offset: 0x28

    // position to align third person body to
    idVec3 bodyAlignPos; // Offset: 0x2C

    // player forward when not in a wall grab, or into the wall grab surface during a wall grab
    idPlayerMechanicWallGrab::idPlayerMechanicWallGrabTestInfo testForward; // Offset: 0x38

    // into the wall grab surface, to the player's right while mechanic is active
    idPlayerMechanicWallGrab::idPlayerMechanicWallGrabTestInfo testRight; // Offset: 0x64

    // into the wall grab surface, to the player's left while mechanic is active
    idPlayerMechanicWallGrab::idPlayerMechanicWallGrabTestInfo testLeft; // Offset: 0x90

    // normal to the wall grab surface
    idVec3 wallGrabNormal; // Offset: 0xBC

    // up in the wall grab coordinate system
    idVec3 wallGrabUp; // Offset: 0xC8

    // right in the wall grab coordinate system (facing away from the wall)
    idVec3 wallGrabRight; // Offset: 0xD4

    // last move dir ( in the wall coordinate system )
    idVec3 wallMoveDir; // Offset: 0xE0

    // use a spring to smooth out the wall grab normal used by the body as we traverse across piecewise linear wall grab surfaces
    idSpring < idVec3 > averagedWallGrabNormal; // Offset: 0xEC

    // use a spring to shift the body into position smoothly
    idSpring < idVec1 > shiftIntoPositionSpring; // Offset: 0x144

    // use a spring to smooth out body rotation as we traverse across piecewise linear wall grab surfaces
    idSpring < idVec1 > averagedBodyRotationT; // Offset: 0x174

    // flags when the third person legs need to be aligned
    bool alignThirdPersonModels; // Offset: 0x1A4

    // prevents a held jump input from being misinterpreted
    bool jumpInputRequiresRelease; // Offset: 0x1A5

    // tracks whether the dismount was due to jumping
    bool jumpDismount; // Offset: 0x1A6

    // stores the reflected view normal on mount
    idVec3 mountReflectedViewNormal; // Offset: 0x1A8

    // records the mount time for the initial view reflection time period
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > mountTime; // Offset: 0x1B8

    // records when the view reflection should end
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > viewReflectEndTime; // Offset: 0x1C0

    // calculated rate
    float viewReflectRate; // Offset: 0x1C8

    // records the dismount time to prevent grabbing again too soon
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > dismountTime; // Offset: 0x1D0

    // enum bodyRotationAnim_t { BODY_ROTATION_CENTER, BODY_ROTATION_LEFT, BODY_ROTATION_RIGHT, BODY_ROTATION_MAX }; __edit aliasRef_t bodyRotationAnimAliasHandles[ BODY_ROTATION_MAX ]; 0 = Center, 1 = left, 2 = right  config data  detection parms How far above the current ground to test {{ units = m }}
    float upTestOffset; // Offset: 0x1D8

    // How far forward to test the world {{ units = m }}
    float forwardTestDist; // Offset: 0x1DC

    // How far to back up the forward test rays {{ units = m }}
    float forwardTestBackupDist; // Offset: 0x1E0

    // How far sideways or up to test for a wallGrab {{ units = m }}
    float sideTestDist; // Offset: 0x1E4

    // How far sideways or up to test for a wallGrab when looking for a mount {{ units = m }}
    float sideTestDistMount; // Offset: 0x1E8

    // input and initiation parms Dead zone for wallGrab input
    float inputDeadZone; // Offset: 0x1EC

    // Maximum angle in degrees between the wallGrab normal and the player heading to interact with the wallGrab
    float initiateMaxAngle; // Offset: 0x1F0

    // After dismounting, don't allow grabbing for this long
    idTypesafeTime < int , millisecondUnique_t , 1000 > noGrabTimeMS; // Offset: 0x1F4

    // view parms Maximum delta pitch, relative to wallGrab normal
    float maxDeltaPitch; // Offset: 0x1F8

    // Maximum delta pitch during mounting and dismounting, relative to wallGrab normal
    float maxDeltaPitchMount; // Offset: 0x1FC

    // Maximum delta yaw, relative to wallGrab normal
    float maxDeltaYaw; // Offset: 0x200

    // Rate for the entry into the constrained view range, if restriction is necessary (degs/sec)
    float constrainedViewAnglesRate; // Offset: 0x204

    // movement parms Perpendicular distance between the wallGrab surface and the origin of the third person legs {{ units = m }}
    float distToWallGrabSurface; // Offset: 0x208

    // Spring constant for averaging the wallGrab normal vector
    float averagedNormalK; // Offset: 0x20C

    // Spring constant for shifting into position
    float shiftIntoPositionK; // Offset: 0x210

    // Normal slide speed {{ units = m / s }}
    float speedNormal; // Offset: 0x214

    // Sprint slide speed {{ units = m / s }}
    float speedSprint; // Offset: 0x218

    // Speed tp push away from the surface when dismounting by jumping {{ units = m / s }}
    float speedDismountPerp; // Offset: 0x21C

    // Speed tp push up from the surface when dismounting by jumping {{ units = m / s }}
    float speedDismountUp; // Offset: 0x220

    // Speed tp push forward from the surface when dismounting by jumping {{ units = m / s }}
    float speedDismountFwd; // Offset: 0x224

    // If true then vertical movement is allowed in addition to horizontal movement
    bool allowVerticalMovement; // Offset: 0x228

    // animation parms left hand on wall - mount
    idAtomicHandleT < aliasRefType_t > left_mount; // Offset: 0x230

    // left hand on wall - idle
    idAtomicHandleT < aliasRefType_t > left_idle; // Offset: 0x238

    // left hand on wall - switch to right hand on wall
    idAtomicHandleT < aliasRefType_t > left_idle_to_right_idle; // Offset: 0x240

    // left hand on wall - move left
    idAtomicHandleT < aliasRefType_t > left_move_left; // Offset: 0x248

    // left hand on wall - move right
    idAtomicHandleT < aliasRefType_t > left_move_right; // Offset: 0x250

    // left hand on wall - dismount
    idAtomicHandleT < aliasRefType_t > left_dismount; // Offset: 0x258

    // right hand on wall - mount
    idAtomicHandleT < aliasRefType_t > right_mount; // Offset: 0x260

    // right hand on wall - idle
    idAtomicHandleT < aliasRefType_t > right_idle; // Offset: 0x268

    // right hand on wall - switch to left hand on wall
    idAtomicHandleT < aliasRefType_t > right_idle_to_left_idle; // Offset: 0x270

    // right hand on wall - move left
    idAtomicHandleT < aliasRefType_t > right_move_left; // Offset: 0x278

    // right hand on wall - move right
    idAtomicHandleT < aliasRefType_t > right_move_right; // Offset: 0x280

    // right hand on wall - dismount
    idAtomicHandleT < aliasRefType_t > right_dismount; // Offset: 0x288

    // sound parms sound to make when mounting
    idSoundEvent* sound_mount; // Offset: 0x290

    // sound to make when moving (looping)
    idSoundEvent* sound_move; // Offset: 0x298

    // sound to make when dismounting
    idSoundEvent* sound_dismount; // Offset: 0x2A0

}; // Size: 0x2A8
