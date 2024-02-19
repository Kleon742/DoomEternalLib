struct idHavokRagdoll
{
    idHavokPhysics* havokPhysics; // Offset: 0x0

    idSpawnId spawnId; // Offset: 0x8

    idList < idHavokRagdollBody * , TAG_IDLIST , false > bodies; // Offset: 0x10

    idList < idHavokConstraint * , TAG_IDLIST , false > constraints; // Offset: 0x28

    // temporary constraints that are active for 1 tick
    idList < idHavokConstraint * , TAG_IDLIST , false > frameConstraints; // Offset: 0x40

    idList < idHavokConstraint * , TAG_IDLIST , false > prevFrameConstraints; // Offset: 0x58

}; // Size: 0x70
