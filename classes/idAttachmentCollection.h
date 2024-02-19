struct idAttachmentCollection
{
    // currently attached items
    idList < idAttachment , TAG_IDLIST , false > attachments; // Offset: 0x0

    idAnimatedEntity* parent; // Offset: 0x18

}; // Size: 0x20
