struct collectibleInfo_t
{
    struct collectibleAttachment_t
    {
        // attachment entitydef
        idDeclEntityDef* entityDef; // Offset: 0x0

        // tag to attach entity to
        idStr tagName; // Offset: 0x8

        idHandle < int , invalidAttachment_t , INVALID_ATTACHMENT > handle; // Offset: 0x38

    }; // Size: 0x40

    struct collectibleGuiInfo_t
    {
        // name of the collectible.
        idStrId name; // Offset: 0x0

        // description of the collectible.
        idStrId description; // Offset: 0x4

        // artist name;
        idStrId artist_name; // Offset: 0x8

        // album name.
        idStrId album_name; // Offset: 0xC

        // track name.
        idStrId track_name; // Offset: 0x10

    }; // Size: 0x14

    // collectible decl needed to get this.
    idDeclCollectible* collectible; // Offset: 0x0

    // X = Starting Yaw, Y = height, Z = Zoom.
    idVec3 selectionStartingValues; // Offset: 0x8

    // scale of the entity.
    idVec3 scale; // Offset: 0x14

    // entity to use for the external viewer.
    idDeclEntityDef* externalEntityDef; // Offset: 0x20

    // list of attachments to enable for the external model
    idList < collectibleInfo_t::collectibleAttachment_t , TAG_IDLIST , false > externalEntityAttachments; // Offset: 0x28

    // X = Starting Yaw, Y = height, Z = Zoom.
    idVec3 externalStartingValues; // Offset: 0x40

    // offset applied to the info_null position
    idVec3 externalModelOffset; // Offset: 0x4C

    // this item can be shown even if the player hasn't acquired it
    bool canDisplayWithoutHavingItem; // Offset: 0x58

    // TRUE = uses externalStartingValues when first entering external view for this item. FALSE = retains current values from previous model view
    bool useStartingValuesOnExternalModel; // Offset: 0x59

    // information to display on the GUI
    collectibleInfo_t::collectibleGuiInfo_t guiInfo; // Offset: 0x5C

    // this is an album collectible
    bool isAnAlbum; // Offset: 0x70

    // song associated with this album
    idSoundState* albumSong; // Offset: 0x78

    // controls camera movement around shelf item
    collectibleOrbit_t orbitValues; // Offset: 0x80

    // controls camera movement around external model
    collectibleOrbit_t orbitValues_external; // Offset: 0xD0

    // if this is a weapon, points to the base weapon decl (mod info is pulled from that..)
    idDeclWeapon* weaponDecl; // Offset: 0x120

    bool weaponHasMods; // Offset: 0x128

    // entity shown at selection view
    idManagedClassPtr < idEntity > selectionEntity; // Offset: 0x130

    // entity shown at external view (after you select an item)
    idManagedClassPtr < idEntity > externalEntity; // Offset: 0x150

    int weaponModIndex; // Offset: 0x170

    // [ 0 ] = base, [ 1 / 2 ] = mods
    idStaticList < idMD6Util::meshShowHideInfo_t , 3 , false , TAG_IDLIST > meshShowHideInfo; // Offset: 0x178

    // positions external entity
    bool centerCameraOnBounds; // Offset: 0x238

    idBounds renderModelBounds; // Offset: 0x23C

}; // Size: 0x258
