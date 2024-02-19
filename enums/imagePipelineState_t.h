enum imagePipelineState_t : unsigned char
{
    IMAGE_PIPELINE_STATE_UNKNOWN = 0,
    IMAGE_PIPELINE_STATE_SAMPLER = 1,
    IMAGE_PIPELINE_STATE_BUFFER = 2,
    IMAGE_PIPELINE_STATE_ATTACHMENT_RO = 4,
    IMAGE_PIPELINE_STATE_ATTACHMENT_RW = 8,
    IMAGE_PIPELINE_STATE_TRANSFER_DEST = 16,
    IMAGE_PIPELINE_STATE_TRANSFER_SOURCE = 32,
    IMAGE_PIPELINE_STATE_PRESENT = 64,
    IMAGE_PIPELINE_STATE_DISCARD = 128
};