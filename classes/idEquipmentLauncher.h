struct idEquipmentLauncher : idInventoryItem
{
    enum states_t : int
    {
        STATE_DORMANT = 0,
        STATE_ACTIVATE = 1,
        STATE_ACTIVE = 2,
        STATE_LAUNCH = 3,
        STATE_LAUNCH_LEFT = 4,
        STATE_LAUNCH_RIGHT = 5,
        STATE_LAUNCH_DONE = 6,
        STATE_DEACTIVATE = 7,
        STATE_MAX = 8
    };

    enum launchResult_t : int
    {
        LAUNCH_SUCCESS = 0,
        LAUNCH_QUEUED = 1,
        LAUNCH_FAIL = 2
    };

    struct instantQueue_t
    {
        idInventoryItem* inventoryItem; // Offset: 0x0

        idDeclInventory* itemDecl; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > queueTime; // Offset: 0x10

        idTypesafeTime < int , millisecondUnique_t , 1000 > delayMS; // Offset: 0x18

        equipSlot_t forceEquipSlot; // Offset: 0x1C

        int numShots; // Offset: 0x20

        bool isFlameBelch; // Offset: 0x24

    }; // Size: 0x28

    idFXFlameBelchAxisUpdate flameBelchAxisUpdate; // Offset: 0x110

    // tag offsets {{ units = m }}
    idVec3 tagOffsetForEquippedWeapon; // Offset: 0x148

    // animweb
    idEquipmentLauncherAnimWeb webAnimator; // Offset: 0x158

    idArray < idAtomicString , 8 > animWebStateNames; // Offset: 0x9E8

    idArray < idIndex < idAnimWeb::StateIndexType , idAnimWeb::invalidStateIndex_t > , 8 > animWebStateIndices; // Offset: 0xA28

    idEquipmentLauncher::states_t state; // Offset: 0xA38

    // allows the launch of the item to be delayed after the actual fire event is received
    idTypesafeTime < int , millisecondUnique_t , 1000 > launchDelayMS; // Offset: 0xA3C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > deactivateTime; // Offset: 0xA40

    idInventoryItem* launchItem; // Offset: 0xA48

    tagData_t muzzleTagData; // Offset: 0xA50

    bool deactivateAfterTime; // Offset: 0xA70

    // items in this queue are handled immediately after the current item times-out
    idStaticList < idEquipmentLauncher::instantQueue_t , 6 , false , TAG_IDLIST > instantQueue; // Offset: 0xA78

    idRenderModelSkinned* attachedRenderModel; // Offset: 0xB80

    idJointAnimator* jointAnimator; // Offset: 0xB88

    bool md6WasChanged; // Offset: 0xB90

    idManagedClassPtr < idWeaponEntity > weaponEnt; // Offset: 0xB98

    bool hidden; // Offset: 0xBB8

    // launcher restricted to only this type of equipment
    equipmentType_t equipmentTypeRestriction; // Offset: 0xBBC

}; // Size: 0xBC0
