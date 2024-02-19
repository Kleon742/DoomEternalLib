struct idMapEntityLocal : idMapEntity
{
    idDeclEntityDef* entityDef; // Offset: 0x20

    int entityDefLine; // Offset: 0x28

    idMapModel model; // Offset: 0x30

    // the parent of this reference
    idMapEntityLocal* parentReference; // Offset: 0x80

    // reference map id, "" by default
    idStr refId; // Offset: 0x88

    // prefab instanceId
    unsigned int instanceId; // Offset: 0xB8

    // original name if instanced from prefab
    idStr originalName; // Offset: 0xC0

    idList < idStr , TAG_IDLIST , false > layerList; // Offset: 0xF0

    idMapEntityEditorData* mapEntityEditorData; // Offset: 0x108

}; // Size: 0x110
