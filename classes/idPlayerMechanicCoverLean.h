struct idPlayerMechanicCoverLean : idPlayerMechanic
{
    enum viewMotionState_t : int
    {
        VIEW_MOTION_NONE = 0,
        VIEW_MOTION_PEEK_OUT_SIDE = 1,
        VIEW_MOTION_PEEK_RETURN_SIDE = 2,
        VIEW_MOTION_PEEK_OUT_UP = 3,
        VIEW_MOTION_PEEK_RETURN_UP = 4,
        VIEW_MOTION_NUM = 5
    };

    enum viewMotionPeekType_t : int
    {
        VIEW_MOTION_PEEK_TYPE_NONE = 0,
        VIEW_MOTION_PEEK_TYPE_PARTIAL = 1,
        VIEW_MOTION_PEEK_TYPE_FULL = 2,
        VIEW_MOTION_PEEK_TYPE_NUM = 3
    };

    enum headClipModelState_t : int
    {
        HEAD_CLIP_MODEL_DISABLE = 0,
        HEAD_CLIP_MODEL_ENABLE = 1
    };

    enum viewMotionAction_t : int
    {
        VIEW_MOTION_ACTION_NONE = 0,
        VIEW_MOTION_ACTION_START_PEEK_UP = 1,
        VIEW_MOTION_ACTION_UPDATE_PEEK_UP = 2,
        VIEW_MOTION_ACTION_END_PEEK_UP = 3,
        VIEW_MOTION_ACTION_PAUSE_PEEK_UP = 4,
        VIEW_MOTION_ACTION_START_PEEK_SIDE = 5,
        VIEW_MOTION_ACTION_END_PEEK_SIDE = 6,
        VIEW_MOTION_ACTION_PAUSE_PEEK_SIDE = 7,
        VIEW_MOTION_ACTION_END_VIEW_MOTION = 8,
        VIEW_MOTION_ACTION_FORCE_END = 9
    };

    playerMechanicBlockCheck_t blockCheckForward; // Offset: 0x28

    playerDirectionalCoverInfo_t coverInfoRight; // Offset: 0x54

    playerDirectionalCoverInfo_t coverInfoLeft; // Offset: 0x84

    playerDirectionalCoverInfo_t coverInfoUp; // Offset: 0xB4

    playerDirectionalCoverInfo_t coverInfoUpPeek; // Offset: 0xE4

    // currently in a cover lean
    bool active; // Offset: 0x114

    // 0=not in cover, 1=in cover
    idSpring < idVec1 > springInCover; // Offset: 0x118

    // 0=not in cover, 1=in cover, specific to the animweb
    idSpring < idVec1 > springInCoverHands; // Offset: 0x148

    // -1=left, 0=center, 1=right
    idSpring < idVec1 > springLeanLR; // Offset: 0x178

    // 0=center, 1=up
    idSpring < idVec1 > springLeanU; // Offset: 0x1A8

    // 0=not ready to peek, 1=ready to peek
    idSpring < idVec1 > springReadyToPeek; // Offset: 0x1D8

    // 0=not ready to peek, 1=ready to peek, specific to the animweb
    idSpring < idVec1 > springReadyToPeekHands; // Offset: 0x208

    // normal stand height - crouch height, stored for convenience {{ units = m }}
    float deCrouchHeight; // Offset: 0x238

    // how long to suppress the system
    idTypesafeTime < int , millisecondUnique_t , 1000 > suppressTime; // Offset: 0x23C

    // how far we are returning
    float returnScale; // Offset: 0x240

    // can do a partial peek from crouch cover
    bool canPartialPeekFromCrouchCover; // Offset: 0x244

    // use the special peek clip model for the player
    bool usePeekClipModel; // Offset: 0x245

    // flags whether the view motion is paused and can be resumed at the first opportunity
    bool viewMotionPaused; // Offset: 0x246

    // time that the player entered cover
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > enteredCoverTime; // Offset: 0x248

    idPlayerMechanicCoverLean::viewMotionState_t viewMotionState; // Offset: 0x250

    idPlayerMechanicCoverLean::viewMotionPeekType_t viewMotionPeekType; // Offset: 0x254

    idPlayerMechanicCoverLean::headClipModelState_t headClipModelState; // Offset: 0x258

    idSpring < idVec3 > springViewMotionScale; // Offset: 0x25C

    idMat3 viewMotionAxis; // Offset: 0x2B4

    int viewMotionChannel; // Offset: 0x2D8

    // view motion is currently disabled idMotionController::tableArray_t viewMotion[VIEW_MOTION_NUM]; used by MP
    bool MPreturnStarted; // Offset: 0x2DC

    idHavokQueryId deferredBlockedQuery; // Offset: 0x2E0

    // {{ units = m }}
    idVec3 deferredBlockedQueryStart; // Offset: 0x2E8

    // {{ units = m }}
    idVec3 deferredBlockedQueryEnd; // Offset: 0x2F4

}; // Size: 0x300
