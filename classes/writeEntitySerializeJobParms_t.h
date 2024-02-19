struct writeEntitySerializeJobParms_t
{
    idMapInstanceLocal* mapInstance; // Offset: 0x0

    idEntity* entityToSerialize; // Offset: 0x8

    idSnapShot* currentSnapshot; // Offset: 0x10

    idSnapShot::objectState_t* objectState; // Offset: 0x18

    int objectID; // Offset: 0x20

}; // Size: 0x28
