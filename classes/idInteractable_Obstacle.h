struct idInteractable_Obstacle : idInteractable
{
    struct obstacleStateData_t
    {
        // the state name related to this data
        idTypeInfoGraphPath statePath; // Offset: 0x0

        // Block reachability for the obstacle in this state?
        bool obstacleReachability; // Offset: 0x30

        // Should we open the sound door for this state?
        bool soundDoorOpen; // Offset: 0x31

    }; // Size: 0x38

    // the index of this door inside the sound BSP
    int soundDoorIndex; // Offset: 0x2B50

    // {{ ___ts = m }}
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > soundDoorLerp; // Offset: 0x2B58

    // how many units this door adds to sounds that pass through it {{ units = m }}
    float soundDoorDistanceAdd; // Offset: 0x2B88

    // Should this obstacle search for and manage a sound door
    bool enableSoundDoors; // Offset: 0x2B8C

    // List of player indices that have been within the rendermodel bounds
    idList < int , TAG_IDLIST , false > collidingPlayers; // Offset: 0x2B90

    // Collision parts in the animated entity
    idList < obstacle_collisionData_t , TAG_IDLIST , false > collisionPieces; // Offset: 0x2BA8

    // idList< idClipModel * >clipModels; List of clip models idList< idPhysics_Parametric * >parametricPhysicsObjs; List of physics objects
    idList < idHavokPhysics_RigidBody * , TAG_IDLIST , false > parametricPhysicsObjs_havok; // Offset: 0x2BC0

    // For moving doors with the elevators {{ units = m }}
    idVec3 originAtStart; // Offset: 0x2BD8

    // for rotating doors.
    idMat3 axisAtStart; // Offset: 0x2BE4

    // Absolute bounds for the blocker (calculated at runtime)
    idBounds absBlockerBounds; // Offset: 0x2C08

    // local bounds for the blocker (calculated at runtime)
    idBounds localBlockerBounds; // Offset: 0x2C20

    // bounds for splitting aas beneath the blocker
    idBounds aasBlockerClipBounds; // Offset: 0x2C38

    // expansion distances for each axis of the calculated blocker bounds
    idVec3 blockerBoundsExpandDists; // Offset: 0x2C50

    // Front Position for to test for an AAS area in the door reachability {{ units = m }}
    idVec3 frontAASAreaTestPos; // Offset: 0x2C5C

    // Front Position for to test for an AAS area in the door reachability {{ units = m }}
    idVec3 backAASAreaTestPos; // Offset: 0x2C68

    // list of traversals that pass through this doorway
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > traversals; // Offset: 0x2C78

    // cached indices for these traversals
    idList < idIndex < int , invalidTraversal_t > , TAG_IDLIST , false > traversalIndices; // Offset: 0x2C90

    // the data associated with the graph
    idList < idInteractable_Obstacle::obstacleStateData_t , TAG_IDLIST , false > stateObstacleData; // Offset: 0x2CA8

    // setup input combo's to activate this entity.
    idInputInteraction inputInteraction; // Offset: 0x2CC0

    // Umbra vis blocking
    umbraDoorBlocking_t umbraVisBlocking; // Offset: 0x2D40

    // Umbra sound blocking
    umbraDoorBlocking_t umbraSoundBlocking; // Offset: 0x2D44

    // Adjust thickness of Umbra door (rare)
    float umbraDoorAdjustThickness; // Offset: 0x2D48

    // Is this a blue key card door?
    bool isBlueKeyCardDoor; // Offset: 0x2D4C

    // Is this a yellow key card door?
    bool isYellowKeyCardDoor; // Offset: 0x2D4D

    // if true, demon players do not collide with this entity
    bool demonPlayersPassThrough; // Offset: 0x2D4E

    // Render model when the local player is a demon.
    idRenderModel* demonPlayerRenderModel; // Offset: 0x2D50

    // distance from demon dissolve effect will play
    float dissolveDistance; // Offset: 0x2D58

}; // Size: 0x2D60
