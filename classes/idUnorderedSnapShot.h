struct idUnorderedSnapShot
{
    idStaticList < idSnapShot::objectState_t * , 4096 , false , TAG_NETWORKING > unorderedObjectStates; // Offset: 0x0

    idBlockAlloc < idSnapShot::objectState_t , 64 , TAG_NETWORKING > allocatedObjs; // Offset: 0x8018

    idArray < idSnapShot::objectState_t * , 17000 > objectStateIndexMap; // Offset: 0x8040

}; // Size: 0x29380
