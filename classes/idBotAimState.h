struct idBotAimState
{
    struct aimRequest_t
    {
        // no gradual turning toward target - look at it this instant!
        bool aimInstantly; // Offset: 0x0

        // priority of this request
        aimPriority_t aimPriority; // Offset: 0x4

        // the type of thing we are aiming at ( entity, point, etc ).
        aimType_t aimType; // Offset: 0x8

        // for entities, what point on the entity should be aimed at.
        aimPoint_t aimPoint; // Offset: 0xC

        // when we started this aim request.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > aimStartTimeInGT; // Offset: 0x10

        // how long this aim event should be valid.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > aimValidTimeInGT; // Offset: 0x18

        // point in space ( or direction ) we want to aim at. {{ units = m }}
        idVec3 aimVector; // Offset: 0x20

        // useful for debugging - behavior that requested this aim.
        idStr aimUserName; // Offset: 0x30

        // entity we want to aim at.
        idManagedClassPtr < const idEntity > aimEntity; // Offset: 0x60

    }; // Size: 0x80

    int currentAimRequestIndex; // Offset: 0x0

    float lookYawVelocity; // Offset: 0x4

    float lookPitchVelocity; // Offset: 0x8

    // {{ units = m }}
    idVec3 currentAimPoint; // Offset: 0xC

    idEntity* currentAimEntity; // Offset: 0x18

    idBot* owner; // Offset: 0x20

    idAngles desiredViewAngles; // Offset: 0x28

    idArray < idBotAimState::aimRequest_t , 4 > aimRequests; // Offset: 0x38

}; // Size: 0x238
