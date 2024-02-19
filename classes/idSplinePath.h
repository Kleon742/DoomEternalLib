struct idSplinePath : idBloatedEntity
{
    enum splinePathType_t : int
    {
        CatmullRomSpline = 0,
        KochanekBartelsSpline = 1,
        NonUniformBSpline = 2,
        CubicBezierSpline = 3,
        NURBS = 4
    };

    enum simStage_t : int
    {
        INITIALIZED = 0,
        RUNNING = 1,
        DONE = 2,
        INVALID = 3
    };

    struct lastMverCmdData_t
    {
        idMat3 axis; // Offset: 0x0

        idVec3 pos; // Offset: 0x24

        idVec3 dir; // Offset: 0x30

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > time; // Offset: 0x40

        float speed; // Offset: 0x48

    }; // Size: 0x50

    struct simulateData_t
    {
        // position along the spline over time {{ ___ts = m }}
        idInterpolateAccelLinearEx < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > splineInterpolate; // Offset: 0x0

        // angular interpolation while on spline
        idInterpolate < idQuat , idTypesafeTime < float , secondUnique_t , 1 > > splineAngleInterpolate; // Offset: 0x58

        // spline based description of the position over time {{ ___ts = m }}
        idCurve_Spline < idVec3 >* spline; // Offset: 0x98

        // last computed first Derivative on spline {{ units = m / s }}
        idVec3 splineDerivative; // Offset: 0xA0

        // the modifier index we currently are at
        int splineModifierIndex; // Offset: 0xAC

        // the total length of the spline
        float splineTotalLength; // Offset: 0xB0

        // the total travel time of the spline
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > splineTotalMovetime; // Offset: 0xB8

        // the current velocity at this point of the spline
        float curSpeed; // Offset: 0xC0

        // set the orientation using the spline
        bool useSplineAngles; // Offset: 0xC4

        // set the orientation using the initial orientation obj the object as throughout the spline
        bool useSplineAnglesFromCurrent; // Offset: 0xC5

        // local spline axis
        idMat3 localAxis; // Offset: 0xC8

        // local spline axis
        idMat3 localSplineAxis; // Offset: 0xEC

        // cur sim axis on spline travel
        idMat3 curAxis; // Offset: 0x110

        // cur sim position on spline travel
        idVec3 curPos; // Offset: 0x134

        // cur sim direction on spline travel
        idVec3 curDir; // Offset: 0x140

        // curr gametime on sim
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > curGameTime; // Offset: 0x150

        // last move command data
        idSplinePath::lastMverCmdData_t lastMoveCommand; // Offset: 0x158

    }; // Size: 0x1A8

    struct idSplineGeometry
    {
        // should this spline generate geometry
        bool generateGeometry; // Offset: 0x0

        // radius of spline if generating geometry {{ units = m }}
        float radius; // Offset: 0x4

        // spline subdivisions if generating geometry
        int splineSubdivisions; // Offset: 0x8

        // swept spline subdivisions if generating geometry
        int sweptSubdivisions; // Offset: 0xC

    }; // Size: 0x10

    struct moverModifierModels_t
    {
        // if set we'll draw our mover modifies as this render model in the editor; if they have orientation. has no effect in game.
        idStrRenderModel orientationModModel; // Offset: 0x0

        // if set we'll draw our mover modifies as this render model in the editor. has no effect in game.
        idStrRenderModel defaultModModel; // Offset: 0x8

        // scales the model of the mover modifier models
        float moverScale; // Offset: 0x10

    }; // Size: 0x18

    struct conversionToMoveCmd_t
    {
        // the rate of sampling when building the move commands
        idTypesafeTime < int , millisecondUnique_t , 1000 > sampleRate; // Offset: 0x0

        // the degrees we need to go over on movement direction sampling before we can take a new mover command change
        float deviationDegDir; // Offset: 0x4

        // the degrees we need to go over on rotation sampling before we can take a new mover command change
        float deviationDegRot; // Offset: 0x8

        // the speed changes we need in order to create a sample in meters/sec
        float deviationSpeed; // Offset: 0xC

    }; // Size: 0x10

    // spline type
    idSplinePath::splinePathType_t type; // Offset: 0xB88

    // spline control points {{ units = m }}
    idList < idVec3 , TAG_IDLIST , false > controlPoints; // Offset: 0xB90

    // spline control points orientation
    idList < idQuat , TAG_IDLIST , false > controlPointsOrientation; // Offset: 0xBA8

    // weight points for cubic bezier curves
    idList < idVec3 , TAG_IDLIST , false > weightPoints; // Offset: 0xBC0

    // use this spline for texlod
    bool useForTexlod; // Offset: 0xBD8

    // remove the spline at spawn/in production filter
    bool removeAtSpawn; // Offset: 0xBD9

    // settings for the spline path
    idSplinePath::idSplineGeometry splineGeometry; // Offset: 0xBDC

    // list of modifiers that affect movers as they traverse the spline
    idList < splineMoverModifier_t , TAG_IDLIST , false > moverModifiers; // Offset: 0xBF0

    // modifiers that this will affect movers on this spline
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > moverModifierEntities; // Offset: 0xC08

    // models for mover modifiers to use in the editor.
    idSplinePath::moverModifierModels_t moverModifierModels; // Offset: 0xC20

    // def to use for endpoints, only needed for AI travel, otherwise ignored
    idDeclEntityDef* graphDef; // Offset: 0xC38

    // entity that the start of the spline should be anchored to
    idManagedClassPtr < idEntity > anchorStart; // Offset: 0xC40

    // entity that the end of the spline should be anchored to
    idManagedClassPtr < idEntity > anchorEnd; // Offset: 0xC60

    // settings to convert spline movement to series of mover commands
    idSplinePath::conversionToMoveCmd_t moveCmdConvert; // Offset: 0xC80

    // {{ units = m }}
    float cachedSplineLength; // Offset: 0xC90

    // {{ ___ts = m }}
    idCurve_Spline < idVec3 >* allocedSpline; // Offset: 0xC98

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > splineChildEntities; // Offset: 0xCA0

}; // Size: 0xCB8
