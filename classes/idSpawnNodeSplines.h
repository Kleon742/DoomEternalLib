struct idSpawnNodeSplines : idSpawnNode
{
    // Paths used to generate spawn locations.
    idList < idManagedClassPtr < idSplinePath > , TAG_IDLIST , false > splinePaths; // Offset: 0xBB8

    // {{ ___ts = m }}
    idList < idCurve_Spline < idVec3 > * , TAG_IDLIST , false > splineCurves; // Offset: 0xBD0

    // Cache total number of spline indices.
    int totalLocationCount; // Offset: 0xBE8

}; // Size: 0xBF0
