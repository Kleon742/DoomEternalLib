struct stageRayPayloads_t
{
    rayPayloadInfo_t inoutPayload; // Offset: 0x0

    idList < rayPayloadInfo_t , TAG_IDLIST , false > outPayloads; // Offset: 0xE0

}; // Size: 0xF8
