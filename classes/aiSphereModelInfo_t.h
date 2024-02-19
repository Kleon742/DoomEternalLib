struct aiSphereModelInfo_t
{
    // joint index this sphere is attached to
    short mUniqueJointIndex; // Offset: 0x0

    // priority of this sphere
    short mPriority; // Offset: 0x2

    // the offset from the joint in local space {{ units = m }}
    idVec3 mOffset; // Offset: 0x4

    // delta of last trace {{ units = m }}
    idVec3 mLastDelta; // Offset: 0x10

    // pointer to the havok shape
    idHavokShapePointer mHavokShape; // Offset: 0x20

    // handle for the deferred trace
    idHavokQueryId mTraceQuery; // Offset: 0x28

    // handle for the deferred trace
    idHavokQueryId mContentsQuery; // Offset: 0x30

}; // Size: 0x38
