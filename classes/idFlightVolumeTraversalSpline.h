struct idFlightVolumeTraversalSpline : idSplinePath
{
    // name of the anim web state in flight_traversals sub web
    idAtomicString animStateName; // Offset: 0xCB8

    // nav size this spline traversal is for
    navSize_t navSize; // Offset: 0xCC0

    // cost of moving along traversal. It will be set to the actual length if left negative
    float cost; // Offset: 0xCC4

    // {{ ___ts = m }}
    idCurve_Spline < idVec3 >* allocatedSpline; // Offset: 0xCC8

    idIndex < int , invalidNavVolumeCell_t , - 1 > startNavVolumeCellIndex; // Offset: 0xCD0

    idIndex < int , invalidNavVolumeCell_t , - 1 > endNavVolumeCellIndex; // Offset: 0xCD4

    idVec3 startLocation; // Offset: 0xCD8

    idVec3 endLocation; // Offset: 0xCE4

}; // Size: 0xCF0
