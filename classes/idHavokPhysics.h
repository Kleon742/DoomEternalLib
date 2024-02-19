struct idHavokPhysics
{
    struct contactEvent_t
    {
        // Contact body A and B
        idHavokBodyId bodies[2]; // Offset: 0x0

        // Contact shape keys A and B
        unsigned int shapeKeys[2]; // Offset: 0x8

        // Type of contact event
        contactImpulseType_t type; // Offset: 0x10

        // Contact normal, from B to A in world space.
        idVec3 normal; // Offset: 0x14

        // If object B is a triangle or quad, this is plane 0 (needed for welding).
        idVec3 weldNormal; // Offset: 0x20

        // A value between [0, 1] describing how much friction force has been applied relative to the theoretical friction force for infinite friction ( 0 indicating bodies are sliding against each other and 1 that they didn't)
        float frictionFactor; // Offset: 0x2C

        // Number of contacts in the event
        int numContacts; // Offset: 0x30

        // The positions of each contact point, on B in world space
        idVec3 positions[4]; // Offset: 0x34

        // The distances of each contact point
        float distances[4]; // Offset: 0x64

        // The impulses applied to each contact point
        float impulses[4]; // Offset: 0x74

    }; // Size: 0x84

    struct physicsMaterial_t
    {
        int hash; // Offset: 0x0

        idHavokMaterialId id; // Offset: 0x4

    }; // Size: 0x8

    struct motionPropertiesEntry_t
    {
        int hash; // Offset: 0x0

        int useCount; // Offset: 0x4

        idHavokMotionPropertiesId id; // Offset: 0x8

    }; // Size: 0xC

    typedef int motionPropsIndex_t;

    idDeclPhysics* defaultDecl; // Offset: 0x0

    idHavokPhysics::contactEvent_t contactEvents[1024]; // Offset: 0x8

    interlockedInt_t numContactEvents; // Offset: 0x21008

    idHavokPhysicsSignalHandler* signalHandler; // Offset: 0x21010

    idMapInstance* game; // Offset: 0x21018

    hknpWorld* world; // Offset: 0x21020

    idHavokCollision* collision; // Offset: 0x21028

    idHavokCollisionFilter* collisionFilter; // Offset: 0x21030

    idHavokShapeCache* shapeCache; // Offset: 0x21038

    hknpConstraintCollisionFilter_Patched* constraintCollisionFilter; // Offset: 0x21040

    hkDynamicBlockStreamAllocator* persistentStreamAllocator; // Offset: 0x21048

    hknpMaterialLibrary* materialLibrary; // Offset: 0x21050

    idHavokTaskQueue* taskQueue; // Offset: 0x21058

    hkTaskQueue* hkTaskQueue; // Offset: 0x21060

    hknpTaskGraph* taskGraph; // Offset: 0x21068

    void* taskHandle; // Offset: 0x21070

    hkDynamicBlockStreamAllocator* stepLocalStreamAllocator; // Offset: 0x21078

    hknpShapeTagCodec* shapeTagCodec; // Offset: 0x21080

    bool physicsSimulationRunning; // Offset: 0x21088

    bool needsSync; // Offset: 0x21089

    int navTaskId; // Offset: 0x2108C

    idPhysicsCommandQueuesTask* physicsCommandQueuesTask; // Offset: 0x21090

    idHavokPhysicsCommandBuffer* commandBuffer; // Offset: 0x21098

    idHavokInstanceShapes* instanceShapes; // Offset: 0x210A0

    idHavokBodyId worldCollisionBody; // Offset: 0x210A8

    idHavokShapePointer worldCollisionCompoundShape; // Offset: 0x210B0

    idPhysicsProperties worldCollisionProperties; // Offset: 0x210B8

    idHavokMaterialId triggerMaterial; // Offset: 0x21108

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateGameTime; // Offset: 0x21110

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastClothUpdateGameTime; // Offset: 0x21118

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0x21120

    idList < const idMaterial2 * , TAG_IDLIST , false > physicsMaterials; // Offset: 0x21128

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > physicsStep; // Offset: 0x21140

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > physicsTime; // Offset: 0x21148

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > previousPhysicsTime; // Offset: 0x21150

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > physicsStepPrefferred; // Offset: 0x21158

    int stepCount; // Offset: 0x21160

    idList < idHavokPhysics::physicsMaterial_t , TAG_IDLIST , false > materials; // Offset: 0x21168

    idList < idHavokPhysics::motionPropertiesEntry_t , TAG_IDLIST , false > motionProperties; // Offset: 0x21180

    idUnorderedMap < int , hknpLinearSurfaceVelocity * > surfaceVelocityGroups; // Offset: 0x21198

    idBounds worldBounds; // Offset: 0x211D0

    unsigned int nextPhysicsGroupId; // Offset: 0x211E8

    idAINavWorld_HavokProxy_Base* navWorldProxy; // Offset: 0x211F0

    // used for the parallel updates
    idPhysicsCommandQueue* physicsCommandQueues; // Offset: 0x211F8

    int numPhysicsCommandQueues; // Offset: 0x21200

    jobHandle_t queueJobHdl; // Offset: 0x21208

}; // Size: 0x21210
