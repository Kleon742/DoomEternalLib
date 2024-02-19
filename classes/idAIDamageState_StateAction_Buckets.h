struct idAIDamageState_StateAction_Buckets : idAIDamageState_StateAction
{
    // if not NONE, apply this only to this pain type ( regardless of what is in the infos below )
    painType_t painType; // Offset: 0x18

    // empty damage bucket when this reaction plays
    bool clearThisBucket; // Offset: 0x1C

    // empty all damage buckets when this reaction plays
    bool clearAllBuckets; // Offset: 0x1D

}; // Size: 0x20
