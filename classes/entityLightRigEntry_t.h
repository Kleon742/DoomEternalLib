struct entityLightRigEntry_t
{
    idManagedClassPtr < idEntity > lightEntity; // Offset: 0x0

    idMat3 bindAxis_modelSpace; // Offset: 0x20

    idVec3 bindOrigin_modelSpace; // Offset: 0x44

}; // Size: 0x50
