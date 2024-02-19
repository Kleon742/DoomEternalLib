struct idLogicNodeEntityRotate
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        INPUT_STOP = 1,
        OUTPUT_ACTIVATE = 2,
        INPUT_ENTITY = 3,
        INPUT_TARGET = 4,
        INPUT_POSITION = 5,
        INPUT_TIME = 6,
        INPUT_SPEED = 7,
        INPUT_DEGREES = 8,
        INPUT_ACCEL = 9,
        INPUT_DECEL = 10,
        INPUT_ANGLES = 11,
        INPUT_ROT_VECTOR = 12,
        INPUT_REPEAT = 13,
        OUTPUT_DONE = 14,
        INPUT_WORLDSPACE = 15,
        INPUT_AUTO_START = 16,
        OUTPUT_START = 17,
        OUTPUT_STOP = 18,
        INPUT_WORLDSPACE_EULER = 19
    };

    enum logicRotateType_t : int
    {
        ROTATE_ON_ORIGIN = 0,
        ROTATE_AROUND_POSITION = 1,
        ROTATE_AROUND_ENTITY = 2,
        ROTATE_TOWARDS_POSITION = 3,
        ROTATE_TOWARDS_ENTITY = 4
    };

    enum logicRotateInputType_t : int
    {
        EULER_ROTATION = 0,
        VECTOR_ROTATION = 1
    };

    enum velocityInputType_t : int
    {
        ANGULAR_SPEED = 0,
        ANGULAR_TIME = 1
    };

    enum moveStage_t : int
    {
        ACCELERATION_STAGE = 0,
        LINEAR_STAGE = 1,
        DECELERATION_STAGE = 2,
        STOP_STAGE = 3,
        FINISHED_STAGE = 4
    };

    struct rotationState_t
    {
        // this is actually the next stage it will be in when the current stage completes
        idLogicNodeEntityRotate::moveStage_t stage; // Offset: 0x0

        // the actual, current stage
        idLogicNodeEntityRotate::moveStage_t currentStage; // Offset: 0x4

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > acceleration; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > movetime; // Offset: 0x10

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > deceleration; // Offset: 0x18

        idVec3 vec; // Offset: 0x20

        float speed; // Offset: 0x2C

    }; // Size: 0x30

    idRotation rotationNode; // Offset: 0x0

    idLogicNodeEntityRotate::logicRotateType_t rotateType; // Offset: 0x44

    idLogicNodeEntityRotate::logicRotateInputType_t rotateInputType; // Offset: 0x48

    idLogicNodeEntityRotate::velocityInputType_t velInputType; // Offset: 0x4C

    idLogicEntityPtr entity; // Offset: 0x50

    idLogicEntityPtr target; // Offset: 0x78

    idMat3 startAxis; // Offset: 0xA0

    idVec3 startOrigin; // Offset: 0xC4

    idVec3 offset; // Offset: 0xD0

    bool repeatRotation; // Offset: 0xDC

    bool infiniteRotation; // Offset: 0xDD

    idLogicNodeEntityRotate::rotationState_t rot; // Offset: 0xE0

}; // Size: 0x110
