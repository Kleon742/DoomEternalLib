struct idLowGravityMover : idAnimatedEntity
{
    // activated by this player
    idManagedClassPtr < idPlayer > player; // Offset: 0x1B48

    // idPhysics_RigidBodyphysicsObj; idPhysics_PlayerphysicsObj;
    idVec3 angularVelocity; // Offset: 0x1B68

    idVec3 viewOrigin; // Offset: 0x1B74

    idMat3 viewAxis; // Offset: 0x1B80

    float viewFov; // Offset: 0x1BA4

    idVec3 viewVelocity; // Offset: 0x1BA8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > viewTimestamp; // Offset: 0x1BB8

    // for 'ADD' look modes
    idAngles viewDeltaAngles; // Offset: 0x1BC0

    // Piece to attach that gets blown off when damaged
    idList < const idDeclEntityDef * , TAG_IDLIST , false > attachmentDefs; // Offset: 0x1BD0

    idAttachmentCollection attachments; // Offset: 0x1BE8

    // weapon decl
    idDeclInventory* weaponDecl; // Offset: 0x1C08

    idInventoryItem* weaponItem; // Offset: 0x1C10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weaponFiredTime; // Offset: 0x1C18

}; // Size: 0x1C20
