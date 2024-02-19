struct idDeclEquipmentLauncher : idDeclInventory
{
    enum equipmentLauncherSide_t : int
    {
        SIDE_NONE = 0,
        SIDE_LEFT = 1,
        SIDE_RIGHT = 2
    };

    struct showHideMeshInfoForInventoryItem_t
    {
        // inventoryItem to show/hide meshes for
        idDeclInventory* inventoryItem; // Offset: 0x0

        // meshes to show/hide based on inventory item
        idMD6Util::meshShowHideInfo_t showHideMeshInfo; // Offset: 0x8

    }; // Size: 0x40

    struct tagOffsetForWeapon_t
    {
        // use tag offset when this weapon is equipped
        idDeclWeapon* declWeapon; // Offset: 0x0

        // tag offset {{ units = m }}
        idVec3 tagOffset; // Offset: 0x8

    }; // Size: 0x18

    // list of tag offsets to use when specific weapons are equipped
    idList < idDeclEquipmentLauncher::tagOffsetForWeapon_t , TAG_IDLIST , false > tagOffsetForWeaponList; // Offset: 0x3F8

    // equipment launcher animweb
    idDeclAnimWeb* declAnimWeb; // Offset: 0x410

    // animweb start subweb
    idAtomicString startSubwebName; // Offset: 0x418

    // animweb start subweb state
    idAtomicString startStateName; // Offset: 0x420

    // how long after launching a grenade should the launcher wait in active state before deactivating
    milliToGameTime_t postLaunchActiveMS; // Offset: 0x428

    // SIDE_LEFT or SIDE_RIGHT
    idDeclEquipmentLauncher::equipmentLauncherSide_t side; // Offset: 0x438

    // List of showHide info based on the inventory item being launched
    idList < idDeclEquipmentLauncher::showHideMeshInfoForInventoryItem_t , TAG_IDLIST , false > showHideMeshInfoList; // Offset: 0x440

    // entity def for weapon ent (presentable)
    idDeclEntityDef* weaponEntityDef; // Offset: 0x458

    // offset to launch direction, in degrees
    idAngles launchDirOffsetDegsFragGrenade; // Offset: 0x460

    // offset to launch direction, in degrees
    idAngles launchDirOffsetDegsIceBomb; // Offset: 0x46C

    // offset to launch direction, in degrees
    idAngles launchDirOffsetDegsFlameBelch; // Offset: 0x478

    // offset to launch direction, in degrees, when launche
    idAngles launchDirOffsetDegsFragGrenadeMastered; // Offset: 0x484

    // offset to launch direction, in degrees, when launche
    idAngles launchDirOffsetDegsIceBombMastered; // Offset: 0x490

    // offset to launch direction, in degrees, when launche
    idAngles launchDirOffsetDegsFlameBelchMastered; // Offset: 0x49C

    // initial equipment type restriction (if any)
    equipmentType_t initialEquipmentTypeRestriction; // Offset: 0x4A8

}; // Size: 0x4B0
