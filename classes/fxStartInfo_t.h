struct fxStartInfo_t
{
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > actionGroup; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0x8

    fxCondition_t condition; // Offset: 0x10

    fxExtraCondition_t extraCondition; // Offset: 0x14

    fxTransformInfo_t transformInfo; // Offset: 0x18

    // system color
    idVec4 color; // Offset: 0x54

    int tagIndex; // Offset: 0x64

    // TODO: Remove view callbacks - instead generate a list of player view fx for each player to consume.
    int viewCallbacksID; // Offset: 0x68

    idFXAxisUpdate* axisUpdater; // Offset: 0x70

    fxEventReplicationType_t replicationType; // Offset: 0x78

}; // Size: 0x80
