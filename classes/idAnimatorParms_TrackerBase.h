struct idAnimatorParms_TrackerBase : idAnimatorParms_Base
{
    // if true, the tracker will project reference orientation onto the local horizontal plane before computing rotation amounts each frame
    bool projectReferenceOrientation; // Offset: 0x30

    idStr headTrackGroupName; // Offset: 0x38

}; // Size: 0x68
