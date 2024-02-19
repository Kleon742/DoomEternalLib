struct idAttachment
{
    // item that is attached
    idInventoryItem* item; // Offset: 0x0

    // for MP clients, so we know what itemDecl this is assocaited with (client's don't have access to "item", above)
    idDeclInventory* itemDecl; // Offset: 0x8

    // additional translational offset {{ units = m }}
    idVec3 originOffset; // Offset: 0x10

    // extra translational offset {{ units = m }}
    idVec3 originOffsetExtra; // Offset: 0x1C

    // saved rotation offset so we can futz with it without having to look up the tag every time.
    idQuat savedRotOffset; // Offset: 0x28

    // additional rotational offset
    idQuat rotOffset; // Offset: 0x38

    // entity that is attached (if we've attached an entity and not just a render model )
    idManagedClassPtr < idEntity > entity; // Offset: 0x48

    // index of the joint that this tag is associated with.
    idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x68

    // name of the tag that this attachment is associated with. If null, then it's just using the joint.
    idAtomicString tagName; // Offset: 0x70

    // if this is between 0 and 2, it is the axis we randomly rotate around.
    int rotationAxis; // Offset: 0x78

    // handle of this attachment so that we can look it up later
    idHandle < int , invalidAttachment_t , INVALID_ATTACHMENT > handle; // Offset: 0x7C

    // true if the render model is animated (MD5 or MD6)
    bool isAnimated; // Offset: 0x0

    // true if the attachment is hidden
    bool isHidden; // Offset: 0x0

    // true if an entity's clip model was linked before being attached
    bool wasLinked; // Offset: 0x0

    // true if this attachment requires an explicit call to showAttachment(), ( and not the general call to showAttachments() );
    bool ignoreShowAll; // Offset: 0x0

    // true if this attachment requires serialization to clients
    bool isSerialized; // Offset: 0x0

    // List of unlock mods that exist for this attachment
    idList < const idDeclUnlock * , TAG_IDLIST , false > listOfUnlockMods; // Offset: 0x88

}; // Size: 0xA0
