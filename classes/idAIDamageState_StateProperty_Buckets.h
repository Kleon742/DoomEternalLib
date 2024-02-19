struct idAIDamageState_StateProperty_Buckets : idAIDamageState_StateProperty
{
    // array of buckets for pain reactions, these entries override the general ones
    idList < bucketInfo_t , TAG_IDLIST , false > overrideBucketInfos; // Offset: 0x18

}; // Size: 0x30
