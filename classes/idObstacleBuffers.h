struct idObstacleBuffers
{
    idObstacleAvoidance* user; // Offset: 0x0

    obstacleParms_t parms; // Offset: 0x8

    obstacleRoute_t route; // Offset: 0x148

    idArray < obstacleBox_t , 128 > obstacles; // Offset: 0x298

    idArray < obstacleVertex_t , 768 > vertices; // Offset: 0x2A98

    idArray < obstacleEdge_t , 512 > edges; // Offset: 0x4E98

    idArray < obstacleCorner_t , 16 > corners; // Offset: 0x6E98

    idArray < obstacleTrace_t , 128 > traces; // Offset: 0x6F98

    idArray < float , 128 > traceFractions; // Offset: 0x7798

    obstaclePath_t path; // Offset: 0x7998

    idArray < obstacleAnim_t , 64 > anims; // Offset: 0x7C28

    idArray < oaAnimQueryParms_t , 4 > animParms; // Offset: 0x8428

    idArray < oaAnimQueryResult_t , 4 > animResults; // Offset: 0x8588

    int numAnims; // Offset: 0x8C58

    int numAnimQueries; // Offset: 0x8C5C

    int numObstacles; // Offset: 0x8C60

    int numVertices; // Offset: 0x8C64

    int numEdges; // Offset: 0x8C68

    int numCorners; // Offset: 0x8C6C

    int numTraces; // Offset: 0x8C70

}; // Size: 0x8C78
