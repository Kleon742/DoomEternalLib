// idTypestrictTimePoint < typestrictMonotonicTimestampUnique >
struct idTypestrictTimePoint
{
    // time span since the type epoch
    idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > sinceEpoch; // Offset: 0x0

}; // Size: 0x8
