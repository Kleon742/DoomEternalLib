struct idHandsItem
{
    struct indexedRenderModel_t
    {
        idDeclInventory* decl; // Offset: 0x0

        idRenderModelSkinned* renderModel_FirstPerson; // Offset: 0x8

        idRenderModelSkinned* renderModel_ThirdPerson; // Offset: 0x10

        idJointAnimator* treeAnimator_FirstPerson; // Offset: 0x18

        idJointAnimator* treeAnimator_ThirdPerson; // Offset: 0x20

    }; // Size: 0x28

    // the slot this object is associated with
    equipSlot_t slot; // Offset: 0x0

    // guaranteed to not be NULL if anything is held in the hand
    idDeclInventory* itemDecl; // Offset: 0x8

    tagData_t tagData; // Offset: 0x10

    // item being held... this may be NULL even if there is an item equipped (this is the case with grenades)
    idManagedClassPtr < idInventoryItem > item; // Offset: 0x30

    // index to the name of the tag in idHands HAND_TAGS ( this is an index instead of a char * because idHandsItem is saved for savegames )
    handsTag_t tagIndex; // Offset: 0x50

    // if true, the model is hidden
    bool hidden; // Offset: 0x54

    // if true, the model position is updated each frame
    bool shouldUpdatePosition; // Offset: 0x55

    // Cosmetic Data that this handsItem is using.
    idDeclGameItem* cosmeticGameItem; // Offset: 0x58

    idList < idHandsItem::indexedRenderModel_t , TAG_IDLIST , false > renderModelList; // Offset: 0x60

    idRenderModelSkinned* renderModel; // Offset: 0x78

    idAnimStack animStack; // Offset: 0x80

    // the last time we processed anim events for the hands
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastProcessAnimEventTime; // Offset: 0xCC0

    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0xCC8

    int fxViewId; // Offset: 0xCD0

    idDeclFX* currentFXDecl; // Offset: 0xCD8

    // if true, then defer to item hidden state instead of dictating it to the item
    bool deferToItemHiddenState; // Offset: 0xCE0

    // doom: represents the base animation blend tree from the hands animweb in the hands item animstack
    idAnimator_Proxy proxyAnimator; // Offset: 0xCE8

    idAnimator_Proxy bobProxyAnimator; // Offset: 0xD30

}; // Size: 0xD78
